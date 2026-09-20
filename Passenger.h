#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>

class Passenger {
protected:
    std::string passengerID;
    std::string name;
    std::string email;
    std::string phone;

public:
    Passenger(const std::string& id,
              const std::string& passengerName,
              const std::string& passengerEmail,
              const std::string& passengerPhone);

    virtual ~Passenger() = default;

    virtual double getBaggageAllowance() const = 0;
    virtual double getLoyaltyMultiplier() const = 0;
    virtual double getRefundPercentage() const = 0;
    virtual std::string getPassengerType() const = 0;

    std::string getPassengerID() const;
    std::string getName() const;
    std::string getEmail() const;
    std::string getPhone() const;

    virtual void displayDetails() const;

    friend std::ostream& operator<<(std::ostream& os,
                                    const Passenger& passenger);
};


class EconomyPassenger : public Passenger {
public:
    EconomyPassenger(const std::string& id,
                     const std::string& name,
                     const std::string& email,
                     const std::string& phone);

    double getBaggageAllowance() const override;
    double getLoyaltyMultiplier() const override;
    double getRefundPercentage() const override;
    std::string getPassengerType() const override;
};


class BusinessPassenger : public Passenger {
public:
    BusinessPassenger(const std::string& id,
                      const std::string& name,
                      const std::string& email,
                      const std::string& phone);

    double getBaggageAllowance() const override;
    double getLoyaltyMultiplier() const override;
    double getRefundPercentage() const override;
    std::string getPassengerType() const override;
};


class FirstClassPassenger : public Passenger {
public:
    FirstClassPassenger(const std::string& id,
                        const std::string& name,
                        const std::string& email,
                        const std::string& phone);

    double getBaggageAllowance() const override;
    double getLoyaltyMultiplier() const override;
    double getRefundPercentage() const override;
    std::string getPassengerType() const override;
};

#endif