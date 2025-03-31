#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,password;
	char ch;
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
	system("pause");
	system("CLS");
	printf("請輸入密碼:");
	scanf("%d",&password);
	if(password==2025)
	{
		system("CLS");
		printf("---------------------------\n");
		printf("- 'A' ... 'Z' : Uppercase -\n");
		printf("- 'a' ... 'z' : Lowercase -\n");
		printf("- '0' ... '9' : Digit     -\n");
		printf("-  Otherwise  : your name -\n");
		printf("---------------------------\n");
		printf("請輸入一個字元:");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'A' ... 'Z':
				printf("Uppercase\n");
				break;
			case 'a' ... 'z':
				printf("Lowercase\n");
				break;
			case '0' ... '9':
				printf("Digit\n");
				break;
			default: 
			    printf("陳昱宏\n");
		}
	}
	else
	    printf("密碼錯誤!\n");
	
	system("pause");
	return 0;
} 
