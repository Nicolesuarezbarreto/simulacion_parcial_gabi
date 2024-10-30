#include "Article.hpp"

Article::Article(const std::string& id, const std::string& name, double price)
    : id(id), name(name), price(price) {}

std::string Article::getId() const { return id; }

std::string Article::getName() const { return name; }

double Article::getPrice() const { return price; }
