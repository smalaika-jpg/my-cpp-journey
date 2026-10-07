#include<iostream>
using namespace std;

int main()
{
	int marks;
	cout<<"Enter marks(0-100): ";
	cin>>marks;
	
	if (marks>=90)
	{
	cout<<"Grade is A+: ";
}
    else if ( marks >=85 )
    {
    	cout<<"Grade is A";
	}
	else if ( marks >=80 )
    {
    	cout<<"Grade is B+";
	}
	else if ( marks >=75 )
    {
    	cout<<"Grade is B";
	}
	else if ( marks >=70 )
    {
    	cout<<"Grade is C+";
	}
	else if ( marks >= 65 )
    {
    	cout<<"Grade is C";
	}
	else if ( marks >=60 )
    {
    	cout<<"Grade is D+";
	}
	else if ( marks >=55 )
    {
    	cout<<"Grade is D";
	}
	else 
    {
    	cout<<"Grade is F";
	}
	return 0;
}

