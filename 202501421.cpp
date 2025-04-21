#include <stdio.h>
int main()//배열,배열의 주소 연산
{
    //리버스로 가능
    int arr[4] = { 10,20,30,40 };
    int* p = NULL;
    p = &arr[3];
        for (int i = 0;i > -4; i--)
        printf("%d\n", p[i]);
}

//#include <stdio.h>
//int main()//배열,배열의 주소 연산
//{
//    //p[0]의 사용법
//    int arr[4] = { 10,20,30,40 };
//    int* p = NULL;
//    p = &arr[0];
//
//    for (int i = 0;i < 4; i++)
//        printf("%d\n", p[i]);
//}

//#include <stdio.h>
//int main()//배열,배열의 주소 연산
//{
//    //주소연산에 유의하자!!!
//    int arr[4] = { 10,20,30,40 };
//    int* p = NULL;
//    p = &arr[2];
//
//    printf("%d\n", *p);
//    printf("%d\n", *p + 1);
//    printf("%d\n", *(p+1));
//    for (int i = 0;i < 4; i++)
//        printf("%d\n", arr[i]);
//}

//#include <stdio.h>
//int main()//배열,배열의 주소 연산
//{
//    //타입별 배열
//    int arr[4] = { 10,20,30,40 };
//    int* p = NULL;
//    p = &arr[2];
//
//    printf("%d\n", *p);
//    for (int i = 0;i < 4; i++)
//        printf("%d\n", arr[i]);
//}

//#include <stdio.h>
//int main()//배열,배열의 주소 연산
//{
//    //타입별 배열
//    char carr[2] = { 10,20 };
//    double darr[3] = { 1.1, 2.2, 3.3 };
//    printf("%p,%p\n", &carr[0], &carr[1]);
//    printf("%p,%p,%p\n",&darr[0],&darr[1],&darr[2]);
//}

//#include <stdio.h>
//int main()//배열,배열의 주소 연산
//{
//
//	int arr[4] = { 10,20,30,40 };
//
//	for (int i = 0;i < 4; i++) 
//		printf("%d\n", arr[i]);
//
//	for (int i = 0;i < 4; i++)//배열의 주소
//		printf("%p\n", &arr[i]);
//}


//#include <stdio.h>
//int main()//배열,배열의 주소 연산
//{
//변수 하나만 쓰기
//	int arr[5];
//	for (int i = 0;i < 5; i++)
//	{
//		arr[i] = 10 * (i+1);
//	}
//
//	for (int i = 0;i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

//#include <stdio.h>
//int main()//배열,배열의 주소 연산
//{//배열은 반복을 쓰기가 좋다!
//
//	int arr[5];
//	for (int i=0,j=1;i < 5; i++,j++)반복문에 변수 두게도 가능하다
//	{
//		arr[i] = 10 * j;
//	}
//
//	for (int i = 0;i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

//#include <stdio.h>
//int main()//배열,배열의 주소 연산
//{
//	
//	int arr[5] = { 10,20,30,40,50 };
//	for (int i = 0;i < 5; i++) 
//	{
//		printf("%d\n", arr[i]);
//	}
//}

//#include <stdio.h>
//int main()//배열,배열의 주소 연산
//{
//	//배열의 사이즈
//	int arr[5] = { 10,20,30,40,50 };
//	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//int main()//주소의 연산 : 정수 가감산
//{
//	int n = 10;
//	int* p = &n;
//	printf("%p\n", &n);
//	printf("%p\n", &n+1);
//	printf("%p\n", &n + 2);
//	printf("%p\n", &n - 1);
//}

//#include <stdio.h> //포인터 복습
//void Updata(int*p,int a) //함수는 하나의 기능만 가능하도록 만들어야 한다
//{
//	*p = a;
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//
//	Updata(&n, 50);
//	printf("%d\n", n);
//	Updata(p, 80);
//	printf("%d\n", n);
//}
//#include <stdio.h>
//void PrintData(int*p) //호출될떄만 메모리가 생성되고 반환될떄는 사라짐
//{
//	printf("%p,%d\n", p, *p);
//	*p = 200;//주소를 이용한 연산은 변수를 고쳐줄 수 있다
//}
//
//int main() //main이라는메모리에 n과p가 저장됨
//{
//	int n = 10;
//	int* p = &n;
//	PrintData(&n);
//	PrintData(p);
//	printf("%d", n);
//}
//int main()
//{
//	char n = 10;
//	char* p = &n;
//	printf("%d\n %d\n %p\n %p\n", n, *p, &n, p);
//	printf("%p\n %p\n", &n + 1, p + 1);
//}
//int main() 
//{
//	int n = 10;
//	int* p = &n;
//	printf("%d\n %d\n %p\n %p\n", n, *p, &n, p);
//	printf("%p\n %p\n",&n+1 , p+1);
//}