#include <stdio.h>
int main()//�迭,�迭�� �ּ� ����
{
    //�������� ����
    int arr[4] = { 10,20,30,40 };
    int* p = NULL;
    p = &arr[3];
        for (int i = 0;i > -4; i--)
        printf("%d\n", p[i]);
}

//#include <stdio.h>
//int main()//�迭,�迭�� �ּ� ����
//{
//    //p[0]�� ����
//    int arr[4] = { 10,20,30,40 };
//    int* p = NULL;
//    p = &arr[0];
//
//    for (int i = 0;i < 4; i++)
//        printf("%d\n", p[i]);
//}

//#include <stdio.h>
//int main()//�迭,�迭�� �ּ� ����
//{
//    //�ּҿ��꿡 ��������!!!
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
//int main()//�迭,�迭�� �ּ� ����
//{
//    //Ÿ�Ժ� �迭
//    int arr[4] = { 10,20,30,40 };
//    int* p = NULL;
//    p = &arr[2];
//
//    printf("%d\n", *p);
//    for (int i = 0;i < 4; i++)
//        printf("%d\n", arr[i]);
//}

//#include <stdio.h>
//int main()//�迭,�迭�� �ּ� ����
//{
//    //Ÿ�Ժ� �迭
//    char carr[2] = { 10,20 };
//    double darr[3] = { 1.1, 2.2, 3.3 };
//    printf("%p,%p\n", &carr[0], &carr[1]);
//    printf("%p,%p,%p\n",&darr[0],&darr[1],&darr[2]);
//}

//#include <stdio.h>
//int main()//�迭,�迭�� �ּ� ����
//{
//
//	int arr[4] = { 10,20,30,40 };
//
//	for (int i = 0;i < 4; i++) 
//		printf("%d\n", arr[i]);
//
//	for (int i = 0;i < 4; i++)//�迭�� �ּ�
//		printf("%p\n", &arr[i]);
//}


//#include <stdio.h>
//int main()//�迭,�迭�� �ּ� ����
//{
//���� �ϳ��� ����
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
//int main()//�迭,�迭�� �ּ� ����
//{//�迭�� �ݺ��� ���Ⱑ ����!
//
//	int arr[5];
//	for (int i=0,j=1;i < 5; i++,j++)�ݺ����� ���� �ΰԵ� �����ϴ�
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
//int main()//�迭,�迭�� �ּ� ����
//{
//	
//	int arr[5] = { 10,20,30,40,50 };
//	for (int i = 0;i < 5; i++) 
//	{
//		printf("%d\n", arr[i]);
//	}
//}

//#include <stdio.h>
//int main()//�迭,�迭�� �ּ� ����
//{
//	//�迭�� ������
//	int arr[5] = { 10,20,30,40,50 };
//	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//int main()//�ּ��� ���� : ���� ������
//{
//	int n = 10;
//	int* p = &n;
//	printf("%p\n", &n);
//	printf("%p\n", &n+1);
//	printf("%p\n", &n + 2);
//	printf("%p\n", &n - 1);
//}

//#include <stdio.h> //������ ����
//void Updata(int*p,int a) //�Լ��� �ϳ��� ��ɸ� �����ϵ��� ������ �Ѵ�
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
//void PrintData(int*p) //ȣ��ɋ��� �޸𸮰� �����ǰ� ��ȯ�ɋ��� �����
//{
//	printf("%p,%d\n", p, *p);
//	*p = 200;//�ּҸ� �̿��� ������ ������ ������ �� �ִ�
//}
//
//int main() //main�̶�¸޸𸮿� n��p�� �����
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