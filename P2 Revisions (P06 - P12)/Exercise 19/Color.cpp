#include "Color.h"

using namespace std;

Color::Color(unsigned char red, unsigned char green, unsigned char blue)
{
    red_ = red;
    green_ = green;
    blue_ = blue;
}

Color::Color(const Color &c)
    : red_(c.red_), green_(c.green_), blue_(c.blue_)
{
}

unsigned char Color::red() const
{
    return red_;
}

unsigned char Color::green() const
{
    return green_;
}

unsigned char Color::blue() const
{
    return blue_;
}

const Color Color::RED = Color(255, 0, 0);

const Color Color::GREEN = Color(0, 255, 0);

const Color Color::BLUE = Color(0, 0, 255);

const Color Color::BLACK = Color(0, 0, 0);

const Color Color::WHITE = Color(255, 255, 255);

bool Color::equal_to(const Color &other) const
{
    if (red() == other.red_ && green() == other.green_ && blue() == other.blue_) {
        return true;
    }
    return false;
}

void Color::invert()
{
    red_ = 255 - red();
    green_ = 255 - green();
    blue_ = 255 - blue();
}

int main() {
    return 0;
}