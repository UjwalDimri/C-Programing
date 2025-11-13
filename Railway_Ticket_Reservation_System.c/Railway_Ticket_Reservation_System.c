#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int total_tickets=0;
int confirmed=0,waiting=0,rac=0;
struct passenger{
    char Name[50];
    char Destination[50];
    char Departure[50];
    int age;
    char city[50];
    char gender;
    int Pnr;
    long long int mobilenumber;
    int numofticket;
    int train_no;
};
int menu();
int admin_login();
int fare_calculator(int,int,int);
int Ticket_Booking();
int Passenger_list();
int Ticket_Cancellation();
int whereismytrain();
int ticketchart();

int main(){
    admin_login();
    return 0;
}
int Ticket_Booking(){
   struct passenger a;
   printf("Enter Number of Tickets Do You Want To Book:");
   int n;
   scanf("%d",&n);
   FILE *fp;
    fp=fopen("confirmed.txt","r");
        if(fp==NULL){
            printf("Confirmed.txt is not opeining error found !!");
        }else{
            fscanf(fp,"%d",&confirmed);
            int total_tickets=confirmed;
            fclose(fp);

        }
   if(confirmed+n>101){
    printf(":SORRY NO CONFIRMED TICKETS AVAILABLE available tickets %d:",100-confirmed);
      printf("If you want we can put you into RAC OR WAITING LIST \n press 1 for Yes for 0 No:");
      int a;
      scanf("%d",&a);
      getchar();
      if(a==1){
        int b;
        FILE *fp;
        fp=fopen("rac.txt","r");
        fscanf(fp,"%d",&b);
        fclose(fp);
        rac=b+n;
        if(rac<11){
          fp=fopen("rac.txt","w");
          rac=b+n;
          fprintf(fp,"%d",rac);
          fclose(fp);
          printf("Now you are in the RAC list \n we will notify you further if any seat available for you in the future\nThank you!!");
        }
      } else{
        int c;
        fp=fopen("waiting.txt","a+");
        fscanf(fp,"%d",&c);
        int waiting=c+n;
        fprintf(fp,"%d",waiting);
        printf("!!Thank you!!\n Have a great day ahead");
      }
   } else if(confirmed+n<100){
        for(int i=1;i<=n;i++){
        printf("Enter Details For %d Passenger \n",i);
        getchar();
        printf("Enter your Name:\n");
        fgets(a.Name, sizeof(a.Name), stdin);
        a.Name[strcspn(a.Name, "\n")] = 0;
        printf("Enter your phone number :");
        scanf("%lld",&a.mobilenumber);
        printf("Enter your age:");
        scanf("%d",&a.age);
        getchar();
        printf("Enter your Gender For male M / For Female F:\t");
        scanf("%c",&a.gender);
        getchar();
        printf("Enter Your Address (City):\t");
        scanf("%s",a.city);
        FILE *tfp;
        tfp=fopen("Trains.txt","r");
        if(tfp==NULL){
            printf("!!!NO TRAINS ERROR IN FILE OPENING !!!");
        }
        else{
            printf("\t \t \t \t-----Train List -----\n \n \n");
            char ch;
                while((ch=fgetc(tfp))!=EOF){
                    printf("%c",ch);
                }
            fclose(tfp);
           }
        getchar();
        printf("\t \t \t :From Above Trains Route:\n Please Choose your Destination: ");
        fgets(a.Destination, sizeof(a.Destination), stdin);
        a.Destination[strcspn(a.Destination,"\n")]=0;
        printf("Enter Departure:");
        fgets(a.Departure, sizeof(a.Departure), stdin);
        a.Departure[strcspn(a.Departure,"\n")]=0;
        printf("Enter Train number:");
        scanf("%d",&a.train_no);
        printf("Number of tickets do you want to book is %d :",n);
        a.numofticket=n;
        int distance;
        printf("Enter the approximate distance between Departure and Destination (in km): ");
        scanf("%d", &distance);
        int fare = fare_calculator(a.train_no, distance, a.numofticket);
        printf("The total fare for your booking is: Rs. %d\n",fare);

        if(i==1){
            FILE *ipnr;
            int pnr;
            ipnr=fopen("PNR.txt","r");
                if(ipnr==NULL){
                    printf("!!So,SORRY Can't Show Allot You A PNR Number As There Is An Issue In PNR Function!!");
                }else{
                    FILE *fp;
                    fscanf(ipnr,"%d",&pnr);
                    pnr=pnr+1;
                    printf("Your PNR is:%d\n",pnr);
                    fclose(ipnr);
                    ipnr=fopen("PNR.txt","w");
                    fprintf(ipnr,"%d",pnr);
                    fclose(ipnr);
                    a.Pnr=pnr;
                }
        }
   FILE *p;
    p=fopen("Passengerlist.txt","a+");
    fprintf(p,"\nPNR:%d",a.Pnr);
    fprintf(p,"\nTrain_no:%d",a.train_no);
    fprintf(p,"\nName :%s",a.Name);
    fprintf(p,"\nMobile Number :%lld",a.mobilenumber);
    fprintf(p,"\nDestination:%s",a.Destination);
    fprintf(p,"\nDeparture:%s",a.Departure);
    fprintf(p,"\nFare: Rs. %d", fare);
    fprintf(p,"\n");
    fclose(p);
     fp=fopen("confirmed.txt","r");
        if(fp==NULL){
            printf("Confirmed.txt is not opeining error found !!");
        }else{
            fscanf(fp,"%d",&confirmed);
            confirmed=confirmed+1;
            fclose(fp);
             fp=fopen("confirmed.txt","w");
             if(fp==NULL){
            printf("Confirmed.txt is not opeining error found !!");
            }else{
                fprintf(fp,"%d",confirmed);
                fclose(fp);
            }
       }
     }
   }
   int yno;
   printf("If you want to continue press 1 and 0 for No ");
   scanf("%d",&yno);
   if(yno==1){
       menu();
    } else if (yno==0){
        printf("Thank you have a great day ahead\n....Exiting....");
    } 
 return 0;
}
int Passenger_list(){
    FILE *fp;
    printf("\t \t \t \t \t ---------------------LIST OF PASSENGERS ------------------------------\n");
    fp=fopen("Passengerlist.txt","r");
    char ch;
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
    printf("THANK YOU FOR VISITING US \n HAVE A HAPPY AND SAVE JOURNEY");
    int n;
    printf("Do You Want To Continue Or Want To EXIT Press 1 For Continue and 0 For The Exit");
    scanf("%d",&n);
    if(n==1){
        menu();
    }else if(n==0){
        printf("THANK YOU HAVE A NICE DAY AHEAD !!!\n .....EXITING....");
    }
    return 0;
}

