#include "Order.hpp"
#include <iostream>

Order::Order(const std::string& orderId, Customer* customer)
    : orderId(orderId), customer(customer) {}

Order::~Order() {}

void Order::attach(Article* article) {
    articles.push_back(article);
}

void Order::show() const {
    std::cout << "Order ID: " << orderId << "\nCustomer: " << customer->getName() << "\n";
    std::cout << "Articles:\n";
    for (const auto& article : articles) {
        std::cout << "- " << article->getName() << " ($" << article->getPrice() << ")\n";
    }
    std::cout << std::endl;
}
