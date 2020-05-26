// + Mobile Number: countryCode, number.

#include <iostream>
#include <string>

using namespace std;

class MobilerNumber
{
	//Private Attributes
	private:
		int countryCode;
		int number;
		
	//Public Attributes
	public:
		//Setters
		void set_countryCode(int countryCode)
		{
			this->countryCode = countryCode;
		}
		
		void set_number(int number)
		{
			this->number = number;
		}
		
		//Getters
		int get_countryCode()
		{
			return countryCode;
		}
		
		int get_number()
		{
			return number;
		}
};
