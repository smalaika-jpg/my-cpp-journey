#include<iostream>
using namespace std;

int main()
{
	float weight,height,BMI;
    cout<<"Enter the value of weight in kilograms: ";
    cin>>weight;
    cout<<"Enter the value of height in meters: ";
    cin>>height;
	BMI= weight / (height * height) ;
	cout<<"Your BMI = " <<BMI;
	return 0;
	
}
