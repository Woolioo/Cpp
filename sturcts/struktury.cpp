#include <iostream>
#include <cstring>
using namespace std; 


int main() { 

	struct Employee {
		char firstName[20];
		char secondName[20];
		char state[20];
	};
	
	Employee employee;
	
	strcpy(employee.firstName, "Michal");
	strcpy(employee.secondName, "Sobolewski");
	strcpy(employee.state, "Student");
	
	cout << employee.firstName <<endl;
	cout << employee.secondName <<endl;
	cout << employee.state <<endl;
	
return 0; 
}
