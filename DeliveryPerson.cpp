#include "DeliveryPerson.h"
#include <string>
#include <vector>

DeliveryPerson::DeliveryPerson(std::string name) : Person(name){}

void DeliveryPerson::deliver(Person* recipiant, FlowersBouquet* flowersBouquet){
	std::cout << this->getName() << " delivers flowers " << recipiant->getName() << std::endl; //LINE 13
	recipiant->acceptFlowers(flowersBouquet);
}

std::string DeliveryPerson::getName() {
	return "Delivery Person " + Person::getName();
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