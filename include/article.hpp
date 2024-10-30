#ifndef ARTICLE_HPP
#define ARTICLE_HPP

#include <string>

class Article {
private:
    std::string id;
    std::string name;
    double price;

public:
    Article(const std::string& id, const std::string& name, double price);
    std::string getId() const;
    std::string getName() const;
    double getPrice() const;
};

#endif
