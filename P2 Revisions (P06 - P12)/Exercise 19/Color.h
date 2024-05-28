#ifndef COLOR_H
#define COLOR_H

using namespace std;

class Color {
    public:
        // Constructor
        Color(unsigned char red, unsigned char green, unsigned char blue);
        // Copy constructor
        Color(const Color& c);
        // Accessors
        unsigned char red() const;
        unsigned char green() const;
        unsigned char blue() const;
        // Constants
        static const Color RED, GREEN, BLUE, BLACK, WHITE;
        // Equality function
        bool equal_to(const Color& other) const;
        // Invert function
        void invert();
    private:
        unsigned char red_, green_, blue_;
};

#endif