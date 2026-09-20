#include "../include/Passenger.h"

Passenger::Passenger(const std::string& id,
                     const std::string& passengerName,
                     const std::string& passengerEmail,
                     const std::string& passengerPhone)
    : passengerID(id),
      name(passengerName),
      email(passengerEmail),
      phone(passengerPhone) {
}

std::string Passenger::getPassengerID() const {
    return passengerID;
}

std::string Passenger::getName() const {
    return name;
}

std::string Passenger::getEmail() const {
    return email;
}

std::string Passenger::getPhone() const {
    return phone;
}

void Passenger::displayDetails() const {
    std::cout << "Passenger ID: " << passengerID
              << " | Name: " << name
              << " | Email: " << email
              << " | Phone: " << phone
              << " | Type: " << getPassengerType()
              << " | Baggage: " << getBaggageAllowance() << " kg"
              << " | Loyalty Multiplier: " << getLoyaltyMultiplier()
              << " | Refund: " << getRefundPercentage() * 100 << "%"
              << '\n';
}

std::ostream& operator<<(std::ostream& os,
                         const Passenger& passenger) {
    os << "Passenger ID: " << passenger.passengerID
       << " | Name: " << passenger.name
       << " | Type: " << passenger.getPassengerType();

    return os;
}


// ==================== ECONOMY ====================

EconomyPassenger::EconomyPassenger(
    const std::string& id,
    const std::string& name,
    const std::string& email,
    const std::string& phone)
    : Passenger(id, name, email, phone) {
}

double EconomyPassenger::getBaggageAllowance() const {
    return 20.0;
}

double EconomyPassenger::getLoyaltyMultiplier() const {
    return 1.0;
}

double EconomyPassenger::getRefundPercentage() const {
    return 0.50;
}

std::string EconomyPassenger::getPassengerType() const {
    return "Economy";
}


// ==================== BUSINESS ====================

BusinessPassenger::BusinessPassenger(
    const std::string& id,
    const std::string& name,
    const std::string& email,
    const std::string& phone)
    : Passenger(id, name, email, phone) {
}

double BusinessPassenger::getBaggageAllowance() const {
    return 30.0;
}

double BusinessPassenger::getLoyaltyMultiplier() const {
    return 1.5;
}

double BusinessPassenger::getRefundPercentage() const {
    return 0.75;
}

std::string BusinessPassenger::getPassengerType() const {
    return "Business";
}


// ==================== FIRST CLASS ====================

FirstClassPassenger::FirstClassPassenger(
    const std::string& id,
    const std::string& name,
    const std::string& email,
    const std::string& phone)
    : Passenger(id, name, email, phone) {
}

double FirstClassPassenger::getBaggageAllowance() const {
    return 40.0;
}

double FirstClassPassenger::getLoyaltyMultiplier() const {
    return 2.0;
}

double FirstClassPassenger::getRefundPercentage() const {
    return 0.90;
}

std::string FirstClassPassenger::getPassengerType() const {
    return "First Class";
}