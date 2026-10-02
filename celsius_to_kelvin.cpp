#include<iostream>
using namespace std;

int main(){
	float celsius_temperature,kelvin_temperature;
	const float temp = 273.15;
	cout<<"Enter the value of temperature in Celsius: ";
	cin>>celsius_temperature;
	
	kelvin_temperature = celsius_temperature + temp;
	cout<<"Temperature in kelvin: " <<kelvin_temperature;
	
	return 0;
	
}
