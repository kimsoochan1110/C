#include <stdio.h>
//����
void SumInteger(int b)
{
	int a = 0;
	for (int i = 1; i <= b; ++i)
		a = a + i;
	printf("%d\n", a);
}
int main()
{
	//������Լ��� ����
	SumInteger(3);
	SumInteger(10);
	SumInteger(100);
}
//#include <stdio.h>
////for�� ������������ while����
//int main()
//{
//	int a = 0;
//	for (int i = 1; i <= 10; ++i)
//		a = a + i;
//	printf("%d\n", a);
//}
//#include <stdio.h>
////for�� ������������ while����
//int main()
//{
//	int n = 100;
//	for (int i = 0; i < n; ++i)
//		if(i % 2 == 0)
//		printf("[%d]:%d\n", i, i + 1);
//}
//#include <stdio.h>
//#include <conio.h>
////for�� ������������ while����
//int main()
//{
//	int run = 1;
//	while (run)
//	{
//		printf("����:q");
//		char c = _getch();
//		if (c == 'q')
//		{
//			run == 0;
//		}
//		else
//		 printf("Hello: %c\n", c);
//	}
//}
//#include <stdio.h>
//#include <conio.h>
////for�� ������������ while����
//int main()
//{
//	int i = 0;
//	while (1)  
//	{
//		printf("����:q");
//		char c = _getch();
//		if (c == 'q')
//		{
//			break;
//		}
//		printf("Hello: %c\n", c);
//	}
//}
//
// for��
// int main()
//{
//	for (int i = 0; i < 5; ++i)// for(�ʱ�ȭ; ����; ����)
//	{
//		printf("int : %d\n", i+1);
//	}
//}
//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//	switch (_getch()-'0')//���ڸ� ���������� ����� �ַ���
//	{
//	case 1:
//		printf("A : %d\n", 1);
//		break;
//	case 2:
//		printf("B : %d\n", 2);
//		break;
//	case 3:
//		printf("C : %d\n", 3);
//		break;
//	default:
//		printf("default\n");
//		break;
//	}
//}
// 
// ���ǹ�
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 5;
//	if (b > a)
//	{
//		printf("Hellow True\n");
//	}
//	else
//	{
//		printf("Hellow False\n");
//	}
//}
// 
// &�ּ�
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	printf("%d : %d\n", sizeof(int), sizeof(n));
//	printf("%p : %d\n", &n, n);
//	printf("%p : %d\n", &n+1, n+1);
//}
//
// 
// ��� os�� 64bit(cpu=)
//#include <stdio.h>
//int main()
//{
//	char c = 10; //1b
//	short s = 10; //2b
//	int i = 10; //4b
//	long l = 10; //4b
//	float f = 10; //4b
//	double d = 10; //8b
//	printf("%d : %d\n", sizeof(char), sizeof(c));
//	printf("%d : %d\n", sizeof(short), sizeof(s));
//	printf("%d : %d\n", sizeof(int), sizeof(i));
//	printf("%d : %d\n", sizeof(long), sizeof(l));
//	printf("%d : %d\n", sizeof(float), sizeof(f));
//	printf("%d : %d\n", sizeof(double), sizeof(d));
//}
 
//{
//	int n1 = 1;
//	int n2 = 2;
//	printf(" % d + % d = % d\n", 1, 2, 3);
//	printf(" % d + % d = % d\n", 1, 2, 1 + 2);
//	printf(" % d + % d = % d\n", n1, n2, n1 + n2);
//	printf(" % d + % d = % d\n", n1, n2, n1 + n2);
//	int r = n1 + n2;
//	printf(" % d + % d = % d\n", n1, n2,r);
//}