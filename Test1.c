#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
//#define RED 1 //�궨��;����֪�⣬����ά������߳��������Ч��
//const num0 = 99; //��const���α������壬�����ι��ı�����������ֱ�ӱ��޸�
enum   //ö��
{
	YELLOW = 100,
	BLUE,
	BLACK,
	RED

};
int main() //main�ǳ�������
{
	printf("%d\n", YELLOW);
	printf("%d\n", BLUE);
	printf("%d\n", BLACK);
	printf("%d\n", RED);
	//int num = RED;
	//int num1 = 0;
	//int num2 = 0;
	//int desult;
	//printf("��������������:");
	//scanf("%d %d",&num1,&num2);  //&������ ������ַ
	//desult = num1 + num2;
	//printf("������֮��Ϊ��");
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