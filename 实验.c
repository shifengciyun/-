#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//    char arr[100];
//    int i = 0, k = 0, e, f;
//    while (1)
//    {
//        if ((arr[i] = getchar()) == '\n')
//            break;
//
//        if (arr[i] = 'b') {
//            k = 1;
//        }
//        else {
//            if (k == 1) {
//                printf("False");
//            }
//            }
//        }
//        printf("True");
//
//        return 0;
//    }
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//    /*********Begin*********/
//    printf("Please enter the coeffocoents a,b,c:\n");
//    double a, b, c, x1, x2;
//    scanf("%f,%f,%f", &a, &b, &c);
//    if (b * b - (4 * a * c) < 0)
//    {
//        printf("error!\n");
//    }
//    x1 = (-b + sqrt(b * b - (4 * a * c))) / (2 * a);
//    x2 = (-b - sqrt(b * b - (4 * a * c))) / (2 * a);
//    printf("x1=%.4f,x2=%.4f\n", x1, x2);
//
//
//    /*********End**********/
//    return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int area;
//    float k, p;
//    scanf("%d,%f", &area, &p);
//    if (area > 4 || area < 0) {
//        printf("Error in Area\n");
//    }
//    else {
//        if (area == 0) {
//
//        }
//
//
//    }
//
//    /*********End**********/
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float x;
//	scanf("%f", &x);
//	int m;
//	m = x / 1;
//	printf("%d", m);
//
//
//
//
//	return 0;
//}#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//    /*********Begin*********/
//    int area;
//    float weight, price;
//
//    scanf("%d,%f", &area, &weight);
//
//    if (area < 0 || area > 4) {
//        printf("Error in Area\n");
//        price = 0.0;
//    }
//    else {
//        if (area == 0) {
//
//            price = 10 + (ceil(weight) - 1) * 3;
//        }
//        else if (area == 1) {
//
//            price = 10 + (ceil(weight) - 1) * 4;
//        }
//        else {
//            if (area == 2) {
//                price = 15 + (ceil(weight) - 1) * 5;
//            }
//            else if (area == 3) {
//                price = 15 + (ceil(weight) - 1) * 6.5;
//            }
//            else {
//                price = 15 + (ceil(weight) - 1) * 10;
//            }
//        }
//
//
//
//        printf("Price: %.2f\n", price);
//
//        /*********End**********/
//        return 0;
//    }
// }
//#include <stdio.h>
//    // ¶¨Òåmainº¯Êý
//int main()
//{
//    // ÇëÔÚ´ËÌí¼Ó´úÂë
//    /********** Begin *********/
//    printf("请选择石头（0）、布（1）、剪刀（2）：\n");
//    printf("玩家1：玩家2：");
//    int w1, w2;
//    scanf("%d %d", &w1, &w2);
//    if (w1 == w2) {
//        printf("平局！");
//    }
//    else if (w1 == 2, w2 == 0) {
//        printf("玩家2胜！");
//    }
//    else if (w1 == 1, w2 == 0) {
//        printf("玩家1胜！");
//    }
//    else if (w1 == 0, w2 == 1) {
//        printf("玩家2胜！");
//    }
//    else if (w1 == 0, w2 == 2) {
//        printf("玩家1胜！");
//    }
//
//    else if (w1 == 1, w2 == 2) {
//        printf("玩家2胜！");
//    }
//
//    else if (w1 == 2, w2 == 1) {
//        printf("玩家1胜！");
//    }
//
//
//
//
//    /********** End **********/
//    return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int num, n, y, r;
//    float p;
//    scanf("%d", &num);
//    sacnf("%f", &p);
//    scanf("%d/%d/%d", &n, &y, &r);
//    printf("Enter item number:\n");
//    printf("Enter unit price:\n");
//    printf("Enter purchase date (mm/dd/yy):\n");
//    printf("Item Unit Purchase\n");
//    printf("%-9d$ %-9.2f%02d%02d%02d\n", num, p, n, y, r);
//
//    /*********End**********/
//    return 0;
//}
//int area, y;
//float k, p;
//
//scanf("%d,%f", &area, &k);
//y = round(k) - 1;
//if (area > 4 || area < 0) {
//    printf("Error in Area\n");
//}
//else if (area == 0) {
//    if (k <= 1) {
//        p = 10;
//    }
//    else {
//
//        p = 10 + 3 * y;
//    }
//}
//else if (area == 1) {
//    if (k <= 1) {
//        p = 10;
//    }
//    else {
//
//        p = 10 + 4 * y;
//    }
//}
//else if (area == 2) {
//    if (k <= 1) {
//        p = 15;
//    }
//    else {
//
//        p = 15 + 5 * y;
//    }
//}
//else if (area == 3) {
//    if (k <= 1) {
//        p = 15;
//    }
//    else {
//
//        p = 15 + 6.5 * y;
//    }
//}
//else if (area == 4) {
//    if (k <= 1) {
//        p = 15;
//    }
//    else {
//
//        p = 15 + 10 * y;
//    }
//}
//
//printf("Price: %.2f\n", p);
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//    /*********Begin*********/
//
//    int area;
//    float y, k, p = 0.00;
//
//    scanf("%d,%f", &area, &k);
//    y = round(k) - 1;
//    if (area > 4 || area < 0 || k <= 0) {
//        printf("Error in Area\n");
//    }
//    else if (area == 0) {
//        if (k <= 1) {
//            p = 10;
//        }
//        else {
//
//            p = 10 + 3 * y;
//        }
//    }
//    else if (area == 1) {
//        if (k <= 1) {
//            p = 10;
//        }
//        else {
//
//            p = 10 + 4 * y;
//        }
//    }
//    else if (area == 2) {
//        if (k <= 1) {
//            p = 15;
//        }
//        else {
//
//            p = 15 + 5 * y;
//        }
//    }
//    else if (area == 3) {
//        if (k <= 1) {
//            p = 15;
//        }
//        else {
//
//            p = 15 + 6.5 * y;
//        }
//    }
//    else if (area == 4) {
//        if (k <= 1) {
//            p = 15;
//        }
//        else {
//
//            p = 15 + 10 * y;
//        }
//    }
//
//    printf("Price: %.2f\n", p);
//    /*********End**********/
//    return 0;
//}
//#include<stdio.h>
//int main() {
//	int n, y, r;
//	int x = 0;
//	scanf("%d-%d-%d", &n, &y, &r);
//	char arr[13] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//
//		if (n % 100 == 0) {
//			if (n % 400 == 0) {
//				arr[1] = 29;
//			}
//			else {
//				arr[1] = 28;
//			}
//		}
//		else if (n % 4 == 0 && n % 100 != 0) {
//			arr[1] = 29;
//		}
//		else {
//			arr[1] = 28;
//		}
//	
//	for (int i = 0;i < y;i++) {
//		x += arr[i];
//	}
//	printf("%d", x);
//
//	return 0;
// #include<stdio.h>
//int main() {
//    int arr[100];
//    int i = 0, num = 0;
//    while (scanf(" %d",&arr[i])==1) {
//        i++;
//}
//for (int x = 0;x < i;x++) {
//    for (int a = 0;a < i;a++) {
//        if (arr[x] < arr[i])
//        {
//            num++;
//        }
//        else if (arr[x] > arr[i]) {
//            num++;
//        }
//    }
//}
//printf("%d", num);
//return 0;
//}
//#include<stdio.h>
//int main() {
//    int arr[100];
//    int i = 0, num = 0;
//    while (scanf(" %d", &arr[i]) == 1) {
//        i++;
//    }
//    for (int x = 0;x < i;x++) {
//        for (int a = 0;a < i;a++) {
//            if (arr[x] < arr[i])
//            {
//                num++;
//            }
//            else if (arr[x] > arr[i]) {
//                num++;
//            }
//        }
//    }
//    printf("%d", num);
//    return 0;
//
//#include<stdio.h>
//int main() {
//    int x, n, sum, a, b, c;
//    scanf("%d %d", &x, &n);
//    a = 8 - x;
//    b = (n - a) / 7;
//    c = (n - a) % 7;
//
//    if (a >= 2) {
//        a = a - 2;
//    }
//    if (c = 6) {
//        c = c - 1;
//    }
//    sum = a * 250 + b * 250 * 5 + c * 250;
//    printf("%d", sum);
//
//    return 0;
//}
#include<stdio.h>
int main() {
    int a[1000001];
    int n, x = 0;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        scanf("%d", &a[i]);
        printf(" ");
    }
    for (int i = 0;i < n;i++) {
        for (int j = n - i;j > i;j++) {
            if (a[i] > a[j])
                x++;
        }
    }
    printf("%d", x);

    return 0;
}