//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//
//int main() {
//	FILE* fp = fopen("209.txt", "w");
//	int num = 0;
//	int arr[1000] = { 0, };
//	int level = 0;
//	
//	for (int i = 0; i < 1000; i++) {
//		scanf("%d", &arr[i]);
//		fprintf(fp, "%d ", arr[i]);
//		level++;
//		if (arr[i] == 0)
//			break;
//	}
//	
//	for (int j = 0; j < level-1; j++) {
//		if ((arr[j] % 3 == 0) && (arr[j] % 5 == 0))
//		{
//			num++;
//			printf("%d ", arr[j]);
//			fprintf(fp, "%d ", arr[j]);
//		}
//	}
//	if (num > 0) {
//		printf("\n%d\n", num);
//		fprintf(fp, "\n%d\n", num);
//	}
//	else {
//		printf("%d\n", num);
//		fprintf(fp, "%d\n", num);
//	}
//
//	fclose(fp);
//
//	return  0;
//}
