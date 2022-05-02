#include <iostream>
using namespace std;
struct date
{
     int mm,dd,yy;
};

int dates(date d){
    cout<<d.mm<<"/"<<d.dd<<"/"<<d.yy;
}
int main(){
    date d;
    cout<<"Enter date as (mm/dd/yy)"<<endl;
    cin>>d.mm>>d.dd>>d.yy;
    dates(d);
    return 0;
}
