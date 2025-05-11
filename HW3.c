#include<stdio.h>
#include<stdlib.h>
void menu1(int);
void menu2(int);
int main(void)
{
	int i,pwd;
	//char a;
	menu1(1);
	for(i=0;i<=2;i++)
	{
		printf("password:(4 numbers)(default password 2025) ");
		scanf(" %d",&pwd);
		fflush(stdin);
		if(pwd==2025)
		{
			puts("welcome!");
			system("pause");
			menu2(1);
			break;
		}
		if(i==2)
		    puts("Password error 3 times");
	}
	
	system("pause");
	return 0;
}
void menu1(int a)
{
	int i,j;
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
}
void menu2(int a)
{
	system("CLS");
	printf("-----[Booking System]-----\n");
	printf("| a. Available seats     |\n");
	printf("| b. Arrange for you     |\n");
	printf("| c. Choose by yourself  |\n");
	printf("| c. Exit                |\n");
	printf("--------------------------\n");
}
