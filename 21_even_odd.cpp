#include<iostream>
using namespace std;

int main()
{
	int marks;
	cout<<"Enter the value of marks: ";
	cin>>marks;
	
	if (marks%2 == 0)
	{
	cout<<marks <<" Marks are even.";	
	}
	else
	{
	cout<<marks <<" Marks are odd.";
	}
	
	return 0;
}

