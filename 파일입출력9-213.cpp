//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include<string.h>
//
//int main() {
//	FILE* fp = fopen("213.txt", "w");
//	char s1[100] = { 0, };
//	char word[100][100] = { 0, };
//	char long1[100];
//	int alen = strlen(s1);
//	int count = 0;
//
//	char *token = strtok(s1," ");
//	while (token != NULL) {
//		strcpy(word[count++], token);
//		token = strtok(NULL, " ");
//	}
//
//
//
//	printf("%d\n", alen);
//	fprintf(fp,"%d\n", alen);
//
//	fclose(fp);
//	return 0;
//}