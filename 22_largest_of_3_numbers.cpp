#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3;
	cout<<"Enter the value of num1: ";
	cin>>num1;
	cout<<"Enter the value of num2: ";
	cin>>num2;
	cout<<"Enter the value of num3: ";
	cin>>num3;
	
	if(num1>num2)
	{
    if (num1>num3)
	{
	cout<<"num1 is larger.";
	}
	else 
	{
	cout<<"num3 is larger.";
	}
}

	else 
	{
	if (num2>num1)
	{
	if (num2>num3)
	{
	cout<<"num2 is larger.";
	}
}
	else 
	{
	cout<<"num3 is larger.";
	}
}

	
	return 0;
}


