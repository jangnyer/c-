//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int num = 1;
//	int arr[100][100] = { 0, };
//	scanf("%d %d", &n, &m);
//
//	for (int i = 0; i < n; i++) {
//		if (i % 2 == 0) {
//			for (int j = 0; j < m; j++) {
//				arr[i][j] = num++;
//			}
//		}
//		else if (i % 2 == 1) {
//			for (int k = m - 1; k >= 0; k--) {
//				arr[i][k] = num++;
//			}
//		}
//	}
//	for (int p = 0; p < n; p++) {
//		for (int l = 0; l < m; l++) {
//			printf("%d ", arr[p][l]);
//		}printf("\n");
//	}
//
//
//
//
//	return 0;
//}