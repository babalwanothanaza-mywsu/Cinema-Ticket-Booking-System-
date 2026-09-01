#include "../include/Cinema.hpp"
#include <iostream>

Cinema::Cinema()
{
    for (int i = 0; i < TOTAL_SEATS; i++)
    {
        seats[i] = Seat(i + 1);
    }
}

void Cinema::bookSeat(int seatNumber, const std::string& customerName)
{
    if (seatNumber < 1 || seatNumber > TOTAL_SEATS)
    {
        throw InvalidSeatException();
    }

    int index = seatNumber - 1;

    if (seats[index].isBooked())
    {
        throw SeatAlreadyBookedException();
    }

    seats[index].bookSeat();
    bookings[index] = Booking(customerName, seatNumber);
}

void Cinema::cancelBooking(int seatNumber)
{
    if (seatNumber < 1 || seatNumber > TOTAL_SEATS)
    {
        throw InvalidSeatException();
    }

    int index = seatNumber - 1;

    if (!seats[index].isBooked())
    {
        throw SeatNotBookedException();
    }

    seats[index].cancelSeat();
    bookings[index] = Booking();
}

void Cinema::displayAvailableSeats() const
{
    std::cout << "\nAvailable Seats:\n";

    bool available = false;

    for (int i = 0; i < TOTAL_SEATS; i++)
    {
        if (!seats[i].isBooked())
        {
            std::cout << seats[i].getSeatNumber() << " ";
            available = true;
        }
    }

    if (!available)
    {
        std::cout << "No seats available.";
    }

    std::cout << std::endl;
}

void Cinema::displayAllBookings() const
{
    std::cout << "\nCurrent Bookings:\n";

    bool found = false;

    for (int i = 0; i < TOTAL_SEATS; i++)
    {
        if (seats[i].isBooked())
        {
            bookings[i].displayBooking();
            std::cout << std::endl;
            found = true;
        }
    }

    if (!found)
    {
        std::cout << "No bookings found." << std::endl;
    }
}
