#include<stdio.h>
#include<stdlib.h>
void menu1(int);

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
