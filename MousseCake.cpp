//
// Created by CBSC on 23-Nov-23.
//

#include "MousseCake.h"

MousseCake::MousseCake(const Date &expiryDate, int diameter, double height, double price, int storage, bool glutenFree, const std::string& mousseTaste)
        : Cake(expiryDate, diameter, height, price, storage, glutenFree), MousseTaste(new std::string(mousseTaste)) {
}

MousseCake::MousseCake(const MousseCake& other)
        : Cake(other), MousseTaste(new std::string(*other.MousseTaste)) {
}

MousseCake::~MousseCake() {
    delete MousseTaste;
}

std::string *MousseCake::getMousseTaste() const {
    return MousseTaste;
}

void MousseCake::setMousseTaste(std::string *mousseTaste) {
    MousseTaste = mousseTaste;
}
