#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	char a[100];
	cin.getline(a,100);
	int len = strlen(a);
	int num=0;//���ֵ�����
	int let=0;//��ĸ������
	int oth=0;//�����ַ�������
	for (int i = 0; i <= len - 1;i++) {
		if(a[i]>='0'&&a[i]<='9')
		{
			num++;
		}
		else if(a[i]>='A'||a[i]<='Z')
		{
			let++;
		}
		else if(a[i]>='a'||a[i]<='z')
		{
			let++;
		}
		else { oth++; }



	}
	cout << "���ֵ�����Ϊ�� " << num << endl;
	cout << "��ĸ������Ϊ�� " << let << endl;
	cout << "�����ַ�������Ϊ�� " << oth << endl;



	return 0;
}