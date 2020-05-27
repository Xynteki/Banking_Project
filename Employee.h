// Employee: Employee ID, company Name, numberOfDaysWorkingHere, experienceInMonths.

#include <iostream>
#include <string>

using namespace std;

class Employee
{
	//Private Attributes
	private:
		long employeeID;
		string companyName;
		int numberOfDaysWorkingHere;
		int experienceInMonths;
		
	//Public Attributes
	public:
		//Setters
		void set_employeeID(long employeeID)
		{
			this->employeeID = employeeID;
		}
		
		void set_companyName(string companyName)
		{
			this->companyName = companyName;
		}
		
		void set_numberOfDaysWorkingHer(int numberOfDaysWorkingHere)
		{
			this->numberOfDaysWorkingHere = numberOfDaysWorkingHere;
		}
		
		void set_experienceInMonths(int experienceInMonths)
		{
			this->experienceInMonths = experienceInMonths;
		}
		
		//Getters
		
		long get_employeeID()
		{
			return employeeID;
		}
		
		string get_companyName()
		{
			return companyName;
		}
		
		int get_numberOfDaysWorkingHere()
		{
			return numberOfDaysWorkingHere;
		}
		
		int get_experienceInMonths()
		{
			return experienceInMonths;
		}
};
