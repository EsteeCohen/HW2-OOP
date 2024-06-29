#pragma once
#include <iostream>
#include <vector>

class Florist; // forward declaration
class FlowersBouquet; // forward declaration
class Person{
    protected:
        std::string name;
    public:
        Person(std::string);
        void orderFlowers(Florist*, Person*, std::vector<std::string>);
        void acceptFlowers(FlowersBouquet*);
        std::string getName();
};