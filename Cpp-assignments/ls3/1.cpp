    // Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.
#include <iostream>
using namespace std;
class Celsius
{
    float c;

public:
    float toFarhenheit(float x)
    {
        c = x;//to access a variable in private we need to define another one in the function.Here to access the private member c we created another variable as x and equated ;
        return (9 * c / 5) + 32;
    }
};
class Farhenheit
{
    float f;

public:
    float toCelsius(float x)
    {
        f = x;
        return ((f - 32) / 9)* 5;
    }
};
int main()
{
    float t;
    int check;
    Celsius c1;
    Farhenheit f1;
    cout << "Type 1 for Celsius To Farhenheit" << endl;
    cout << "Type 2 for Farhenheit To Celcius" << endl;
    cin >> check;

    if (check == 1)
    {
        cout << "Enter the temperature" << endl;
        cin >> t;
        cout << "The temperature " << t << " in Farhenheit scale is " << c1.toFarhenheit(t)<<endl;
    }
    else if (check == 2)
    {
        cout << "Enter the temperature" << endl;
        cin >> t;
        cout << "The temperature " << t << " in Celsius scale is " << f1.toCelsius(t)<<endl;
    }
    return 0;
}