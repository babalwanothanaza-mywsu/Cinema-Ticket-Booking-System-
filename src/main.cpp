#include "../include/Cinema.hpp"
#include <iostream>
#include <string>
#include <limits>

int main()
{
    Cinema cinema;
    int choice;
    int seatNumber;
    std::string customerName;

    do
    {
        std::cout << "\n====================================\n";
        std::cout << "   CINEMA TICKET BOOKING SYSTEM\n";
        std::cout << "====================================\n";
        std::cout << "1. Book a Seat\n";
        std::cout << "2. Cancel a Booking\n";
        std::cout << "3. Display Available Seats\n";
        std::cout << "4. Display All Bookings\n";
        std::cout << "5. Exit\n";
        std::cout << "====================================\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        try
        {
            switch (choice)
            {
                case 1:
                    std::cout << "\nEnter customer name: ";

                    std::cin.ignore(
                        std::numeric_limits<std::streamsize>::max(),
                        '\n'
                    );

                    std::getline(std::cin, customerName);

                    std::cout << "Enter seat number (1-20): ";
                    std::cin >> seatNumber;

                    cinema.bookSeat(seatNumber, customerName);

                    std::cout << "Seat booked successfully!\n";
                    break;

                case 2:
                    std::cout << "\nEnter seat number to cancel: ";
                    std::cin >> seatNumber;

                    cinema.cancelBooking(seatNumber);

                    std::cout << "Booking cancelled successfully!\n";
                    break;

                case 3:
                    cinema.displayAvailableSeats();
                    break;

                case 4:
                    cinema.displayAllBookings();
                    break;

                case 5:
                    std::cout << "\nThank you for using the Cinema Ticket Booking System!\n";
                    break;

                default:
                    std::cout << "Invalid choice. Please try again.\n";
            }
        }
        catch (const std::exception& e)
        {
            std::cout << "Error: " << e.what() << std::endl;
        }

    }
    while (choice != 5);

    return 0;
}
