    // Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member function to add time objects and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format.

#include<iostream>
using namespace std;

class time{
int hour,minute,second;
public:
time(){
    hour = 0;
    minute = 0;
    second = 0;
}
void settime(int x,int y,int z){
    hour = x;
    minute = y;
    second = z;
}
// time (time t1,time t2){
//  second = t1.second + t2.second;
//  minute = second/60;
//  second = second%60;//for 65 seconds = 1 min + 5 sec 
//  minute = minute + t1.minute + t2.minute;
//  hour = minute/60;
//  minute = minute%60;
//  hour = hour + t1.hour + t2.hour;
// }
void display(){
    cout<<hour<<minute<<second<<endl;
}
};

int main(){
    class time t1;
    t1.settime(1,2,3);
    t1.display();
    // ta(1,2,3);
    // ta.display();
    // time tb(4,5,6);
    // tb.display();
    // time tc(t1,t2);
    // tc.display();
return 0;
} 


// #include<iostream>
// // #include<conio>
// class TIME
// {
// int hours;
// int minutes;
// int seconds;
// public:
// TIME()
// {
// hours=00;
// minutes=00;
// seconds=00;
// }
// void display()
// {
// cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
// }
// TIME(int x,int y,int z)
// {
// hours=x;
// minutes=y;
// seconds=z;
// }
// TIME(TIME t1,TIME t2)
// {
// seconds=t1.seconds+t2.seconds;
// minutes=seconds/60;
// seconds=seconds%60;
// minutes=minutes+t1.minutes+t2.minutes;
// minutes=t1.minutes+t2.minutes;
// hours=minutes/60;
// minutes=minutes%60;
// hours=hours+t1.hours+t2.hours;
// }
// };
// void main()
// {
// clrscr();
// TIME t;
// cout<<"a) First initialize three data members Hour,Minutes,Seconds"<<endl;
// cout<<"b) constructor initalize the object is zero"<<endl;
// t.display();
// cout<<"c) constructor to initialize the some object consyant value"<<endl;
// TIME t1(12,00,00);
// t1.display();
// TIME t2(11,34,50);
// TIME t3(11,34,50);
// TIME t4(t2,t3);
// t4.display();
// // getch();
// }