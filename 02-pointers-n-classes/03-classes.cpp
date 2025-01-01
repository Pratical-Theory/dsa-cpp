#include <iostream>
#include <string>

using namespace std;

class Cookie
{
private:
    string color;

public:
    Cookie(string color) 
    {
        this->color = color;
    }

    string getColor()
    {
        return color;
    }
    void setColor(string color)
    {
        this->color = color;
    }
};

int main()
{
    //  instanciating a new cookie object with color green in  pointer of an object type Cookie*
    Cookie *cookieOne = new Cookie("green");
    Cookie *cookieTwo = new Cookie("blue");

    cookieOne->setColor("yellow");

    cout << cookieOne->getColor() << endl;
    cout << cookieTwo->getColor() << endl;

    delete cookieOne; // Free the allocated memory
    delete cookieTwo;
}