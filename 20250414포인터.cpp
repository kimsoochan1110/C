
#include <stdio.h>
void Add(int aa,int bb,int* cc) 
{
	*cc = aa + bb; //출력변수
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	Add(a, b, &c);
	printf("%d", c);
}

//int PrintInteger(int* k)//서버 
//{
//	printf("%d", *k);//읽기용 변수
//	return 0;
//}
//int main()//클라이언트
//{
//	int n = 10;
//	PrintInteger(&n);//리드
//}

//int main()//*p = *(p+1)
//{
//	int n = 10;
//	int* p = &n;
//	printf("%d\n", n);
//	*p = 20;
//	printf("%d\n", n);
//	++(*p);
//	printf("%d\n", n);
//	(*p)++;
//	printf("%d\n", n);
//}

//#include <stdio.h>
//int main()//*p = *(p+1)
//{
//	int n = 10;
//	int* p = &n;
//	printf("%d %d\n", n, *p);
//	printf("%d %d\n", n, *(p+0));
//	printf("%d %d\n", n, p[0]);
//}

//int main()
//{
//	int n = 10;
//	int k = 20;
//	int* p = NULL; //초기갑 0 주소
//
//	//*p = &n;
//	p = &k;
//	printf("%d\n", *p);
//	p = &n;
//	printf("%d\n", *p);
//}

//#include <stdio.h>
//
//int main()//더블 포인터
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	printf("%d %d %d\n", n, *p, **pp);
//	printf("%p %p %p\n", &n, p, *pp);
//}

//#include <stdio.h>
//
//int main()//참조복사
//{
//	int n = 10;
//	int* p1 = &n;
//	int* p2 = p1;
//
//	*p2 = 100;
//	printf("%d %d %d\n", n, *p1,*p2);
//}
//#include <stdio.h>
//
//int main()//실수의 주소
//{
//	char c = 10;
//	double b = 4.5;
//
//	char* p1 = &c;
//	double* p2 = &b;
//
//	printf("%d, %d\n", c, *p1);
//	printf("%g, %g\n", b, *p2);//실수 쓸땐 %g
//}
//#include <stdio.h>
//int Incremunt(int a)
//int main()// 주소값 포인터
//{
//	int n = 10;
//	int* p = &n;
//	printf("%d %d\n", n, *p);
//	printf("%p %p\n", &n, &*p);
//	printf("%p %p\n", &n, p);
//	printf("%d %d\n", *&n, *p);
//}
//#include <stdio.h>
//int Incremunt(int a)
//{
//	a = a + 1;
//	return a;
//}
//
//int main()
//{
//	int n = 10;
//	n = Incremunt(n);
//	printf("%d\n", n);
//	n = Incremunt(n);
//	printf("%d\n", n);
//	n = Incremunt(n);
//	printf("%d\n", n);
//}