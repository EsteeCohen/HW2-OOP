#include "Florist.h"

Florist::Florist(std::string name, WholeSaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) :Person(name){
    this->name = name;
    this->wholesaler = wholesaler;
    this->flowerArranger = flowerArranger;
    this->deliveryPerson = deliveryPerson;
}

void Florist::acceptOrder(Person* person, std::vector<std::string> flowers){
    std::cout << this->getName() << " forwards request to " << wholesaler->getName() << "." << std::endl; //LINE 2
    FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);
    std:: cout << wholesaler->getName() << " returns flowers to " << this->getName() << "." << std::endl; //LINE 8
    std::cout << this->getName() << " request flowers arrangement from " << flowerArranger->getName() << std::endl; //LINE 9
    flowerArranger->arrangeFlowers(bouquet);
    std::cout << flowerArranger->getName() << " returns arranged flowers to " << this->getName() << std::endl; //LINE 11
    std::cout << this->getName() << " forwards flowers to " << deliveryPerson->getName() << "." << std::endl; //LINE 12
    deliveryPerson->deliver(person, bouquet);
}

std::string Florist::getName(){
    return "Florist " + Person::getName();
}

//Chris orders flowers to Robin from Florist Fred: Roses, Violets, Gladiolus. - 1
//Florist Fred forwards request to Wholesaler Watson. - 2
//Wholesaler Watson forwards the request to Grower Gray. - 3
//Grower Gray forwards the request to Gardener Garett. - 4
//Gardener Garett prepares flowers. - 5
//Gardener Garett returns flowers to Grower Gray. - 6
//Grower Gray returns flowers to Wholesaler Watson. - 7
//Wholesaler Watson returns flowers to Florist Fred. - 8
//Florist Fred request flowers arrangement from Flower Arranger Flora. - 9
//Flower Arranger Flora arranges flowers. - 10
//Flower Arranger Flora returns arranged flowers to Florist Fred. - 11
//Florist Fred forwards flowers to Delivery Person Dylan. - 12
//Delivery Person Dylan delivers flowers Robin. - 13
//Robin accepts the flowers: Roses, Violets, Gladiolus. - 14