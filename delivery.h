// delivery.h
// A. Harrison Owen
// Started: 08/30/2021
// Class for product tracking:
//     keeps track of item product, quantity, and month of delivery

#ifndef DELIVERY_DELIVERY_H
#define DELIVERY_DELIVERY_H

#include <iostream>
#include <string>
#include <utility>

class Delivery {

public:

Delivery(){
 setItem("UNSPECIFIED", 0, 1);
}

Delivery(std::string product, int qty, int month){
    setItem(std::move(product), qty, month);
}

public:
    void setItem(std::string product,
                 int qty, int month);

    [[nodiscard]] std::string getProduct() const;
    [[nodiscard]] int getQuantity() const;
    [[nodiscard]] int getMonth() const;


private:
    std::string _product;
    int _qty{};
    int _month{};
};


#endif //DELIVERY_DELIVERY_H
