// Programming Exercise 2

#include <iostream>

using namespace std;

namespace constants
{
	const double SERV_CHARGE_SAV = 10;
	const double SERV_CHARGE_CHECK = 25;

	const double INTEREST_SAV_PERCENT = 4;
	const double INTEREST_CHECK_5000_UP = 3;
	const double INTEREST_CHECK_OTHER = 5;
}
using namespace constants;

int main()
{
	int accountNumber;
	cout << "Enter your Account Number: " << endl;
	cin >> accountNumber;


	char accountType;
	cout << "Enter your Account type (s or S for saving, c or C for checking): " << endl;
	cin >> accountType;

	double min;
	cout << "Enter the minimum balance that the Account should maintain: " << endl;
	cin >> min;

	double current;
	cout << "Enter your current balance: " << endl;
	cin >> current;

	switch (accountType)
	{
	case 's':
	case 'S':
		cout << "Your Account Number is: " << accountNumber << endl;
		cout << "You have a saving account." << endl;
		cout << "Your current balance is: " << current << endl;
		if (current < min)
			cout << "Your balance is below the minimun which is " << min << " , you have to pay " << SERV_CHARGE_SAV
			<< " $ as a charge." << endl;
		else
			cout << "Your balance is above the minimum, you earned an interest of " << INTEREST_SAV_PERCENT << " % "
			<< " which is equivalent to " << current * INTEREST_SAV_PERCENT / 100 << " $." << endl;
		break;


	case 'c':
	case 'C':
		cout << "Your Account Number is: " << accountNumber << endl;
		cout << "You have a checking account." << endl;
		cout << "Your current balance is: " << current << endl;
		if (current < min)
			cout << "Your balance is below the minimun which is " << min << " , you have to pay " << SERV_CHARGE_CHECK
			<< " $ as a charge." << endl;
		else if (current >= 5000 + min)
			cout << "Your balance is more than 5000 above the minimum, you earned an interest of " << INTEREST_CHECK_5000_UP << " % "
			<< " which is equivalent to " << current * INTEREST_CHECK_5000_UP / 100 << " $." << endl;
		else
			cout << "Your balance is less than 5000 above the minimum, you earned an interest of " << INTEREST_CHECK_OTHER << " % "
			<< " which is equivalent to " << current * INTEREST_CHECK_OTHER / 100 << " $." << endl;
		break;

	default:
		cout << "Wrong Account type!" << endl;

	}



	return 0;

}