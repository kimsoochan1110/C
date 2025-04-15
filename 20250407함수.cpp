#include <stdio.h> //<<<지금까지 선언하고 있었음
int Sum(int a, int b);//선언: 함수의 시그니쳐

int main()
{
	int a = 0;
	a = Sum(1, 50);
	printf("%d", a);

}

int Sum(int a, int b)
{
	int sum = 0;
	for (int i = a;i <= b;++i)
	{
		sum = sum + i;
	}
	return sum;
}


//#include <stdio.h>
//int Sum(int a, int b)
//{
//	int sum = 0;
//	for (int i = a;i <= b;++i)
//	{
//		sum = sum + i;
//	}
//	 return sum;
//}
//
//int main()
//{
//	int a = 0;
//	a = Sum(1, 50);
//	printf("%d", a);
//
//}

//#include <stdio.h>
//int Sum(int a,int b,int c) 
//{
//	for (int i = a;i < b;++i)
//	{
//		if (i % 2 == c)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	
//
//	Sum(1, 200, 1);
//	Sum(1, 200,0);
//
//}

//#include <stdio.h>
//
//int Add(int a,int b) //리턴 타입
//{
//	int c = a + b;
//	return c; //리턴 밸류
//}
//int main()
//{
//	int resut = 0;
//	
//	resut = Add(10, 20);
//	printf("%d", resut);
//	
//}


//#include <stdio.h>
//void PrintStr(int x)
//{
//	for (int i = 0;i < x; ++i)
//		printf("Hello:%d\n", i+1);
//}
//
//int main()
//{
//	PrintStr(10);
//}
//

//#include <stdio.h>
//void PrintStr()
//{
//	printf("Hello");//피 호출자 서버
//}
//int main()
//{
//	PrintStr();//call 호출자 클라이언트
//}

//#include <stdio.h>
//int main()
//{
//	puts("Hellow");  //표준 라이브러리 함수
//	printf("Hellow\n");
//	printf("int:%d\n", 100);
//	printf("string:%s\n", "hellow");
//	return 0;
//}
//
