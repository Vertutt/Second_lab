#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");//����� ����������� �������
	unsigned int p = 0;
	unsigned int N = 0;
	string TransformedN = "";
	cout << "������� ��������� ������� ��������� �� 2 �� 16 ";
	cin >> p;
	while (p < 2 || p > 16)
	{
		cout << "������� ��������� ������� ��������� �� 2 �� 16 ";
		cin >> p;
	}
	cout << "\n������� ����� ������������� ����� ";
	cin >> N;
	while (N <= 0)
	{
		cout << "\n������� ����� ������������� ����� ";
		cin >> N;
	}
	while (N > 0)//������� ����� � p-����� ������� ���������
	{
		TransformedN = (N % p < 10) ? to_string(N % p) + TransformedN : char('A' + N % p - 10) + TransformedN;//���� �������� �������� ����� < 9,�� ������������� ���� �� '0' �� '9', ����� �� 'A' �� 'F'
		N /= p;
	}
	cout << TransformedN;
} 