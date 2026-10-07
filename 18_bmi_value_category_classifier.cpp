#include<iostream>
using namespace std;

int main()
{
	float weight,height,BMI;
	cout<<"Enter the value of weight in kilograms: ";
	cin>>weight;
	cout<<"Enter the value of height in meters: ";
	cin>>height;
	
	BMI= weight/(height*height);
	
	if ( BMI < 18.5)
	cout<<BMI <<" is underweight.";
    else if (BMI<25)
	cout<<BMI <<" is normal.";
	else if (BMI<30)
	cout<<BMI <<" is overweight.";
    else
    cout<<BMI <<" is obese.";
    
    return 0;
}

	
