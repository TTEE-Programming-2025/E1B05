#include<stdio.h>
#include<stdlib.h>
void menu1(int);
void menu2(int);

int main(void)
{
	int n=1,i,j,password;//�ŧi�ܼ� 
	char ch;
	menu1(1);
	do
	{
		printf("�п�J�K�X:(�K�X�w�]��2025)\n");
	    scanf("%d",&password);
	    if(password==2025)
	        menu2(1);
	        break;
	    n++;
	    if(n==4)
	        printf("�w�s��K�X���~3��\n");
	}while(n<=3);
    
	system("pause");
	return 0;
} 
void menu1(int a)
{
	int i,j;
	for(i=0;i<=20;i++)//��for�j��s�y20�檺�ӤH�e�� 
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
	//return;
}
void menu2(int a)
{
	system("CLS"); // �M���ù�
	printf("---------------------\n");//�D��� 
	printf("| a. �e�X�����T���� |\n");
	printf("| b. ��ܭ��k��     |\n");
	printf("| c. ����           |\n");
	printf("---------------------\n");
}
