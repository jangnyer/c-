//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//
//int main() {
//	FILE* fp = fopen("210.txt", "w");
//
//	int n;
//
//	scanf("%d", &n);
//	fprintf(fp,"%d\n", n);
//
//	//////////////////////////////////���� �ﰢ��
//	for (int i = 0; i < n; i++) {
//		for (int j = n - i - 2; j >= 0; j--)     //����
//		{
//			printf("  ");
//			fprintf(fp,"  ");
//		}for (int k = 0; k < 2 * i + 1; k++)
//		{
//			printf("* ");
//			fprintf(fp,"* ");
//		}printf("\n");
//	}
//	////////////////////////////////////�Ʒ��� �ﰢ��
//	for (int l = n-1; l > 0; l--) {
//		for (int m = 0; m<n-l; m++) {
//			printf("  ");
//			fprintf(fp,"  ");
//		}
//		for (int p =0 ; p<2*l-1; p++) {
//			printf("* ");
//				fprintf(fp,"* ");
//		}
//		printf("\n");
//		fprintf(fp,"\n");
//}
//
//	fclose(fp);
//	return 0;
//}
