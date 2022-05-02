// Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.

#include <iostream>
using namespace std;
inline float net_pay(float salary){
    return salary - 0.1 * salary;
}

int main(){
    int salary;
cout<<"Enter the salary"<<endl;
cin>>salary;
cout<<"You will receive Rs."<<net_pay(salary)<<" after deduction of 10 % government tax";
return 0;
}
