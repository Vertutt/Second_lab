#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");//смена локализации консоли
	unsigned int p = 0;
	unsigned int N = 0;
	string TransformedN = "";
	cout << "¬ведите основание системы счислени€ от 2 до 16 ";
	cin >> p;
	while (p < 2 || p > 16)
	{
		cout << "¬ведите основание системы счислени€ от 2 до 16 ";
		cin >> p;
	}
	cout << "\n¬ведите ÷елое положительное число ";
	cin >> N;
	while (N <= 0)
	{
		cout << "\n¬ведите ÷елое положительное число ";
		cin >> N;
	}
	while (N > 0)//перевод числа в p-ичную систему счислени€
	{
		TransformedN = (N % p < 10) ? to_string(N % p) + TransformedN : char('A' + N % p - 10) + TransformedN;//если числовое значение цифры < 9,то возвращаетсс€ знак от '0' до '9', иначе от 'A' до 'F'
		N /= p;
	}
	cout << TransformedN;
} 