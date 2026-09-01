#ifndef SEAT_HPP
#define SEAT_HPP

class Seat
{
private:
    int seatNumber;
    bool booked;

public:
    Seat();
    Seat(int number);

    int getSeatNumber() const;
    bool isBooked() const;

    void bookSeat();
    void cancelSeat();
};

#endif
