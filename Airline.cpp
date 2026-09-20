#include "../include/Airline.h"
#include <algorithm>
#include <fstream>
#include <stdexcept>

Airline::Airline()
    : nextTicketID(1) {
}void Airline::addFlight(std::shared_ptr<Flight> flight) {
    if (!flight) {
        throw std::invalid_argument("Flight cannot be null.");
    }

    flights.push_back(flight);
}

std::shared_ptr<Flight> Airline::searchFlight(
    const std::string& flightNumber) const {

    for (const auto& flight : flights) {
        if (flight->getFlightNumber() == flightNumber) {
            return flight;
        }
    }

    return nullptr;
}

void Airline::listFlights() const {
    for (const auto& flight : flights) {
        flight->displayDetails();
    }
}void Airline::registerPassenger(
    std::shared_ptr<Passenger> passenger) {

    if (!passenger) {
        throw std::invalid_argument("Passenger cannot be null.");
    }

    passengers.push_back(passenger);
}

void Airline::listPassengers() const {
    for (const auto& passenger : passengers) {
        passenger->displayDetails();
    }
