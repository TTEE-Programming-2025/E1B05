#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void personal_screen(void);
void menu(void);
void option_a(void);

struct man
    {
	    char name[9];
	    char ID[7];
	    int math;
	    int physics;
	    int english;
    };
int main(void)
{
	int i,pwd;
	char option;
	
	personal_screen();
	for(i=0;i<=2;i++)
	{
		printf("輸入密碼:(預設為 2025)");
		scanf(" %d",&pwd);
		fflush(stdin);
		if(pwd==2025)
		{
			puts("歡迎!!!");
			system("pause");
			menu();
			printf("選項:");
			scanf(" %c",&option);
			fflush(stdin);
			switch(option)
			{
				case 'a':
					option_a();
					break;
			}
			break;
		}
		if(i==2)
		    printf("密碼連續錯3次!\n");
	}
	system("pause");
	return 0;
}
void personal_screen(void)
{
	int i,j,k,x;
	for(i=0;i<=15;i++)
	{
		for(k=15;k>=i;k--)
		    printf("* ");
		for(j=0;j<=i*2;j++)
		    printf("-");
		for(x=0;x<=5;x++)
		    printf("hi hello ");
		printf("\n");
	}
	puts("     +  +   ");
	puts("     |o o|_ ");
	puts("     |   _| ");
	puts("     /   |  ");
	puts(" .  /    !  ");
	puts("  \\/ |x |x  ");
}
void menu(void)
{
	system("CLS");
	printf("----------[Grade System]----------\n");
	printf("| a. Enter student grades        |\n");
	printf("| b. Display student grades      |\n");
	printf("| c. Search for student grades   |\n");
	printf("| d. Grade ranking               |\n");
	printf("| e. Exit system                 |\n");
	printf("----------------------------------\n");
}
void option_a(void)
{
	int i,j,n,ok;
	system("CLS");
	do
	{
		printf("輸入n:(5-10)");
		scanf(" %d",&n);
		fflush(stdin);
		if(n<5||n>10)
		    printf("輸入錯誤\n");
	}while(n<5||n>10);
	struct man student[n];
	for(i=0;i<n;i++)
	{
		printf("輸入第%d位學生姓名:",i+1);
		scanf(" %s",student[i].name);
	    do
	    {
	    	printf("輸入第%d位學生學號:(6位整數)",i+1);
	    	scanf(" %s",student[i].ID);
	    	for(j=0;j<=5;j++)
	    	{
	    		ok=0;
		        if(student[i].ID[j]<'0'||student[i].ID[j]>'9')
		        {
		    	    printf("輸入錯誤\n");
		    	    break;
			    }
			    else
			        ok=1;
			}
		}while(strlen(student[i].ID)!=6||ok==0);
		do
		{
			printf("輸入第%d位學生數學成績:",i+1);
			scanf(" %d",&student[i].math);
			if(student[i].math<0||student[i].math>100)
		        printf("輸入錯誤\n");
		}while(student[i].math<0||student[i].math>100);
		do
		{
			printf("輸入第%d位學生物理成績:",i+1);
			scanf(" %d",&student[i].physics);
			if(student[i].physics<0||student[i].physics>100)
		        printf("輸入錯誤\n");
		}while(student[i].physics<0||student[i].physics>100);
		do
		{
			printf("輸入第%d位學生英文成績:",i+1);
			scanf(" %d",&student[i].english);
			if(student[i].english<0||student[i].english>100)
		        printf("輸入錯誤\n");
		}while(student[i].english<0||student[i].english>100);
		puts("\n");
	}
}
