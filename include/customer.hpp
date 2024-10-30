#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>

class Customer {
private:
    std::string id;
    std::string name;
    std::string address;

public:
    Customer(const std::string& id, const std::string& name, const std::string& address);
    std::string getId() const;
    std::string getName() const;
    std::string getAddress() const;
};

#endif
