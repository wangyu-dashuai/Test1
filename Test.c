#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

//int factor(int n){   //封装    
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result *= i;  //计算n的阶乘
//	}
//	return result;
//}

int main(){

	//计算1!+2!+3!``+10！
	//int n = 10;
	//int sum = 0;
	//for (int i = 1; i <= 10; i++){
	//	sum = sum + factor(i);
	//}
	//printf("以上阶乘和为%d\n",sum);


	//编写代码 演示字符从两端移动，向中间汇聚
	//char str1[] = "Welcome my heart!";
	//char str2[] = "#################";
	//int left = 0;
	//int right = strlen(str1) - 1;
	//printf("%s\n", str2);
	//while (left <= right){
	//	Sleep(500);
	////	system("cls");
	//	//打印之前  先改变str2的内容
	//	str2[left] = str1[left];
	//	str2[right] = str1[right];
	//	printf("%s\n", str2);
	//	left++;
	//	right--;
	//}

	//模拟用户登录情景，并且只能登陆三次
	//for (int i = 1; i <= 3; i++){
	//	char input[20] = { 0 };
	//	char password[] = "888888";
	//	printf("尊贵的用户，请输入您的密码:");
	//	scanf("%s", input);
	//	if (strcmp(input, password) == 0){
	//		printf("登录成功！\n");
	//		break;
	//	}
	//	else{
	//		printf("密码错误！\n");
	//		continue;
	//	}
	//}

	//int i,a[10];
	//int max = a[i];
	//printf("请输入十个数:");
	//for (i = 0; i < 10; i++){
	//	scanf("%d",&a[i]);
	//}

	//for (i = 0; i < 10; i++){
	//	if (a[i] > max) max = a[i];
	//}
	//printf("max=%d\n",max);


	//找出100 ~ 200之间的素数
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++){
		int j = 0;
		for (j = 2; j <= i; j++){
			if (i%j == 0)
				break;
			
		}
		if (j == i){
			count++;
			printf("%d ",i);
		}
	}
	printf("\ncount=%d\n",count);
	system("pause");
	return 0;
}