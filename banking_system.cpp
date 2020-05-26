//Bank System
// Bank can have: Funds Available, BankAccounts, Employees (Manager, Owner, Security guard), Customer, address..
// BankAccount: Account numbers/IBAN , BIC, Customer.
// + Address: name, houseNumber, street, City, zipCode, country, mobileNumber.
// + Mobile Number: countryCode, number.
// + Person: Name, age, Social ID, address.
// Employee: Employee ID, company Name, numberOfDaysWorkingHere, experienceInMonths.
// we'll work on this everyday..

#include <iostream>

using namespace std;

//Class Address

class Address
{
	//Protected Attributes
	protected:
		string country;
		int mobileNumber;
		
	//Private Attributes
	private:
		string name;
		int houseNumber;
		string city;
		int zipCode;
		
	public:
		//Setters
		void set_name(string name)
		{
			this->name = name;
		}
		
		void set_houseNumber(int houserNumber)
		{
			this->houseNumber = houseNumber;
		}
		
		void set_city(string city)
		{
			this->city = city;
		}
		
		void set_zipCode(int zipCode)
		{
			this->zipCode = zipCode;
		}
		
		//Getters
		string get_name()
		{
			return name;
		}
		
		int get_houseNumber()
		{
			return houseNumber;
		}
		
		string get_city()
		{
			return city;
		}
		
		int get_zipCode()
		{
			return zipCode;
		}
};

void new_account()
{
	cout<<"Here you can create a new account!"<<endl;
}

void deposit_amount()
{
	cout<<"Here you can enter the amount you would like to deposit!"<<endl;
}

void withdraw_amount()
{
	cout<<"Here you can enter the amount you would like to withdraw!"<<endl;
}

void balance_enquiry()
{
	cout<<"Here you can see your balance enquiry!"<<endl;
}

void close_account()
{
	cout<<"Here you can close an account!"<<endl;
}

void exit_system()
{
	cout<<"Here you will exit the system!"<<endl;
}

int main()
{
	Address ob1;
	
	ob1.set_name("Patrick ");
	
	cout<<ob1.get_name();
	
	char num;
	
	do
	{
	
	
	cout<<"Please select one of these Options available (1-6): \n\n";
	cout<<"01. NEW ACCOUNT \n\n";
	cout<<"02. DEPOSIT AMOUNT \n\n";
	cout<<"03. WITHDRAW AMOUNT \n\n";
	cout<<"04. BALANCE ENQUIRY \n\n";
	cout<<"05. CLOSE AN ACCOUNT \n\n";
	cout<<"06. EXIT \n\n";
	

	cin>>num;
	

	switch(num)
	{
	case '1':
		new_account();
		break;
	
	case '2':
		deposit_amount();
		break;
	
	case '3':
		withdraw_amount();
		break;
		
	case '4':
		balance_enquiry();
		break;
		
	case '5':
		close_account();
		break;
		
	case '6':
		exit_system();
		break;
		
	case 'default':
		break;
	}
	} while (num!='6');
	
	
	
	return 0;
}

