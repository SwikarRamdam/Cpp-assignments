//  Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.
// prime numbers=2,3,5,7,11;
#include <iostream>
using namespace std;
int main();
class prime
{
    int i;
    char c;
public:
int check(int n){
    for (i = 2; i <= 10; i++)
    {
        if (n % i != 0)
            cout << n << " is a prime number" << endl;
        else
            cout << n << " is not a prime number" << endl;

        cout << "would you like to check more numbers ?(y/n):" << endl;
        cin >> c;
        if (c == 'y')
        {
            main();
        }
        else
            break;
    }
return 0;
}
};

int main()
{
    prime p;//oop concept
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    p.check(n);
    return 0;
}
//why after running one yes, typing no still runs the program once and then only terminates