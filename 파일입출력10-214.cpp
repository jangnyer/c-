//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int n = 10;
//    char a[10][100];
//    char r[10][100];
//    char tmp[20];
//    char mark[2];
//
//    int i, j, k;
//    for (i = 0; i < n; i++) {
//        fscanf(stdin, "%s", a[i]);
//    }
//    fscanf(stdin, "%s", mark);
//
//    for (i = 0, j = 0; i < n; i++) {
//        if (strstr(a[i], mark)) {
//            strcpy(r[j], a[i]);
//            j++;
//        }
//    }
//    for (i = 0; i < j - 1; i++) {
//        for (k = i + 1; k < j; k++) {
//            if (strcmp(r[i], r[k]) > 0)
//            {
//                strcpy(tmp, r[i]);
//                strcpy(r[i], r[k]);
//                strcpy(r[k], tmp);
//            }
//        }
//    }
//    for (i = 0; i < j; i++) {
//        fprintf(stdout, "%s\n", r[i]);
//    }
//}
