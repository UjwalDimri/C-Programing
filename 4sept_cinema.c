#include <stdio.h>

int main()
{
    float Cost = 0;
    int choice, tickets, totalTickets = 0;

    do
    {

        printf("1. Premium Seat  - Rs.200\t 2. Standard Seat - Rs.150\t 3. Economy Seat  - Rs.100\t 4. Exit\t");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of Premium tickets: ");
            scanf("%d", &tickets);
            Cost += tickets * 200;
            totalTickets += tickets;
            break;

        case 2:
            printf("Enter number of Standard tickets: ");
            scanf("%d", &tickets);
            Cost += tickets * 150;
            totalTickets += tickets;
            break;

        case 3:
            printf("Enter number of Economy tickets: ");
            scanf("%d", &tickets);
            Cost += tickets * 100;
            totalTickets += tickets;
            break;

        case 4:
            printf("\nBooking process finished.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    if (totalTickets >= 5)
    {
        printf("\nYou booked %d tickets. Eligible for 5%% discount.\n", totalTickets);
        Cost = Cost - (Cost * 0.05);
    }

    printf("Total Tickets Booked: %d\n", totalTickets);
    printf("Final Bill Amount: Rs. %.2f\n", Cost);
    return 0;
}