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
	printf("�п�J�K�X:");
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
		printf("�п�J�@�Ӧr��:");
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
			    printf("���R��\n");
		}
	}
	else
	    printf("�K�X���~!\n");
	
	system("pause");
	return 0;
} 
