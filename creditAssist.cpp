#include <iostream>

using namespace std;

int main()
{
	while (true)
	{
		int income;
		int debt;
		int minPay;
		double credit;
		cout << "Enter Monthly Income" << endl;
		cin >> income;
		cout << "Enter Total Debt" << endl;
		cin >> debt;
		cout << "Enter Minimum Monthly Debt Payment" << endl;
		cin >> minPay;
		if (debt > income * 6)
		{
			cout << "No loan can be granted" << endl;
		}
		else
		{
			credit = (income - minPay) * 0.3;
			cout << "The applicant can be approved for up to $ " << credit << endl;
		}

		char oneMore;
		cout << "Do you want to compute credit worthiness of another applicant (y/n)" << endl;
		cin >> oneMore;
		if ((oneMore == 'y' || oneMore == 'Y') != true)
		{
			break;
		}
	}
	system("pause");
	return 0;
}