int Ticket_Cancellation() {
    long long int cancel_pnr;
    printf("Enter Your PNR Number which do you want to cancel:");
    scanf("%lld",&cancel_pnr);
    printf("\n\t\t------------------UPES RAILWAY TICKET CANCELLATION PORTAL---------------------");

    FILE *fp1, *fp2;
    fp1 = fopen("Passengerlist.txt", "r");
    fp2 = fopen("temp.txt", "w");
    rewind(fp1);
    if (fp1 == NULL) {
        printf("\nError can't find passenger list file.\n");

        return 0;
    }

    int found = 0;
    char line[250];
    int fare=0;

    while (fgets(line, sizeof(line), fp1)) {
        if (strstr(line, "PNR:")) {
              long long int file_pnr;
            sscanf(line, "PNR:%lld", &file_pnr);

            if (file_pnr == cancel_pnr) {
                found = 1;
                printf("\nTicket Found! PNR: %lld", cancel_pnr);
                printf("\nPlease wait while we Process your CANCELLATION...\n");

                for (int i=0;i<7;i++) {
                    fgets(line, sizeof(line), fp1);
                        if (strstr(line, "Fare:")) {
                            sscanf(line, "Fare: Rs. %d", &fare);
                            int refund=fare-10;
                            printf("Fare refunded :%d",refund);
                            
                        }
            
                continue;
            }
             
        }
        if(found == 1 && strstr(line, "Fare:")) continue;

           fputs(line, fp2);
    }
}
      

    fclose(fp1);
    fclose(fp2);

    remove("Passengerlist.txt");
    rename("temp.txt", "Passengerlist.txt");

    if (found) {
        printf("\nTicket with PNR %lld has been successfully cancelled.\n", cancel_pnr);

        FILE *fp = fopen("confirmed.txt", "r");
        if (fp != NULL) {
            fscanf(fp, "%d", &confirmed);
            fclose(fp);

            if (confirmed > 0)
                confirmed--;

            fp = fopen("confirmed.txt", "w");
            fprintf(fp, "%d", confirmed);
            fclose(fp);

            printf("\nUpdated confirmed ticket count: %d\n", confirmed);
        }

        FILE *rfp = fopen("rac.txt", "r");
        int current_rac = 0;
        if (rfp != NULL) {
            fscanf(rfp, "%d", &current_rac);
            fclose(rfp);

            if (current_rac > 0) {
                current_rac--;
                rfp = fopen("rac.txt", "w");
                fprintf(rfp, "%d", current_rac);
                fclose(rfp);
                printf("\nOne RAC passenger has been moved to Confirmed list.\n");
            }
        }

        printf("\nCancellation complete\n");
    } 
    else {
        printf("\nNo record found for PNR %lld.\n", cancel_pnr);
    }

    printf("\n---------------------------------------------------------------");
    printf("\nWould you like to go back to the Main Menu?");
    printf("\nPress 1 for Yes or 0 to Exit: ");
    int n;
    scanf("%d", &n);

    if (n==1) {
        menu();
    } else {
        printf("\nThank you for visiting UPES Railways.\nHave a pleasant day ahead!\n");
    }
return 0;
}
int ticketchart(){
    printf("\n \n \t \t \t \t ----------------------------------Tickets Info--------------------------------------------");
    FILE *fp;
    int confirmed=0,rac=0,waiting=0;
        fp=fopen("confirmed.txt","r");
        if(fp==NULL){
            printf("Confirmed.txt is not opeining error found !!");
        }else{
            fscanf(fp,"%d",&confirmed);
            printf("\n \n \t \t \t \t \t \t \t------------Confirmed Tickets--------------\n \t \t \t \t \t \t %d",confirmed);
            fclose(fp);
        }

        fp=fopen("rac.txt","r");
        if(fp==NULL){
            printf("rac.txt is not opeining error found!! ");
        }else{
            fscanf(fp,"%d",&rac);
            printf("\n \n \t \t \t \t \t \t \t-----------------RAC Tickets------------------\n \t \t \t \t \t \t %d",rac);
            fclose(fp);
        } 

        fp=fopen("waiting.txt","r");
        if(fp==NULL){
            printf("waiting.txt is not opening error found!!");
        }else{
            fscanf(fp,"%d",&waiting);
            printf("\n \n \t \t \t \t \t \t \t---------------WAITING------------------------- \t \t \t \t \t \t %d",waiting);
            fclose(fp);
        }
         printf("Do you want to contine (press 1) ");
    int n;
    scanf("%d",&n);
    if(n==1){
        menu();
    }else{
        printf("Thank you have a nice and happy day ahead");
    }
        return 0;
}
int admin_login(){
    int n;
    printf("Enter your password:");
    scanf("%d",&n);
    if(n==12345678){
        menu();
    }
    else{
        printf("Password is Wrong!!");
    }
    return 0;
}
int menu(){
    int n,train_no,distance,num_tickets;
    printf("\n \n \n \t \t \t \t -----!!UPES Railway Ticket Reservation System Mein Apkaa Swagat Hai!!------ \n \n \n");
    printf("---Press 1 for Ticket Booking----\n---Press 2 For Ticket Cancellation--- \n---Press 3 For Passenger List For a Train---\n---Press 4 Ticket Chart---\n---Press 5 For To See where is your train---\n----Press 6 For Fare Estimation---\n---Press 0 For Exit---\n");
    scanf("%d",&n);
    getchar();
    switch(n){
        case 1 :   
            Ticket_Booking();
            break;
        case 2 :
            Ticket_Cancellation();
            break;
        case 3 :
            Passenger_list();
            break;
        case 4 :
            ticketchart();
            break;
        case 5 :
            whereismytrain();
            break;
        case 6 :
            
            printf("Enter train number ,Distance,number of ticket you booked:");
            scanf("%d %d %d",&train_no,&distance,&num_tickets);
            int fare=fare_calculator(train_no,distance,num_tickets);
            printf("Your Estimated Fare Is:%d",fare);

            break;
        case 0 :
            printf("....Exiting....");
            break;
        default :
            printf("!!!!Enter a vaild input!!!!");
    }
return 0;
}
int whereismytrain(){
    printf("\n\n\n\n\n\n\t\t\t\t\t---------------------LIVE STATUS OF TRAINS------------------------------");
     FILE *fp;
     fp=fopen("trainstatus.txt","r");
     if(fp==NULL){
        printf("!!!ERROR!!! NO DATA FOUND!!!");
    }
    else{
     char ch;
     while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
    fclose(fp);
    }
    int n ;
    printf("Do You Want To Continue Or Want To EXIT Press 1 For Continue and 0 For The Exit");
    scanf("%d",&n);
    if(n==1){
        menu();
    }else if(n==0){
        printf("THANK YOU HAVE A NICE DAY AHEAD !!!\n .....EXITING....");
    }
    return 0;
} 
  int fare_calculator(int train_no, int distance, int num_tickets) {
    int base_fare;
    if (distance <= 100)
        base_fare = 100;
    else if ((distance>100)&&(distance<=300)){
        base_fare = 250;
    }
    else if ((distance>300)&&(distance<=600)){
        base_fare = 500;
    }
    else{
        base_fare = 800;
    }
    if ((train_no >= 12000)&& (train_no < 13000)){
        base_fare += 100;
    }
    else if ((train_no >= 13000)&&(train_no < 14000)){
        base_fare += 50;
    }
    int total_fare=base_fare*num_tickets;
   
    return total_fare;
    
}


