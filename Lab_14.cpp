#include <iostream>
using namespace std;

class Color {           // basically the blueprint
    private:            // private stuff that only class members can access
        int red;        
        int green;
        int blue;

    public:
    
    Color() : red(0), green(0), blue(0) {}  // Default constructor

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

int main() {
                        
    Color color1;           // Creating the objects
    Color color2;
    Color color3;

    color1.setRed(255);     // Setting colors using setters (calling the setters))
    color1.setGreen(0);
    color1.setBlue(0);

    color2.setRed(0);
    color2.setGreen(0);
    color2.setBlue(255);

    color3.setRed(0);
    color3.setGreen(255);
    color3.setBlue(0);

    cout << "Colors:" << endl;  // Printing the colors (calling the print function)
    color1.print();
    color2.print();
    color3.print();

    return 0;
}