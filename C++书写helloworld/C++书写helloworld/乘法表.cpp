#include<iostream>
using namespace std;

int main9()
{
	//打印1*1=1
	int sum = 0;
	
	//打印十行	
	for (int i = 1; i < 10; i++)
	{
		//第一行打印一个、第二行打印另个
		for (int j = 1; j < i + 1; j++)
		{
			cout << j << "*" << i << "=" << i * j<<"\t";
		}
		cout << endl;
	}
	return 0;
}