#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter the value of variable a: ";
	cin>>a;
	cout<<"Enter the value of variable b: ";
	cin>>b;

	
	a= (a+b);
	b= (a-b);
	a= (a-b);
	
	cout<<"After swapping a is: " <<a <<endl;
	cout<<"After swapping b is: " <<b << endl; 
	
	return 0;
}
	
	