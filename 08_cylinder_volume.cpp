#include<iostream>
using namespace std;

int main()
{
	double  r,h,volume;
	const double PI =3.14159;
	
	cout<<"Enter the value of radius of cylinder: ";
	cin>>r;
	cout<<"Enter the value of height of cylinder: ";
	cin>>h;
	volume= PI * r * r *h ;

	cout<<"The volume of cylinder = "<<volume;
	return 0;
	
}
