#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

//int factor(int n){   //��װ    
//	int result = 1;
//	for (int i = 1; i <= n; i++){
//		result *= i;  //����n�Ľ׳�
//	}
//	return result;
//}

int main(){

	//����1!+2!+3!``+10��
	//int n = 10;
	//int sum = 0;
	//for (int i = 1; i <= 10; i++){
	//	sum = sum + factor(i);
	//}
	//printf("���Ͻ׳˺�Ϊ%d\n",sum);


	//��д���� ��ʾ�ַ��������ƶ������м���
	//char str1[] = "Welcome my heart!";
	//char str2[] = "#################";
	//int left = 0;
	//int right = strlen(str1) - 1;
	//printf("%s\n", str2);
	//while (left <= right){
	//	Sleep(500);
	////	system("cls");
	//	//��ӡ֮ǰ  �ȸı�str2������
	//	str2[left] = str1[left];
	//	str2[right] = str1[right];
	//	printf("%s\n", str2);
	//	left++;
	//	right--;
	//}

	//ģ���û���¼�龰������ֻ�ܵ�½����
	//for (int i = 1; i <= 3; i++){
	//	char input[20] = { 0 };
	//	char password[] = "888888";
	//	printf("�����û�����������������:");
	//	scanf("%s", input);
	//	if (strcmp(input, password) == 0){
	//		printf("��¼�ɹ���\n");
	//		break;
	//	}
	//	else{
	//		printf("�������\n");
	//		continue;
	//	}
	//}

	//int i,a[10];
	//int max = a[i];
	//printf("������ʮ����:");
	//for (i = 0; i < 10; i++){
	//	scanf("%d",&a[i]);
	//}

	//for (i = 0; i < 10; i++){
	//	if (a[i] > max) max = a[i];
	//}
	//printf("max=%d\n",max);


	//�ҳ�100 ~ 200֮�������
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