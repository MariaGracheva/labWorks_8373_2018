#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
		float first, second, resault;
		bool flag = true;
		char sign;
		setlocale(0, "rus");
		cout << "������ ������ �����: ";
		cin >> first;
		cout << "������ ������ �����: ";
		cin >> second;
		cout << "������ ��������: ";
		cin >> sign;
	
		switch(sign){
			case '+': 
				resault = first + second; break;
			case '-':
				resault = first - second; break;
			case '*': 
				resault = first * second; break;
			case '/':
				if (second == 0) {
					flag = false;
					cout << "������ �����!" << endl; break;
				}
				else {
					resault = first / second; break;
				}
			default:{
			       flag = false;
			       cout << "������ �����!" << endl;
			}
		}
	    if(flag){
		       cout << first << " " << sign << " " << second << " " << "=" << " " << resault << endl;
	    }

		//system("pause");
}