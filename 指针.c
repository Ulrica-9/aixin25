
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	int a[10];
//	int* p;
//	int i;
//	p = a;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", p+i);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	int a[10];
//	int* p;
//	int i;
//	p = a;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", p++);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(--p));
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//void nx(int* a,int sz)
//{
//	int i, j;
//	int temp;
//	for (i = 0, j = sz - 1; i < j; i++, j--)
//	{
//		temp = *(a+i);
//		*(a+i) = *(a+j);
//		*(a+j) = temp;
//	}
//}
//int main(void)
//{
//	int num[10];
//	int sz, i;
//	int* p;
//	p = num;
//	sz = sizeof(num) / sizeof(num[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf_s("%d", p + i);
//	}
//	printf("������������ֵ:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("�������������:");
//	nx(num,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//�������鴴��������
#include <stdio.h>
#include <string.h>
void text(int* p, int  sz)
{
	int i;
	printf("�����ʼ��:");
	for (i = 0; i < sz; i++)
	{
		*(p + i) = 0;
	}
}
void daying(int* p,int num[],int sz)
{
	
	while (p < num + sz)
	{
		printf("%d  ", *(p++));
	}
	printf("\n");
}
void dump(int* p, int num[], int sz)
{
	printf("��������Ҫ����ֵ:");
	while (p < num + sz)
	{
		scanf_s("%d", p++);
	}
}
void rank_my(int* p, int  num[], int  sz)
{
	int temp;
	int i, j;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1; j++)
		{
			temp = 0;
			if (*(num+j) > *(num + 1+j))
			{
				temp = *(num + 1+j);
				*(num + 1 + j) = *(num + j);
				*(num + j) = temp;
			}
		}
	}
}
int main(void)
{
	int num[10];
	int sz;
	int* p=num;
	int i;
	sz = sizeof(num) / sizeof(num[0]);
	//��ʼ������
	text(p,sz);
	//��ӡ����
	daying(p,num,sz);
	//������Ҫ�����ֵ
	dump(p,num,sz);
	//��ӡ
	daying(p, num, sz);
	//����
	rank_my(p, num, sz);
	//��ӡ
	daying(p, num, sz);
	return 0;

}



