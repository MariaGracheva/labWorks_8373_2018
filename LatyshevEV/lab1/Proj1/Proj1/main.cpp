#include<iostream>
#include<string>
using namespace std;
int main()
{
	setlocale(0, "");
	float left;
	char sign;
	float right;
	bool flag = false;
	cout << "������� ����� �������" << endl;
	cin >> left;
	cout << "������� ������ �������" << endl;
	cin >> right;
	cout << "������� ����" << endl;
	cin >> sign;
	float result;
	switch (sign)
	{
	case '+': result = left + right;
		break;
	case '-': result = left - right;
		break;
	case '*' : result = left * right;
		break;
	case '/' : 
		if (right != false)
		{ 
			result = left / right; 
		}
		else 
		{ 
			flag = true;
			cout << "������: ������� �� ����"<<endl; 
		}
		break;
	default:cout << "������: ���� �� �������"<< endl;
		flag = true;
		break;
	}
	if (flag == false)
	{
		cout << left << sign<< right << '=' << result;
	}
	cout << endl;
	system("pause");
	return 0;
}