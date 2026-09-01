#ifndef CINEMA_HPP
#define CINEMA_HPP

#include <string>
#include "Seat.hpp"
#include "Booking.hpp"
#include "Exceptions.hpp"

class Cinema
{
private:
    static const int TOTAL_SEATS = 20;

    Seat seats[TOTAL_SEATS];
    Booking bookings[TOTAL_SEATS];

public:
    Cinema();

    void bookSeat(int seatNumber, const std::string& customerName);
    void cancelBooking(int seatNumber);

    void displayAvailableSeats() const;
    void displayAllBookings() const;
};

#endif
