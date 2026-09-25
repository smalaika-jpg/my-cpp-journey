#include<iostream>
using namespace std;

int main()
{
	int total_days,years,months,days;
	cout<<"Enter number of days: ";
	cin>>total_days;
	
	years=total_days/365;
	int remainder =total_days%365;
	
	months=remainder/30;
    days=remainder%30;
	 
	cout<<"Years ="  <<years <<endl;
	cout<<"Months = " <<months <<endl;
	cout<<"Days = " <<days <<endl;
	 
	return 0;
}
