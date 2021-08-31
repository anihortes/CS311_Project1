// delivery.h
// A. Harrison Owen
// Started: 08/30/2021
// Class for product tracking:
//     keeps track of item product, quantity, and month of delivery

#include "delivery.h"
#include <string>
using std::string;

void Delivery::setItem(std::string product, int qty, int month) {
    _product = product;
    _qty = qty;
    _month = month;
}

std::string Delivery::getProduct() const {
    return _product;
}

int Delivery::getQuantity() const {
    return _qty;
}

int Delivery::getMonth() const {
    return _month;
}
