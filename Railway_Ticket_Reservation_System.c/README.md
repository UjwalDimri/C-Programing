# 🚆 Railway Ticket Reservation System — C Project

A lightweight, file-based **Railway Ticket Reservation System** implemented in **C**, designed to mimic the core functionality of real-world ticket booking platforms.  
The system supports **ticket booking, PNR generation, RAC/Waiting management, fare calculation, ticket cancellation**, and more — all using simple text-file storage.

---

## ✨ Features

### 🎫 Ticket Booking
- User-friendly passenger input
- Automatic PNR generation  
- Confirmed / RAC / Waiting allocation  
- Seat availability tracking  

### 💸 Fare Calculation
- Based on:
  - Distance  
  - Train category (premium / normal)  
- Auto-calculated per ticket count  

### ❌ Ticket Cancellation
- PNR-based cancellation  
- Refund calculation  
- Removes passenger record from file  
- Automatically shifts RAC passenger → Confirmed  

### 📄 Passenger List
Displays the full list of passen
