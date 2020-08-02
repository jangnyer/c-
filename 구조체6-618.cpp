//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//                                     //혹시 함수로 푸신분??
//struct Person {
//	char name[10];
//	int height;
//	float weight;
//};
//
//int main()
//{
//	struct Person p[6];
//	for (int i = 0; i < 5; i++)
//		scanf("%s %d %f", p[i].name, &p[i].height, &p[i].weight);
//
//	for(int j=0;j<4;j++){
//		for (int l = 0; l < 5; l++)	{
//			if (strcmp(p[l].name, p[l + 1].name) > 0)	{
//				p[5] = p[l];
//				p[l] = p[l + 1];
//				p[l + 1] = p[5];
//			}}}
//
//	printf("name\n");
//	for (int m = 0; m < 5; m++)
//		printf("%s %d %0.1f\n", p[m].name, p[m].height, p[m].weight);
/////////////////////////////////////////////////////////////////////
//	for (int n = 0; n < 4; n++) {
//		for (int o = 0; o < 5; o++) {
//			if (p[o].weight<p[o+1].weight) {
//				p[5] = p[o];
//				p[o] = p[o + 1];
//				p[o + 1] = p[5];
//			}
//		}
//	}
//	printf("\n");
//	printf("weight\n");
//	for (int q = 0; q < 5; q++)
//		printf("%s %d %0.1f\n", p[q].name, p[q].height, p[q].weight);
//	//////////////////////////
//	
//
//
//	return 0;
//}