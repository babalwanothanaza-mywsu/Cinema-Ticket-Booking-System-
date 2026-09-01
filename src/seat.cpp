#include "../include/Seat.hpp"

Seat::Seat()
{
    seatNumber = 0;
    booked = false;
}

Seat::Seat(int number)
{
    seatNumber = number;
    booked = false;
}

int Seat::getSeatNumber() const
{
    return seatNumber;
}

bool Seat::isBooked() const
{
    return booked;
}

void Seat::bookSeat()
{
    booked = true;
}

void Seat::cancelSeat()
{
    booked = false;
}
