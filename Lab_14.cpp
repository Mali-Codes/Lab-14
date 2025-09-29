#include <iostream>
using namespace std;

class Color {
    private:        // private stuff that only class members can access
        int red;
        int green;
        int blue;

    public:
    
    Color() : red(0), green(0), blue(0) {}  // Default constructor

    Color(int r, int g, int b) : red(r), green(g), blue(b) {} // More constructor stuff (parameterized constructor)

    void setRed(int r) { red = r; }          // Setters - making private stuff changable
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    int getRed() const { return red; }       // Getters - making private stuff readable
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    void print() const {                     // Le Print function
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }
};