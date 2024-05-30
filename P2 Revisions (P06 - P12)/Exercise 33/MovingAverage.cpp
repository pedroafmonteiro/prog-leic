#include "MovingAverage.h"
#include <iostream>
#include <iomanip>

using namespace std;

MovingAverage::MovingAverage(size_t n) : n_(n) { }

void MovingAverage::update(double value)
{
    values_.push_back(value);
    if (values_.size() > n_) {
        values_.pop_front();
    }
}

double MovingAverage::get() const
{
    double sum = 0.0;
    for (const auto& value : values_) {
        sum += value;
    }
    return sum / values_.size();
}

int main() {
    return 0;
}