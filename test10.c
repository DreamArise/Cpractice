 #define  _CRT_SECURE_NO_WARNINGS -1

#include<stdio.h>

//дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1
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
//��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
//int main()
//{
//	int a = 15;
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >=0; i -= 2)
//	{
//		printf("%d ", ((a >> i) & 1));//���������
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >=1; i -= 2)
//	{
//		printf("%d ", ((a >> i) & 1));//���ż����
//	}
//	return 0;
//}
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
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
//���һ��������ÿһλ��
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