#include <iostream>
using namespace std;


double factorial(double num1)	             // Факториал.
{
	double F(1.0f);
	for (int i(1); i <= num1; ++i)
	{
		F *= i;
	}
	return F;
}

double myPowerCmath(double num1, double num2) // Возведение в степень.
{
	double result(1.0f);
	for (int i = 1; i <= num2; i++)
	{
		result *= num1;
	}
	return (result);
}

int main()
{
	setlocale(LC_ALL, "ru");

	double num1(0.0f), num2(0.0f), result(0.0f);
	char sim;

	do
	{
		cout << "Введите символ" << endl << "\"+ , -, *, / , ^, !\"" << endl;
		cout << "\"q\" Завершение!" << endl;
		cin >> sim;

		switch (sim) {
		case '+':
			cin >> num1 >> num2;
			cout << num1 + num2 << endl;
			break;

		case '-':
			cin >> num1 >> num2;
			cout << num1 - num2 << endl;
			break;

		case '*':
			cin >> num1 >> num2;
			cout << num1 * num2 << endl;
			break;

		case '/':
			cin >> num1 >> num2;
			if (num1 == 0 || num2 == 0)
			{
				cout << "Делить на 0 нельзя!";
				break;
			}
			cout << num1 / num2 << endl;
			break;

		case '^':
			cin >> num1 >> num2;
			cout << myPowerCmath(num1, num2) << endl;
			break;

		case '!':
			cin >> num1;
			cout << factorial(num1) << endl;
			break;
		}
	} while (sim != 'q');
	{
		cout << "Выход!";
	}
	return 0;
}

