#include <iostream>
using namespace std;

int main(){	

	char op = 'A';
	char again = 'Y';
	int num1 = 0;
	int num2 = 0;

	cout << "Our C++ Calculator\n";
	
	while('n' != again){
		cout << "(A)dd or (S)ubtract? ";
		cin >> op;
		
		cout << "Enter your first number: ";
		cin >> num1;
		cout << "Enter your second number: ";
		cin >> num2;
		
		if(('A' == op) || ('a' == op)){
			cout << endl << num1 << " + " 
				<< num2 << " = " << (num1 + num2) << endl;
		} else if (('S' == op) || ('s' == op)) {
			cout << endl << num1 << " - " 
				<< num2 << " = " << (num1 - num2) << endl;
		} else {
			cout << op << " is not a valid option..." << endl;
		}
		
		cout << "\nDo you want to use Calculator again (Y/n)? ";
		cin >> again;
	}
	
	return 0; 
}
