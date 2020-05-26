// + Person: Name, age, Social ID, address.

#include <iostream>
#include <string>

using namespace std;

class Person
{
	//Private Attributes
	private:
		string name;
		int age;
		int socialID;
		int address;
		
	//Public Attributes
	public:
		//Setters
		void set_name(string name)
		{
			this->name = name;
		}
		
		void set_age(int age)
		{
			this->age = age;
		}
		
		void set_socialID(int socialID)
		{
			this->socialID = socialID;
		}
		
		void set_adderess(int adress)
		{
			this->address = address;
		}
		
		//Getters
		string get_name()
		{
			return name;
		}
		
		int get_age()
		{
			return age;
		}
		
		int get_socialID()
		{
			return socialID;
		}
		
		int get_address()
		{
			return address;
		}
};
