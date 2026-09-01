#ifndef BOOKING_HPP
#define BOOKING_HPP

#include <string>

class Booking
{
private:
    std::string customerName;
    int seatNumber;

public:
    Booking();
    Booking(std::string name, int seat);

    std::string getCustomerName() const;
    int getSeatNumber() const;

    void setCustomerName(std::string name);
    void setSeatNumber(int seat);

    void displayBooking() const;
};

#endif
