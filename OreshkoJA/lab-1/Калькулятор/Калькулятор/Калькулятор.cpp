#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	float first, second;
	cout << "������� ������ �����:";
	cin >> first;
	char sign;
	cout << "������� ����:";
	cin >> sign;
	cout << "������� ������ �����:";
	cin >> second;
	float result;
	if (second == 0) {
		if (sign == '/') {
			cout << "������ �� ���� ������" << endl;
		}
	}
	else {
		switch (sign) {
		case '+': result = first + second;
			break;
		case '-': result = first - second;
			break;
		case '*': result = first * second;
			break;
		case '/': result = first / second;
			break;
		default: cout << "������������ ���� �����, ����������, ������� ������ �������" << endl;	
			break;
		}
		cout << "���������:" << result << endl;
	}
	system("pause");
}