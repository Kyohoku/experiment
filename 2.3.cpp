#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || b + c <= a || a + c <= b)
		cout << "���޷�����һ��������" << endl;
	else if (a == b || c == a || b == c)
		cout << "����һ������������," << "��������ε��ܳ�Ϊ�� " << a + b + c << endl;
	else
		cout<< "��������ε��ܳ�Ϊ�� " << a + b + c << endl;
	return 0;

	    


}