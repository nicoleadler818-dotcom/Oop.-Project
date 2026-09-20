ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>

class Flight {
protected:
    std::string flightNumber;
    std::string origin;
    std::string destination;
    std::string departureDateTime;
    int totalSeats;
    int availableSeats;

public:
    Flight(const std::string& number,
           const std::string& from,
           const std::string& to,
           const std::string& dateTime,
           int seats);

    virtual ~Flight() = default;

    virtual double calculateBaseFare() const = 0;
    virtual void displayDetails() const = 0;

    std::string getFlightNumber() const;
    std::string getOrigin() const;
    std::string getDestination() const;
    std::string getDepartureDateTime() const;

    int getTotalSeats() const;
    int getAvailableSeats() const;

    bool hasAvailableSeat() const;

    void reserveSeat();
    void releaseSeat();

    friend std::ostream& operator<<(std::ostream& os, const Flight& flight);
};


class DomesticFlight : public Flight {
private:
    std::string domesticRoute;

public:
    DomesticFlight(const std::string& number,
                    const std::string& from,
                    const std::string& to,
                    const std::string& dateTime,
                    int seats,
                    const std::string& route);
    double calculateBaseFare() const override;
    void displayDetails() const override;
};


class InternationalFlight : public Flight {
private:
    bool visaRequired;

public:
    InternationalFlight(const std::string& number,
                         const std::string& from,
                         const std::string& to,
                         const std::string& dateTime,
                         int seats,
                         bool visa);

    double calculateBaseFare() const override;
    void displayDetails() const override;
};


class CharterFlight : public Flight {
private:
    std::string contractHolder;

public:
    CharterFlight(const std::string& number,
                  const std::string& from,
                  const std::string& to,
                  const std::string& dateTime,
                  int seats,
                  const std::string& holder);

    double calculateBaseFare() const override;
    void displayDetails() const override;
};

#endif