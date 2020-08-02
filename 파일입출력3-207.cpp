//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	FILE* fp = fopen("207.txt", "w");
//	int a, b;
//	char c;
//
//	scanf("%d %d %c", &a, &b, &c);
//	fprintf(fp,"%d %d %c", a, b, c);
//
//	if (c == '+') {
//		printf("%d + %d = %d", a, b, a + b);
//		fprintf(fp,"%d + %d = %d", a, b, a + b);
//	}
//
//	else if(c=='-') {
//		printf("%d - %d = %d", a, b, a - b);
//		fprintf(fp, "%d - %d = %d", a, b, a - b);
//	}
//
//	else if (c == '*') {
//		printf("%d * %d = %d", a, b, a * b);
//		fprintf(fp, "%d * %d = %d", a, b, a & b);
//	}
//	else if (c == '/') {
//		printf("%d / %d = %d", a, b, a / b);
//		fprintf(fp, "%d / %d = %d", a, b, a / b);
//	}
//	else if (c == '%') {
//		printf("%d %% %d = %d", a, b, a % b);
//		fprintf(fp, "%d %% %d = %d", a, b, a % b);
//	}
//
//	fclose(fp);
//	return 0;
//}