#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <stdexcept>

class InvalidSeatException : public std::runtime_error
{
public:
    InvalidSeatException()
        : std::runtime_error("Invalid seat number!")
    {
    }
};

class SeatAlreadyBookedException : public std::runtime_error
{
public:
    SeatAlreadyBookedException()
        : std::runtime_error("This seat is already booked!")
    {
    }
};

class SeatNotBookedException : public std::runtime_error
{
public:
    SeatNotBookedException()
        : std::runtime_error("This seat is not currently booked!")
    {
    }
};

#endif
