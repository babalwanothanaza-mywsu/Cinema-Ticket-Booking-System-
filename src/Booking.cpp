#include "../include/Booking.hpp"
#include <iostream>

Booking::Booking()
{
    customerName = "";
    seatNumber = 0;
}

Booking::Booking(std::string name, int seat)
{
    customerName = name;
    seatNumber = seat;
}

std::string Booking::getCustomerName() const
{
    return customerName;
}

int Booking::getSeatNumber() const
{
    return seatNumber;
}

void Booking::setCustomerName(std::string name)
{
    customerName = name;
}

void Booking::setSeatNumber(int seat)
{
    seatNumber = seat;
}

void Booking::displayBooking() const
{
    std::cout << "Customer Name: " << customerName << std::endl;
    std::cout << "Seat Number: " << seatNumber << std::endl;
}
