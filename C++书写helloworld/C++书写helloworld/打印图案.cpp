 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main6()
{
	for (int i = 0; i < 10; i++)
	{	//打印一行
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		//打印换行
		cout << endl;
	}	
	return 0;
}
