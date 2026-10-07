#include<iostream>
using namespace std;

int main()
{
	char alphabet;
	cout<<"Enter an alphabet: ";
	cin>>alphabet;
	
	switch(alphabet)
{	 
	case 'a':
	case 'e':
	case 'i':
	case 'o': 
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	cout<<"Alphabet is a vowel";
	break;
	
	default:
	cout<<"Alphabet is a consonant";
	break;
}
	
	
	return 0;
	
}