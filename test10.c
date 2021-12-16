 #define  _CRT_SECURE_NO_WARNINGS -1

#include<stdio.h>

//写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
//
//int  count_one_bits(int value)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((value >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//   int a = 0;
//   int ret = 0;
//   scanf("%d", &a);
//   ret = count_one_bits(a);
//   printf("%d\n", ret);
//   return 0;
//}
//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
//int main()
//{
//	int a = 15;
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >=0; i -= 2)
//	{
//		printf("%d ", ((a >> i) & 1));//输出奇数列
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >=1; i -= 2)
//	{
//		printf("%d ", ((a >> i) & 1));//输出偶数列
//	}
//	return 0;
//}
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
int count_one_bits(int a,int b)
{
	int temp = a ^ b;
	int count = 0;
	while (temp)
	{
		temp = temp & (temp - 1);
		count++;
	}
	return count;
}

int main()
{
	int a = 1999;
	int b = 2299;
	int count = count_one_bits(a,b);
	printf("%d\n", count);
	return 0;
}
//输出一个整数的每一位。
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 31; i >=0; i--)
//	{
//		printf("%d", ((a >> i) & 1));
//	}
//	return 0;
//}
//
//int main()
//{
//	printf("%d", !2);
//}