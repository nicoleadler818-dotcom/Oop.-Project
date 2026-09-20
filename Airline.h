#ifndef AIRLINE_H
#define AIRLINE_H

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <map>

#include "Flight.h"
#include "Passenger.h"
#include "Ticket.h"

class Airline {
private:
    std::vector<std::shared_ptr<Flight>> flights;
    std::vector<std::shared_ptr<Passenger>> passengers;
    std::vector<std::shared_ptr<Ticket>> tickets;

    int nextTicketID;

public:
    Airline();

    // Flight operations
    void addFlight(std::shared_ptr<Flight> flight);
    void removeFlight(const std::string& flightNumber);
    std::shared_ptr<Flight> searchFlight(
        const std::string& flightNumber) const;
    void listFlights() const;

    // Passenger operations
    void registerPassenger(std::shared_ptr<Passenger> passenger);
    void removePassenger(const std::string& passengerID);
    void passengerHistory(const std::string& passengerID) const;
    void listPassengers() const;

    // Booking operations
    std::shared_ptr<Ticket> bookTicket(
        const std::string& passengerID,
        const std::string& flightNumber);

    void cancelTicket(const std::string& ticketID);

    // Ticket operations
    std::shared_ptr<Ticket> findTicket(
        const std::string& ticketID) const;

    void listTickets() const;

    // Reports
    void showFlightReport(const std::string& flightNumber) const;
    void showRevenueReport() const;

    // Persistence
    void saveData(const std::string& filename) const;
    void loadData(const std::string& filename);

private:
    std::string generateTicketID();
};

#endif