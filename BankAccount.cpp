#include<iostream>
#include<string>
using namespace std;
class bank_account{
	private :
		double balance;
		string accno;
		public :
			string holder_name;
		
		bank_account(string NAME,string ACCOUNT_NO,double initial_balance)
		{
			holder_name = NAME;
			accno   = ACCOUNT_NO;
			balance = initial_balance;
		}
		void deposit(double amount)
		{
			if(amount>0)
			{
				balance = balance+amount;
				cout<<"deposit succesfully. new balance : " << balance << "\n";
			}
			else
			{
				cout<<"invalid deposit.";
			}
		}
		void withdraw(double amount)
		{
			if(amount<=balance && amount>0)
			{
				balance=balance-amount;
				cout<<"withdrawl succesfully! remaining balance :"<<balance<<"\n";
			}
			else{
				cout<<"insufficient balance!";
			}
		}
		void checkbalance() const{
		  cout<<"current balance :"<<balance<<"\n";
		}
		void Accountdisplay() const
		{
			cout<<"ACCOUNT PROFILE:\n";
			cout<<"HOLDER NAME : "<<holder_name<<"\n";
			cout<<"ACCOUNT NUMBER: "<<accno<<"\n";
			cout<<"BALANCE :"<<balance<<"\n";
		}
};
int main()
{
	string accno,name;
	double initial_balance;
	cout<<"ENTER THE HOLDER NAME:\n";
	getline(cin,name);
	cout<<"ENTER THE ACCOUNT NUMBER:\n";
	getline(cin,accno);
	cout<<"CURRENT BALANCE :\n";
	cin>>initial_balance;
	bank_account acc(name,accno,initial_balance);
	acc.Accountdisplay();
	double depositamount,withdrawamount;
	cout<<"ENTER THE DEPOSIT AMOUNT:\n";
	cin>>depositamount;
	acc.deposit(depositamount);
	cout<<"ENTER THE WITHDRAW AMOUNT:\n";
	cin>>withdrawamount;
	acc.withdraw(withdrawamount);
	acc.checkbalance();
	acc.Accountdisplay();
	return 0;
}
