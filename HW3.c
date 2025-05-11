#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu1(void);
void menu2(void);
void Arrange(int);
void show(void);
char seats[9][10];
int main(void)
{
	int i,j,k,n=0,pwd;
	char ch;
	
	for(j=8;j>=0;j--)
	    for(k=0;k<=8;k++)
	        seats[j][k]='-';
	menu1();
	//srand(time(NULL));
	//printf("%d",rand()%9);
	//printf("%d",rand()%9);
	for(i=0;i<=2;i++)
	{
		printf("password:(4 numbers)(default password 2025) ");
		scanf(" %d",&pwd);
		fflush(stdin);
		if(pwd==2025)
		{
			puts("welcome!");
			system("pause");
			Arrange(10);
			//seats[0][0]='@';
			while(1)
			{
				menu2();
				printf("choose: ");
				scanf(" %c",&ch);
				fflush(stdin);
				switch(ch)
				{
					case 'a':
				        show();
				        system("pause");
						break;
					case 'b':
						puts("How many seats are needed?");
						scanf(" %d",&n);
						fflush(stdin);
						Arrange(n);
						
					    break;
				}
				
			}
			break;
		}
		if(i==2)
		    puts("Password error 3 times");
	}
	
	system("pause");
	return 0;
}
void menu1(void)
{
	int i,j;
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
}
void menu2()
{
	system("CLS");
	printf("-----[Booking System]-----\n");
	printf("| a. Available seats     |\n");
	printf("| b. Arrange for you     |\n");
	printf("| c. Choose by yourself  |\n");
	printf("| c. Exit                |\n");
	printf("--------------------------\n");
}
void show(void)
{
	int j,k;
	printf("\\123456789\n");
	for(j=8;j>=0;j--)
	{
		printf("%d",j+1);
    	for(k=0;k<=8;k++)
			printf("%c",seats[j][k]);
		printf("\n");
	}
}
void Arrange(int n)
{
	int i=0,j=0,k=0;
	srand(time(NULL));
	while(i<n)
	{
		j=rand()%9;
		k=rand()%9;
		if(n==10&&seats[j][k]!='*')
	    {
	    	seats[j][k]='*';
	    	i++;
		}
		if(seats[j][k]!='*')
		    if(seats[j][k]!='@')
		    {
		    	seats[j][k]='@';
		    	break;
		    }
	}   
}
