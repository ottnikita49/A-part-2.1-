#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include<locale.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int sum = 0;
	int n;
	cout << "Введите значение n=";
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cout << setw(5) << pow(3, i);
		sum += pow(3, i);
	}
	cout << endl << "Сумма=" << sum;
	return 0;
}