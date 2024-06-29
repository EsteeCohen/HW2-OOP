#pragma once
#include "FlowersBouquet.h"
#include "Person.h"
#include "Grower.h"

class WholeSaler: public Person{
    private:
        Grower* grower;
    public:
        WholeSaler(std::string);
        FlowersBouquet* acceptOrder(std::vector<std::string>);
        std::string getName();
};