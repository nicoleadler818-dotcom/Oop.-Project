#include "../include/Airline.h"
#include "../include/Exceptions.h"
#include "../include/Flight.h"
#include "../include/Passenger.h"
#include "../include/Ticket.h"

#include <iostream>
#include <memory>
#include <string>

int main() {

    Airline airline;

    int choice = 0;

    do {
        std::cout << "\n===== AIRLINE RESERVATION SYSTEM =====\n";
        std::cout << "1. Add Flight\n";
        std::cout << "2. List Flights\n";
        std::cout << "3. Search Flight\n";
        std::cout << "4. Register Passenger\n";
        std::cout << "5. List Passengers\n";
        std::cout << "6. Book Ticket\n";
        std::cout << "7. Cancel Ticket\n";
        std::cout << "8. List Tickets\n";
        std::cout << "9. Passenger History\n";
        std::cout << "10. Flight Report\n";
        std::cout << "11. Revenue Report\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        try {

            switch (choice) {

                case 1:
                    // Create a DomesticFlight,
                    // InternationalFlight, or CharterFlight
                    // and add it to the airline.
                    break;

                case 2:
                    airline.listFlights();
                    break;

                case 3:
                    // Ask for flight number.
                    // Search and display the flight.
                    break;

                case 4:
                    // Ask for passenger details.
                    // Create Economy, Business,
                    // or FirstClass passenger.
                    break;

                case 5#include "../include/Airline.h"
#include "../include/Exceptions.h"
#include "../include/Flight.h"
#include "../include/Passenger.h"
#include "../include/Ticket.h"

#include <iostream>
#include <memory>
#include <string>

int main() {

    Airline airline;

    int choice = 0;

    do {
        std::cout << "\n===== AIRLINE RESERVATION SYSTEM =====\n";
        std::cout << "1. Add Flight\n";
        std::cout << "2. List Flights\n";
        std::cout << "3. Search Flight\n";
        std::cout << "4. Register Passenger\n";
        std::cout << "5. List Passengers\n";
        std::cout << "6. Book Ticket\n";
        std::cout << "7. Cancel Ticket\n";
        std::cout << "8. List Tickets\n";
        std::cout << "9. Passenger History\n";
        std::cout << "10. Flight Report\n";
        std::cout << "11. Revenue Report\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        try {

            switch (choice) {

                case 1:
                    // Create a DomesticFlight,
                    // InternationalFlight, or CharterFlight
                    // and add it to the airline.
                    break;

                case 2:
                    airline.listFlights();
                    break;

                case 3:
                    // Ask for flight number.
                    // Search and display the flight.
                    break;

                case 4:
                    // Ask for passenger details.
                    // Create Economy, Business,
                    // or FirstClass passenger.
                    break;

                case 5:
                    airline.listPassengers();
                    break;

                case 6:
                    // Ask for passenger ID
                    // and flight number.
                    // Book the ticket.
                    break;

                case 7:
                    // Ask for ticket ID
                    // and cancel the ticket.
                    break;

                case 8:
                    airline.listTickets();
                    break;

                case 9:
                    // Ask for passenger ID
                    // and display booking history.
                    break;

                case 10:
                    // Ask for flight number
                    // and display flight report.
                    break;

                case 11:
                    airline.showRevenueReport();
                    break;

                case 0:
                    std::cout << "Exiting program...\n";
                    break;

                default:
                    std::cout << "Invalid choice.\n";
            }

        }
        catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << '\n';
        }

    } while (choice != 0);

    return 0;
}