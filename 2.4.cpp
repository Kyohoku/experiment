#include<iostream>
using namespace std;
int main() {
	int a, b;
	char t;
	cout << "������һ����" << endl;
	cin >> a;
	cout << "������һ�������" << endl;
	cin >> t;
	cout << "��������һ����" << endl;
	cin >> b;
	int f;
	f = int(t);
	switch (f)
	{
	case 43:
		cout << a + b << endl;
		break;
	case 45:
		cout << a - b << endl;
		break;
	case 42:
		cout << a * b << endl;
		break;
	case 37:
		cout << a % b << endl;
		break;
	case 47:
		if (b == 0)
			cout << "��������Ϊ0" << endl;
		else
			cout << a / b << endl;
		break;
	default:
		cout << "���������Ϲ�" << endl;
		break;
	}
		return 0;
	}