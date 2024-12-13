#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");//смена локализации консоли
	unsigned int p = 0;
	unsigned int N = 0;
	string TransformedN = "";
	cout << "Введите основание системы счисления от 2 до 16 ";
	cin >> p;
	while (p < 2 || p > 16)
	{
		cout << "Введите основание системы счисления от 2 до 16 ";
		cin >> p;
	}
	cout << "\nВведите Целое положительное число ";
	cin >> N;
	while (N <= 0)
	{
		cout << "\nВведите Целое положительное число ";
		cin >> N;
	}
	while (N > 0)//перевод числа в p-ичную систему счисления
	{
		TransformedN = (N % p < 10) ? to_string(N % p) + TransformedN : char('A' + N % p - 10) + TransformedN;//если числовое значение цифры < 9,то возвращаетсся знак от '0' до '9', иначе от 'A' до 'F'
		N /= p;
	}
	//Новый комментарий
	cout << TransformedN;
} 