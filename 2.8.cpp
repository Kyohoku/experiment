#include<iostream>
using namespace std;
int main() {
	double a,i;
	cout << "������һ������" << endl;
	cin >> a;
	for (double b=a;;b=i)
	{
		double  t;
		i = (b + a/b)/2;
		t = fabs(i - b);
		if (t < 0.00001)
		{
			cout << "����ƽ����ԼΪ��" << i;
			break;
		}
		
		





	}







	return 0;
}