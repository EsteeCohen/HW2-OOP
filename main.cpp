#include <iostream>
#include <vector>
#include "Florist.h"
#include "WholeSaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Person.h"
#include "FlowersBouquet.h"
#include "Gardener.h"
#include "Grower.h"



int main() {
    // Create instances of each role
    WholeSaler wholesaler("Watson");
    FlowerArranger flowerArranger("Flora");
    DeliveryPerson deliveryPerson("Dylan");
    Grower grower("Gray");
    Gardener gardener("Garett");
    Florist florist("Fred", &wholesaler, &flowerArranger, &deliveryPerson);

    // Simulate an order
    Person customer("Chris");
    Person recipient("Robin");
    std::vector<std::string> flowers = {"Roses", "Violets", "Gladiolus"};
    FlowersBouquet flowersBouquet(flowers);
    //FlowersBouquet* bouquet = &flowersBouquet;
    //Florist* fred = &florist;
    //Person* Robin = &recipient;

    customer.orderFlowers(&florist, &recipient, flowers);
    recipient.acceptFlowers(&flowersBouquet);

    return 0;
}