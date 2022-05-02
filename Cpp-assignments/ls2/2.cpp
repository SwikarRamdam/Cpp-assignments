#include <iostream>
using namespace std;
// void feet();
void feet(int *); 
// void feet(int, float);
int main(){
    int f;
    cout<<"Enter measurement in feet"<<endl;
    cin>>f;
    feet(&f);
    return 0;
}
// void feet(){
//     cout<<"This has no argument";
// }
void feet(int *f){
    int intoinch;
    intoinch = 12 * *f;
    cout<<intoinch<<endl;
}
void feet(int f, float){
    int intoinch;
    intoinch = 12 * f;
    cout<<intoinch;
}