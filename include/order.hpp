#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>
#include <vector>
#include "Article.hpp"
#include "Customer.hpp"

class Order {
private:
    std::string orderId;
    Customer* customer;
    std::vector<Article*> articles;

public:
    Order(const std::string& orderId, Customer* customer);
    ~Order();
    void attach(Article* article);
    void show() const;
};

#endif
