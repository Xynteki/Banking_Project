// + Address: name, houseNumber, street, City, zipCode, country, mobileNumber.

#include <iostream>
#include <string>

using namespace std;

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
