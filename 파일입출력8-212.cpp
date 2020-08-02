#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main() {
	FILE* fp = fopen("212.txt", "w");
	int n;
	int a, b, c;
	double arr[100] = { 0, };
	double avg;
	double temp;
	scanf("%d", &n);
	fprintf(fp,"%d\n",n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		fprintf(fp,"%d %d %d\n", a, b, c);
		avg = ((double)a + (double)b + (double)c) / 3;
		arr[i] = avg;
	}

	for (int j = 0; j < n-1; j++) {
		for (int k = 0; k < n; k++) {
			if (arr[k] < arr[k + 1]) {
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
	for (int m = 0; m < n; m++) {
		printf("%0.1f\n", arr[m]);
		fprintf(fp,"%0.1f\n", arr[m]);
	}
	return 0;
}
