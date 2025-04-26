#include<stdio.h>
#include<stdlib.h>
void menu1(int);

int main(void)
{
	int n=1,i,j,password;//宣告變數 
	char ch;
	menu1(1);
	do
	{
		printf("請輸入密碼:(密碼預設為2025)\n");
	    scanf("%d",&password);
	    if(password==2025)
	        break;
	    n++;
	    if(n==4)
	        printf("已連續密碼錯誤3次\n");
	}while(n<=3);
    
	system("pause");
	return 0;
} 
void menu1(int a)
{
	int i,j;
	for(i=0;i<=20;i++)//用for迴圈製造20行的個人畫面 
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
	//return;
}
