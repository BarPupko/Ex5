//
// Created by CBSC on 23-Nov-23.
//

#ifndef EX5_CAKE_H
#define EX5_CAKE_H
#include "Date.h"
#include <iostream>

class Cake {
private:
    Date ExpiryDate;
    int const Diameter;
    double height;
    double price;
    int storage;//1 for refrigerator and 2 for the freezer
    bool glutenFree; //True OR False


public:
    Cake(const Date &expiryDate, const int diameter, double height, double price, int storage, bool glutenFree);
    //Copy constructor
    Cake(const Cake& other);

    bool operator==(const Cake& other) const;
    Cake& operator+=(double amount);
    friend std::ostream& operator<<(std::ostream& os, const Cake& cake);

};


#endif //EX5_CAKE_H
