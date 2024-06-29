
#include "Person.h"
#include "Florist.h"
#include "FlowerArranger.h"
#include "Grower.h"
#include "WholeSaler.h"
#include "DeliveryPerson.h"
#include "Gardener.h"


Person::Person(std::string name) : name(name){}

void Person::orderFlowers(Florist* florist, Person* recipiant, std::vector<std::string> order){
    std::cout << getName() << " orders flowers to " << recipiant->getName() << " from " << florist->getName() << std::endl; //LINE 1
	florist->acceptOrder(recipiant, order);
}

void Person::acceptFlowers(FlowersBouquet* flowersBouquet){
    std::cout << this->getName() << " accepts the flowers: " << flowersBouquet->getBouquet()<< "." << std::endl; //LINE 14
}

std::string Person::getName(){
	return name;
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