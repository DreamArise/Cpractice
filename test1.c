

//乘法表
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int result = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			result = j * i;
//			printf("%d x %d = %d\t", i, j, result);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//打印100-200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2) 
//	{
//		for (j = 2; j <i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//			printf("%d ", i);
//			count++;
//	}
//	printf("\n%d", count);
//	return 0;
//}

//判断1000-2000之间的闰年
#define  _CRT_SECURE_NO_WARNINGS -1
#include <stdio.h>

int mian()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0) && (i % 100 !=0)||(i%400==0))
		{
			printf("%d ", i);
		}
	}
	return 0;
}












