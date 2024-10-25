#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int c;
    int x;
    int i = 0;
    char a;
        
    int arr[100] ;
    while (a=='\n')
    {

        
        scanf("%d", &arr[i]);
       
         scanf("%c", &a);
       
        
        i++;
        x = i;
    }

    for (int b = 0;b < x;b++) {
        c = arr[b+1] - arr[b];
        printf("%d",   c);
        printf(" ");


    }
    return 0;
}



//#include<stdio.h>
//#include<string.h>
//int main() {
//	int i = 0;
//	int x;
//	char a[100];
//	while (2) {
//		
//		 
//scanf("%c", a);
//			if (a[i] == '\0')
//				break;		
//			i++;		
//	}
//	int max = a[0];
//	x = strlen(a);
//	for (int n = 1;n < x;n++)
//	{
//		if (a[n] > max)
//			max = a[n];
//		
//	}
//	printf("%c", max);
//
//
//
//	return 0;
//} 
//#include<stdio.h>
//int main() {
//	
//
//	char a[100];
//	scanf("%s", a);
//	if (strlen(a)!=0)
//		printf("%s", a);
//	else printf("空串\n");
//
//
//	return 0;
//}
//#include<stdio.h>
//#define N 4
//int main() {
//	FILE* zljdzy;
//	char name[20], waihao[30];
//	zljdzy = fopen("zy.txt", "r");
//	if (zljdzy == NULL) {
//		printf("不能创造文件");
//
//	}
//	
//	for (int i = 0;i < N;i++) {
//		fscanf(zljdzy, "%s %s", name, waihao);
//		printf("%s %s\n", name, waihao);
//	}
//
//
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//	FILE* zy;
//	char  a[20] = { 0 };
//	zy = fopen("www.txt", "a");
//	if (zy == NULL)
//		printf("不能创造文件");
//	int i = 0;
//	while (a[i]=='\0') { 
//		a[i]=getchar();
//	
//
//	
//		
//		fprintf(zy, "%c", a[i]);
//		fprintf(zy, "\n");
//		i++;
//
//	}
//
//	return 0;
//
//
//}
 