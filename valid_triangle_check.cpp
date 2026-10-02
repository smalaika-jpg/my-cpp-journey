#include<iostream>
using namespace std;

int main(){
	int side_a,side_b,side_c,condition1,condition2,condition3;
	cout<<"Enter the value of side_a: ";
	cin>>side_a;
	cout<<"Enter the value of side_b: ";
	cin>>side_b;
	cout<<"Enter the value of side_c: ";
	cin>>side_c;
	
    condition1 = (side_a + side_b > side_c); 
	condition2 = (side_b + side_c > side_a);
	condition3 = (side_c + side_a > side_b);
	bool canformtriangle = (condition1 && condition2 && condition3);
	
	cout<<boolalpha;
	cout<<canformtriangle;
	return 0;
	
}
