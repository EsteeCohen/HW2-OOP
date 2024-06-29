#pragma once
#include <string>
#include <vector>

class FlowersBouquet{
    private:
        bool is_Arranged;
        std::vector<std::string> bouquet;
    public:
        FlowersBouquet(std::vector<std::string>);
        void arrange();
        std::string getBouquet();
};
