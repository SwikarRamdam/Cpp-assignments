// Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report i n the following format.

// An employee with ... ... ... has received Rs ... ... ...as a bonus

// and

// had worked ... ... ... hours as overtime in the year ... ... ...
#include<iostream>
using namespace std;
class employee{
int id,bonus,ot,year;
public:
void setpara(int w,int x,int y,int z){
    id = w;
    ot = y;
    bonus = x;
    year = z;
    // cout<<"Enter employee id"<<endl;
    // cin>>id;
    // cout<<"Enter employee "<<endl;
    // cin>>id;
    // cout<<"Enter employee id"<<endl;
    // cin>>id;
}
void displaypara(){
    cout<<"An employee with employee id "<<id<<" has received Rs "<<bonus<<" as a bonus"<<endl<<"and"<<endl<<"had worked "<<ot<<" hours as overtime in the year "<<year<<endl;
}
};
int main(){
employee e[10];
e[1].setpara(7701,1000,2,2077);
e[1].displaypara();
e[2].setpara(7702,2000,4,2077);
e[2].displaypara();
e[3].setpara(7703,4000,6,2077);
e[3].displaypara();
return 0;
}