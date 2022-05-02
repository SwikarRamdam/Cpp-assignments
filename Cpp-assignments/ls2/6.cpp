// Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
// Chief executive officer Rs. 35000/m
// Information officer Rs. 25000/m
// System analyst Rs. 24000/m
// Programmer Rs. 18000/m
#include <iostream>
using namespace std;
inline float ceo(int salary){
    return salary - (salary * (9/100));
}
int main(){
    int c = 35000;
 cout<<"Monthly salary of CEO has been increased by 9% in the year 2010 i.e Rs."<<ceo(c)<<endl;
return 0;
}

// inline int IO(int IO){
//     return IO + IO* (10/100);
// }
// inline int SA(int SA){
//     return SA + SA*(11/100);
// }
// inline int PR(int PR){
//     return PR + PR* (12/100);
// }
//  cout<<"Monthly salary of IO has been increased by 10% in the year 2010 i.e Rs."<<IO(25000)<<endl;
//  cout<<"Monthly salary of SA has been increased by 11% in the year 2010 i.e Rs."<<SA(24000)<<endl;
//  cout<<"Monthly salary of PR has been increased by 12% in the year 2010 i.e Rs."<<PR(18000)<<endl;