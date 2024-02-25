#include <cmath>
#include <iostream>

int litres(double time) {
    double value = time * 0.5;
    return floor(value);
}

int main() {
    int result = litres(2);
    std::cout << "Litres: " << result << std::endl;
    return 0;
}