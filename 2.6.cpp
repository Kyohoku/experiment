#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cout << "����������������" << endl;
	cin >> a >> b;
	c = max(a, b);
	d = min(a, b);//cΪ�ϴ����
	if(c%d==0)
	{
		cout << "���Լ��Ϊ" << d << endl;
		cout << "��С������Ϊ" << c<< endl;
	}
	else if (c % d != 0)
	{
		for (int i = d;; i--)
		{
			if (c % i == 0 && d % i == 0)
			{
				cout <<"���Լ���ǣ�" << i << endl;
				break;
			}

	   }
		for (int t = c;; t++)
		{
			if (t % c == 0 && t % d == 0)
			{
				cout << "��С�������ǣ�" << t << endl;
				break;
			}
		}


	}
		

	
			

			
	
	



	return 0;
}