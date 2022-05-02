    // Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.
#include<iostream>
using namespace std;
class holder{
	int id,name;
	public:
    holder(){
		cout<<"Holder called"<<endl;
		id = 0;
		name = 0;
	}
	void DepartmentID(int a){
		cout<<"Enter your Department ID";
		id = a;
		cin>>a;
	}
	void DepartmentName(int b){
		cout<<"Enter your Department Name";
		name = b;
		cin>>b;
	}
	void display(){
		cout<<"Department ID"<<a<<endl;
		cout<<"Department Name"<<b<<endl;
	}
	~holder(){
		cout<<"Object n goes out of the scope"<<endl;
	}

};
int main(){
	holder h1,h2;
	h1.DepartmentID(8867);
	h1.DepartmentName(8867);
	h2.display
return 0;
}