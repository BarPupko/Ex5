//
// Created by CBSC on 23-Nov-23.
//

#ifndef EX5_MOUSSECAKE_H
#define EX5_MOUSSECAKE_H
#include "Cake.h"

class MousseCake : public Cake {
public:
    // Constructor
    MousseCake(const Date &expiryDate, int diameter, double height, double price, int storage, bool glutenFree, const std::string& mousseTaste);

    // Copy constructor
    MousseCake(const MousseCake& other);

    // Destructor
    ~MousseCake();

    std::string *getMousseTaste() const;

    void setMousseTaste(std::string *mousseTaste);

private:
    std::string* MousseTaste;  // Pointer to a string for mousse taste

};


#endif //EX5_MOUSSECAKE_H
