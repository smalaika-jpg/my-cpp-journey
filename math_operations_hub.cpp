#include <iostream>
#include <cmath>
using namespace std;

 void add()
 { 
 int num1,num2,num3;
  cout<<"Enter 3 numbers:";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cout<<"Sum= "<<(num1+num2+num3)<<endl;
 }
   void sub()
   {
   	int n1,n2;
   	cout<<"Enter 2 numbers:";
   	cin>>n1;
   	cin>>n2;
   	cout<<"Sub= "<<(n2-n1)<<endl;
   }
   void multiply()
   {
   	int a,b,c;
   	cout<<"Enter 3 numbers:";
   	cin>>a >>b>>c;
   	cout<<"Product=" <<(a*b*c)<<endl;
   }
   void division()
   {
   	int e,f;
   	cout<<"Enter 2 numbers:";
   	cin>>e>>f;
   	if(e!=0)
   	cout<<"Result=" <<(f/e)<<endl;
   	else
   	cout<<"Error:Division by zero is not allowed."<<endl;
   }
   int main(){
   int choice;
   cout<<"Choose one:\n";
   cout<<"1.add\n";
   cout<<"2.sub\n";
   cout<<"3.multiply\n";
   cout<<"4.division\n";
   cin>>choice;
   switch(choice){
   case 1:
   	add();
   	break;
   	case 2:
   	sub();
   	break;
   	case 3:
   	multiply();
   	break;
   	case 4:
   	division();
   	break;
   	default:
   		cout<<"Invalid choice";
   	}
   		return 0;
   	}