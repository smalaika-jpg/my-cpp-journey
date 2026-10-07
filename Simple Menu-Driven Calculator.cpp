#include<iostream>
using namespace std;

int main()
{
	double a,b;
	int choice;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	
	cout<<"\nSelect an opeartions:\n ";
	cout<<" 1.Addition\n ";
	cout<<" 2.Subtraction\n ";
	cout<<" 3.Multiplication\n ";
	cout<<" 4.Division\n ";
	cout<<"Enter choice(1-4): ";
	cin>>choice;
	
	switch(choice)
	{
	case 1:
    cout<<"Result: " <<a+b;
	break;
	case 2:
    cout<<"Result: " <<a-b;
	break;
	case 3:
    cout<<"Result: " <<a*b;
	break;
	case 4:
	if (b !=0)
    cout<<"Result: " <<a/b;
	else
	cout<<"Error: Divion by zero!";
	break;
	
	default:
	cout<<"Invalid choice";
	break;
}

	return 0;
}
	