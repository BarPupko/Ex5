//
// Created by CBSC on 23-Nov-23.
//

#include "Cake.h"

Cake::Cake(const Date &expiryDate, const int diameter, double height, double price, int storage, bool glutenFree=false)
    : ExpiryDate(expiryDate), Diameter(diameter), height(height), price(price), storage(storage),glutenFree(glutenFree) {

}

// Copy constructor
Cake::Cake(const Cake& other)
        : ExpiryDate(other.ExpiryDate), Diameter(other.Diameter), height(other.height),
          price(other.price), storage(other.storage), glutenFree(other.glutenFree) {
    // Copy any dynamic resources or handle resource copying here
}

// Destructor
Cake::~Cake() {
    // Release any dynamic resources or handle resource cleanup here
}

bool Cake::operator==(const Cake& other) const {
    return ExpiryDate == other.ExpiryDate &&
           Diameter == other.Diameter &&
           Height == other.Height &&
           Price == other.Price &&
           Storage == other.Storage &&
           GlutenFree == other.GlutenFree;
}

Cake& Cake::operator+=(double amount) {
    Price += amount;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Cake& cake) {
    os << "Expiry Date: " << cake.ExpiryDate
       << ", Diameter: " << cake.Diameter
       << ", Height: " << cake.Height
       << ", Price: " << cake.Price
       << ", Storage: " << cake.Storage
       << ", Gluten Free: " << (cake.GlutenFree ? "Yes" : "No");
    return os;
}




