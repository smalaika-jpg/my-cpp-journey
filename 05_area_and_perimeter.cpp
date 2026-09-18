#include<iostream>
using namespace std;

int main(){

    int length,width,area,perimeter;

    cout<<"Enter the value of length: ";
    cin>>length;
    cout<<"Enter the value of width: ";
    cin>>width;

    area=length*width;
    perimeter=2*(length+width);
    cout<<area <<endl;
    cout<<perimeter;

    return 0;

}
