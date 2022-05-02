//  Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.
#include <iostream>
using namespace std;
class carpark
{
private:
    int car_id, charge_hour;
    float parked_time;

public:
    void showdata();
    void getdata();
};
void carpark::getdata(){
    cout << "Enter car_id" << endl;
    cin >> car_id;
    cout << "Enter charge/hour" << endl;
    cin >> charge_hour;
    cout << "Enter parked time" << endl;
    cin >> parked_time;
}
void carpark::showdata()
{
    cout << "Car Id : " << car_id << endl;
    cout << "Charge/Hour : " << charge_hour << endl;
    cout << "Parked Time: " << parked_time << endl;
}
int main()
{
    carpark c;
    c.getdata();
    c.showdata();
    return 0;
}
//what does "member function should be called from other function" mean?