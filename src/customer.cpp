#include "Customer.hpp"

Customer::Customer(const std::string& id, const std::string& name, const std::string& address)
    : id(id), name(name), address(address) {}

std::string Customer::getId() const { return id; }

std::string Customer::getName() const { return name; }

std::string Customer::getAddress() const { return address; }
