#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void personal_screen(void);
int main(void)
{
	int i,pwd;
	
	personal_screen();
	for(i=0;i<=2;i++)
	{
		printf("輸入密碼:(預設為 2025)");
		scanf(" %d",&pwd);
		fflush(stdin);
		if(pwd==2025)
		{
			
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
