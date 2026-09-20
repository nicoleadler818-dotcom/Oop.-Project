#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <stdexcept>
#include <string>

class FlightNotFoundException : public std::runtime_error {
public:
    FlightNotFoundException(const std::string& message)
        : std::runtime_error(message) {
    }
};

class PassengerNotFoundException : public std::runtime_error {
public:
    PassengerNotFoundException(const std::string& message)
        : std::runtime_error(message) {
    }
};

class TicketNotFoundException : public std::runtime_error {
public:
    TicketNotFoundException(const std::string& message)
        : std::runtime_error(message) {
    }
};

class FlightFullException : public std::runtime_error {
public:
    FlightFullException(const std::string& message)
        : std::runtime_error(message) {
    }
};

#endif