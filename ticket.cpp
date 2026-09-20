#include "../include/Ticket.h"
#include <stdexcept>

Ticket::Ticket(const std::string& id,
               std::shared_ptr<Passenger> passengerPtr,
               std::shared_ptr<Flight> flightPtr,
               int seat,
               double fare)
    : ticketID(id),
      passenger(passengerPtr),
      flight(flightPtr),
      seatNumber(seat),
      farePaid(fare),
      status(BookingStatus::CONFIRMED) {

    if (!passenger) {
        throw std::invalid_argument("Passenger cannot be null.");
    }

    if (!flight) {
        throw std::invalid_argument("Flight cannot be null.");
    }

    if (seat <= 0) {
        throw std::invalid_argument("Seat number must be positive.");
    }

    if (fare < 0) {
        throw std::invalid_argument("Fare cannot be negative.");
    }
}

std::string Ticket::getTicketID() const {
    return ticketID;
}

std::shared_ptr<Passenger> Ticket::getPassenger() const {
    return passenger;
}

std::shared_ptr<Flight> Ticket::getFlight() const {
    return flight;
}

int Ticket::getSeatNumber() const {
    return seatNumber;
}

double Ticket::getFarePaid() const {
    return farePaid;
}

BookingStatus Ticket::getStatus() const {
    return status;
}

void Ticket::cancel() {
    status = BookingStatus::CANCELLED;
}

bool Ticket::isConfirmed() const {
    return status == BookingStatus::CONFIRMED;
}


// Compare two tickets using their ticket IDs.
bool Ticket::operator==(const Ticket& other) const {
    return ticketID == other.ticketID;
}


// Display ticket information.
std::ostream& operator<<(std::ostream& os,
                         const Ticket& ticket) {

    os << "Ticket ID: " << ticket.ticketID
       << " | Passenger: " << ticket.passenger->getName()
       << " | Flight: " << ticket.flight->getFlightNumber()
       << " | Seat: " << ticket.seatNumber
       << " | Fare: $" << ticket.farePaid
       << " | Status: ";

    if (ticket.status == BookingStatus::CONFIRMED) {
        os << "Confirmed";
    } else {
        os << "Cancelled";
    }

    return os;
}