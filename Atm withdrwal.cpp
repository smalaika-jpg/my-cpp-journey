#include<iostream>
using namespace std;

int main()
{
	int account_balance,withdrawal_amount,new_balance;
	cout<<"Enter your account balance: ";
	cin>>account_balance;
	cout<<"Enter your withdrawal amount: ";
	cin>>withdrawal_amount;
	
	new_balance = (account_balance)- (withdrawal_amount);
	
	if (withdrawal_amount <= account_balance && withdrawal_amount % 500 == 0)
	cout<<"Your withdrawal amount is approved and your new balance is: " <<new_balance;
	else
	cout<<"Your withdrawal amount is rejected.";
	
	return 0;
}

