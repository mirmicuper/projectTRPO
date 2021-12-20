#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int a = 100;
	int b,d,k;
	char c[a];
	cout << "Введите число в десятичной системе счисления ";
	cin>>b;
	_itoa_s(b, c, 2);
	cout << "Число в двоичной системе счисления " << c << endl;
	_itoa_s(b, c, 8);
	cout << "Число в восьмиричной системе счисления "<<c<<endl;
	_itoa_s(b, c, 10);
	cout << "Число в десятичной системе счисления "<<c<<endl;
	_itoa_s(b, c, 16);
	cout << "Число в шестнадцатиричной системе счисления "<<c<<endl;
	cout << "Не та система счисления?1-Да 2-Нет";
	cin>>d;
	switch (d) {
	case 1:
		cout << "Введите необходимую систему счисления ";
		cin >> k;
		_itoa_s(b, c, k);
		cout << "Число в " << k << " системе счисления " << c << endl;
		break;
	case 2:
		cout << "Пока";
		break;
	}
	return 0;
}