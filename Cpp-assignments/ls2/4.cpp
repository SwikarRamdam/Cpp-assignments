// Write a function that passes two temperatures by reference and sets the larger
//  of the two numbers to a value entered by user by using return by reference.
#include <iostream>
using namespace std;
void compare(int * , int *);
int main(){
int *a,*b;
cout<<"Enter two temperature readings"<<endl;
cin>>*a>>*b;
compare(a,b);
return 0;//return should always be written at the end, functions or arguments below it is not called
}
void compare(int *a,int *b){
    if(*a>*b)
    cout<<*a<<"is a greater reading";
    else
    cout<<*b<<"is a greater reading";
}