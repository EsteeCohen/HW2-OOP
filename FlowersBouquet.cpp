#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet){
	this->bouquet = bouquet;
}

std::string FlowersBouquet::getBouquet(){
	std::string printedBouquet;
	for (const auto& flower : bouquet) printedBouquet = printedBouquet + (flower + ", ");
	return printedBouquet.substr(0, printedBouquet.length()-2);
}

void FlowersBouquet::arrange(){
	this->is_Arranged = true;
}