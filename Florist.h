#pragma once 
#include "Person.h"
#include "WholeSaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"

class Florist : public Person{
private:
    WholeSaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;
public:
    Florist(std::string, WholeSaler*, FlowerArranger*, DeliveryPerson*);
    void acceptOrder(Person*, std::vector<std::string>);
    std::string getName();
};