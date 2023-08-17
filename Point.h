// File Contains: POint class, access specifiers, constructors

#ifndef POINT_H // Preprocessor Directives
#define POINT_H // These statements used as a guard to prevent point class to use again.
#include <fstream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public:
    // Contructor:  Name same as class name
    // Constructor have no retrun type.
    // Default constructor is automatically called when object is created.
    // Purpose of the constructor is to initialize the object with default values.

    Point();  // Default Constructor
    ~Point(); // Destructor.

    Point(int, int); // Parameterized Constructor / Overloaded Constructor.

    Point(int); // One Parameter Constructor

    // COPY CONSTRUCTOR

    Point(const Point &);

    void setX(int);
    void setY(int);

    void setCoordinates(int, int);

    // Inline Functions - Implementation done at the same time.
    // Inline function, there us no function header cost, same line.
    // Compiler decide the function must be inline or not
    int getX() const
    {
        return x;
    }

    int getY() const
    {
        return y;
    }

    void displayPoint() const;
    void writeToFile(ofstream &) const; // File Handle always added by reference and const so can't be modified.
    void readFromFile(ifstream &);
};
#endif