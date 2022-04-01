 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;
int main7()
{
	int a = 0;//存储个位
	int b = 0;//存放十位
	int c = 0;//存放百位
	int i = 100;
	for (; i < 1000; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		//cout << i<<endl;
		if (a * a * a + b * b * b + c * c * c == i)
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}