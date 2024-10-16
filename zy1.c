#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int x, y;
//	printf("请输入x:");
//	scanf("%d", &x);
//	if (x < 1) {
//		y = x;
//	}
//	if (1 <= x < 10) {
//		y = 2 * x - 1;
//	}
//	if (x >= 10) {
//		y = 3 * x + 11;
//	}
//	printf("函数值y:");
//	printf("%d", y);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("输入三个整数:");
//	int a, b, c;
//	int min = 0;
//
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a > b) {
//		a = b;
//		min = a;
//	}
//	else {
//		min = a;
//	}
//	if (a > c) {
//		a = c;
//		min = a;
//	}
//	else {
//		min = a;
//	}
//	printf("最小值：");
//	printf("%d", min);
//
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//
//	int sum = 0;
//	for (int i = 0;i <= 1000;i++) {
//		if (i%3 ==0) {
//			sum += i;
//
//		}
//
//
//
//	}
//
//	printf("%d", sum);
//
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	printf("输入20个整数：");
//	int x;
//	double aver1, aver2;
//	int sum1 = 0,  sum2 = 0;
//	int A = 0, B = 0, C = 0;
//	for (int i = 0;i < 20;i++) {
//		scanf("%d", &x);
//		if (x > 0) {
//			if (x = 0) {
//				B += 1;
//			}
//			else {
//				A += 1;
//				sum1 += x;
//			}
//	   }
//		else {
//			C += 1;
//			sum2 += x;
//		}
//
//	}
//	aver1 = sum1 / A;
//	aver2 = sum2 / C;
//	printf("正整数个数：");
//	printf("%d", A);"endl";
//	printf("负整数个数：");
//	printf("%d", C);"endl";
//	printf("零的个数：");
//	printf("%d", B);"endl";
//	printf("正整数之和：");
//	printf("%d", sum1);"endl";
//	printf("负整数之和：");
//	printf("%d", sum2);"endl";
//	printf("正整数平均值：");
//	printf("%f", aver1);"endl";
//	printf("负整数平均值：");
//	printf("%f", aver2);"endl";
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int min = 100000000000;
//	int max = 0;
//	int MAX = -1000000000;
//	int MIN = 0;
//	int x;
//	for (int a = 1;a <= 20;a++)
//	{
//
//		scanf("%d", &x);
//		if (x > 0) {
//
//			if (x > max) {
//
//				max = x;
//			}
//			if (min > x) {
//				min = x;
//			}
//
//		}
//		if (x < 0) {
//			if (x > MAX) {
//				MAX = x;
//
//			}
//			if (x < MIN) {
//
//				MIN = x;
//			}
//
//
//		}
//
//	}
//	printf("%d,%d,%d,%d", min, min, MAX, MIN);
//
//	return 0;
//}