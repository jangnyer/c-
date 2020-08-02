//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	int n = 0;
//	int m = 0;
//
//	scanf("%d %d", &n, &m);
//
//	if(m==1) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 0; j < n; j++) {
//				printf("%d ",i);
//			}printf("\n");
//		}}
//	else if (m == 2) {
//		int arr[100][100] = { 0, };
//	
//		for (int p = 0; p < n; p++) {
//			int num = 1;
//			if (p % 2 == 0) {//È¦¼öÇà
//				for (int q = 0; q < n; q++) {
//					arr[p][q] = num++;
//				}			}
//			else if (p % 2 == 1) {
//				for (int u = n-1; u >=0; u--) {
//					arr[p][u] = num++;
//				}			}
//		}
//		for (int out = 0; out < n; out++) {
//			for (int out1 = 0; out1 < n; out1++) {
//				printf("%d ", arr[out][out1]);
//
//			}printf("\n");
//		}
//	}
//
//	else if (m == 3) {
//		for (int k = 1; k <= n; k++) {
//			for (int l = 1; l <= n; l++) {
//				printf("%d ", k*l);
//			}printf("\n");
//		}
//	}
//
//
//	return 0;
//}