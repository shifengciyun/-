#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int a, b ;
//	int c = 0;
//	scanf("%d,%d", &a, &b);
//	printf("%d+%d=%c\n", a, b, c);
//
//
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//    /*********Begin*********/
//    float PI = 3.14;
//    float r, h;
//    float C1, Sb, Vb;
//    scanf("%f%f", &r, &h);
//    C1 = 2 * PI * r;
//    Sb = 4 * PI * r * r;
//    Vb = r * r * PI * h;
//    printf("C1=%.2f\n", C1);
//    printf("Sb=%.2f\n", Sb);
//    printf("Vb=%.2f\n", Vb);
//
//
//
//
//    /*********End**********/
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    float r, h;
//    scanf("%f %f", &r, &h);
//
//    float cx = 2 * 3.14 * r;  // 圆周长 = 2πr
//    float ab = 4 * 3.14 * r * r;  // 圆球表面积 = 4πr²
//    float vs = 3.14 * r * r * h;  // 圆柱体积 = πr²h
//
//    printf("%.2f\n", cx);
//    printf("%.2f\n", ab);
//    printf("%.2f\n", vs);
//
//    return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int a, b, c;
//    int x;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a > b) {
//        x = a;
//        a = b;
//        b = x;
//    }
//    if (a > c) {
//        x = a;
//        a = c;
//        c = x;
//
//    }
//    if (b > c) {
//        x = b;
//        b = c;
//        c = x;
//
//    }
//    printf("%d,%d,%d",a, b, c);
//
//
//
//
//    /*********End**********/
//    return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int x;
//    double y;
//    scanf("%d", &x);
//    if (x < 0 && x != -3)
//        y = x * x + x - 6;
//    else if (x!=-3&&x < 10 && x != 2 && x != 3)
//        y = x * x - 5 * x + 6;
//    else {
//        y = x * x - x - 1;
//    }
//        printf("%.3lf", y);
//
//        /*********End**********/
//        return 0;
//    }
#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    double x;;
    scanf("%lf", &x);
    if (x > 100 && x < 0)
        printf("Score is error!");
     else if (x >= 90) 
        printf("A");
    
    else if (x >= 80)
        printf("B");
    else if (x >= 70)
        printf("C");
    else if (x >= 60)
        printf("D");
    else {
        printf("E");
    }



    /*********End**********/
    return 0;
}
