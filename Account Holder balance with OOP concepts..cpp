#include <iostream>
using namespace std;

class Account{
	private:
	int ID;
	double balance;
	string dateCreated;	
	
	public:
	Account(){
		ID = 0;
		balance = 0.00;
		dateCreated = "xyz"; 
	}

	Account(int conID, double conBalance){
		ID = conID;
		balance = conBalance;
//		dateCreated = conDateCreated;
	}

	void setID(int accID){
		ID = accID;
	}
	void setBalance(double accBalance){
		balance = accBalance;
	}
	void setDateCreated(int accDateCreated){
		dateCreated  = accDateCreated;
	}
	
	void getID(){
		cout<<"ID: "<<ID<<endl;  
	}
	void getBalance(){
		cout<<"Account Balance: "<<balance<<endl;  
	}
	void getDateCreated(){
		cout<<"Date of Account Creation: "<<dateCreated<<endl;  
	}
		
	double deposition(double depositionAmount){
		balance += depositionAmount; 
	}	
	double withdrawl(double withdrawlAmount){
		cout<<"How much amount would you like to withdrawl."<<endl;
		cin>>withdrawlAmount;
		if(withdrawlAmount<=balance){
		balance -= withdrawlAmount;
		cout<<"You have withdrawed: "<<withdrawlAmount<<endl;
		cout<<"Your present account balance is: "<<balance<<endl;	
		}
		else{
			cout<<"You don't have sufficiant amount in you bank account."<<endl;
		}
			}

};

int main(){
	
	int choice;

	do{
	
	Account accHolder;
	
	
	cout<<"\n\t<---- Welcome to ABL ---->"<<endl;
	cout<<"Please enter: "<<endl;
	cout<<"1. Display Amount."<<endl;
	cout<<"2. Deposit Amount."<<endl;
	cout<<"3. Withdraw Amount."<<endl;
	cout<<"0. Exit."<<endl;
	
	
	int amount;
	cin>>choice;
	switch(choice){
			case 1:{
				accHolder.getBalance();
				break;
			}
			case 2:{
				cout<<"How much amount would you like to deposit."<<endl;
				cin>>amount;
				cout<<"You have deposited: "<<amount<<endl;
				cout<<"Your present account balance is: "<<accHolder.deposition(amount);
				accHolder.setBalance(amount);
				break;
			}
			case 3:{
				accHolder.withdrawl(amount);
				break;
			}
			case 0:{
				cout<<"Good bye! See you next time."<<endl;
				break;
			}
			default:
			{
			cout<<"Invalid input!! Please choose a valid input."<<endl;
			}
	}
	
}while(choice != 0);
	return 0;
}
