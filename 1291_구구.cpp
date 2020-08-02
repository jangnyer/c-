//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int s = 0;
//	int e = 0;
//
//	scanf("%d %d", &s, &e);
//	for (;;) {
//		if (2 > s || s > 9 || 2 > e || e > 9) {
//			printf("INPUT ERROR!\n");
//			scanf("%d %d", &s, &e);
//		}
//		else
//			break;
//	}
//	if (s > e) {
//		for (int i = 1; i <=9; i++) {
//			for (int j = s; j >= e;j--) {
//				printf("%d * %d = %2d   ", j, i, j * i);
//			}
//			printf("\n");
//
//		}
//	}
//
//	else if (s <=e) {
//		for (int h = 1; h <= 9; h++) {
//			for (int k = s; k <= e; k++) {
//				printf("%d * %d = %2d   ", k, h, k * h);
//			}
//			printf("\n");
//
//		}
//	}
//	return 0;
//}