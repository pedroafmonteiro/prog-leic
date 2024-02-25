#include <cstdint>
#include <iostream>

bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left) {
    if (mpg * fuel_left < distance_to_pump) {
        return false;
    } else {
        return true;
    }
}

int main() {
    uint32_t distance = 50;
    uint32_t mpg = 25;
    uint32_t fuel = 2;

    bool canMakeIt = zero_fuel(distance, mpg, fuel);

    if (canMakeIt) {
        std::cout << "You can make it to the pump!" << std::endl;
    } else {
        std::cout << "You won't make it to the pump!" << std::endl;
    }

    return 0;
}