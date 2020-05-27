// BankAccount: Account numbers/IBAN , BIC, Customer.

#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
	//Private Attributes
	private:
		long iban;
		long bic;
		string customer;
		
	//Public Attributes
	public:
		//Setters
		void set_iban(long iban)
		{
			this->iban = iban;
		}
		
		void set_bic(long bic)
		{
			this->bic = bic;
		}
		
		void set_customer(string customer)
		{
			this->customer = customer;
		}
		
		//Getters
		long get_iban()
		{
			return iban;
		}
		
		long get_bic()
		{
			return bic;
		}
		
		string get_customer()
		{
			return customer;
		}
};
