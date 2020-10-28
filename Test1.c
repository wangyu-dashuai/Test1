#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
//#define RED 1 //宏定义;见名知意，便于维护，提高程序的运行效率
//const num0 = 99; //用const修饰变量定义，被修饰过的变量，不可以直接被修改
enum   //枚举
{
	YELLOW = 100,
	BLUE,
	BLACK,
	RED

};
int main() //main是程序的入口
{
	printf("%d\n", YELLOW);
	printf("%d\n", BLUE);
	printf("%d\n", BLACK);
	printf("%d\n", RED);
	//int num = RED;
	//int num1 = 0;
	//int num2 = 0;
	//int desult;
	//printf("请输入两个数据:");
	//scanf("%d %d",&num1,&num2);  //&变量名 变量地址
	//desult = num1 + num2;
	//printf("两个数之和为：");
	//printf("%d+%d=%d\n", num1, num2, desult);
	//printf("num1=%d,num2=%d\n",num1,num2);
	
	//printf("Hello Wrold!\n");
	//printf("char:%d\n", sizeof(char));
	//printf("short:%d\n", sizeof(short));
	//printf("int:%d\n", sizeof(int));
	//printf("long:%d\n", sizeof(long));
	system("pause");
	return 0;
	
}