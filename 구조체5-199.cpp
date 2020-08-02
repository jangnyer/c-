//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//struct Person {
//	char name[20];
//	int a;
//	int b;
//	int c;
//	int add;
//};
//
//int main()
//{
//	struct Person p[11];
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %d %d", p[i].name, &p[i].a, &p[i].b, &p[i].c);
//		p[i].add = p[i].a + p[i].b + p[i].c;
//	}
//	for (int l = 0; l < n - 1; l++) {
//		for (int j = 0; j < n; j++)
//		{
//			if (p[j].add < p[j + 1].add)
//			{
//				p[10] = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = p[10];
//			}
//		}
//	}
//
//	for (int k = 0; k < n; k++)
//		printf("%s %d %d %d %d\n", p[k].name, p[k].a, p[k].b, p[k].c, p[k].add);
//	return 0;
//}