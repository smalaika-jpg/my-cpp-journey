#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<"Enter the value of x coordinate: ";
    cin>>x;
    cout<<"Enter the value of y coordinate: ";
    cin>>y;
    
    if ( (x>0) && (y>0) )
    {
	cout<<"Lies in Quadrant 1";
}
    else if ( (x<0) && (y>0) )
    {
	cout<<"Lies in Quadrant 2";
}  
    else if ( (x<0) && (y<0) )
    {
	cout<<"Lies in Quadrant 3";
}
    else if ((x>0) && (y<0))
    {
	cout<<"Lies in Quadrant 4";	
} 
    else if ((x==0) && (y==0))
    {
	cout<<"Lies at origin";	
} 
    else
    cout<<"Lies on axis";
    
    return 0;
}
