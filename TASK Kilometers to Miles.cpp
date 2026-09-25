#include<iostream>
using namespace std;

int main()
{
	int distance;
	float miles;
	cout<<"Enter the value of distance in kilometer: ";
	cin>>distance;
	miles=distance * (0.621371);
	cout<<"The Distance in miles = " <<miles;
	return 0;
	
}
