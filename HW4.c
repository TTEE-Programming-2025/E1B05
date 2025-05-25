#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void personal_screen(void);
void menu(void);
void option_a(void);
void option_b(void);
void option_c(void);
void option_d(void);

int n=0;
struct man
{
    char name[9];
    char ID[7];
    int math;
    int physics;
    int english;
    float avg;
};
struct man student[10],temp,rank[10];
int main(void)
{
	int i,pwd;
	char option,exit;
	
	personal_screen();
	for(i=0;i<=2;i++)
	{
		printf("��J�K�X:(�w�]�� 2025)");
		scanf(" %d",&pwd);
		fflush(stdin);
		if(pwd==2025)
		{
			puts("�w��!!!");
			system("pause");
			while(exit!='y')
			{
				menu();
				printf("�ﶵ:");
				scanf(" %c",&option);
				fflush(stdin);
				switch(option)
				{
					case 'a':
						option_a();
						break;
					case 'b':
						option_b();
						break;
					case 'c':
						option_c();
						break;
					case 'd':
						option_d();
						break;
					case 'e':
						do
						{
							printf("�T�w���}�H (y/n)  ");
							scanf(" %c",&exit);
							fflush(stdin);
						}while(exit!='y'&&exit!='n');
						break;
					default:
						printf("��J���~!\n");
				}
			}
			break;
		}
		if(i==2)
		    printf("�K�X�s���3��!\n");
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
	int i,j,ok;
	system("CLS");
	do
	{
		printf("��Jn��ǥ�:(5-10) ");
		scanf(" %d",&n);
		fflush(stdin);
		if(n<5||n>10)
		    printf("��J���~\n");
	}while(n<0);//<5||n>10);
	for(i=0;i<n;i++)
	{
		printf("��J��%d��ǥͩm�W: ",i+1);
		scanf(" %s",student[i].name);
	    do
	    {
	    	printf("��J��%d��ǥ;Ǹ�:(6����) ",i+1);
	    	scanf(" %s",student[i].ID);
	    	for(j=0;j<=5;j++)
	    	{
	    		ok=0;
		        if(student[i].ID[j]<'0'||student[i].ID[j]>'9')
		        {
		    	    printf("��J���~\n");
		    	    break;
			    }
			    else
			        ok=1;
			}
		}while(strlen(student[i].ID)!=6||ok==0);
		do
		{
			printf("��J��%d��ǥͼƾǦ��Z: ",i+1);
			scanf(" %d",&student[i].math);
			if(student[i].math<0||student[i].math>100)
		        printf("��J���~\n");
		}while(student[i].math<0||student[i].math>100);
		do
		{
			printf("��J��%d��ǥͪ��z���Z: ",i+1);
			scanf(" %d",&student[i].physics);
			if(student[i].physics<0||student[i].physics>100)
		        printf("��J���~\n");
		}while(student[i].physics<0||student[i].physics>100);
		do
		{
			printf("��J��%d��ǥͭ^�妨�Z: ",i+1);
			scanf(" %d",&student[i].english);
			if(student[i].english<0||student[i].english>100)
		        printf("��J���~\n");
		}while(student[i].english<0||student[i].english>100);
		puts("\n");
	}
}
void option_b(void)
{
	int i,j;
	float avg;
	system("CLS");
	if(n==0)
	   	printf("�٥���J�ǥ�!\n");
	else
		printf("�m�@�W   �ǡ@��   �ƾ�   ���z   �^��   ������\n");
	for(i=0;i<n;i++)
	{
		student[i].avg=(float)(student[i].math+student[i].physics+student[i].english)/3;
		printf("%6s   %s%6d%7d%7d%9.1f\n",student[i].name,student[i].ID,student[i].math,student[i].physics,student[i].english,student[i].avg);
	}
	system("pause");
}
void option_c(void)
{
	int i,j,ok;
	system("CLS");
	if(n==0)
	   	printf("�٥���J�ǥ�!\n");
	else
	{
		printf("��J���d�߾ǥͩm�W: ");
		scanf(" %s",temp.name);
		for(i=0;i<n;i++)
		{
			ok=1;
			if(strcmp(temp.name,student[i].name)==0)
			{
				j=i;
				break;
			}
			else
			    ok=0;
		}
		if(ok==0)
		    printf("��Ƥ��s�b\n");
		else
		{
			printf("�m�@�W   �ǡ@��   �ƾ�   ���z   �^��   ������\n");
			printf("%6s   %s%6d%7d%7d%9.1f\n",student[j].name,student[j].ID,student[j].math,student[j].physics,student[j].english,student[j].avg);
		}
	}
	system("pause");
}
void option_d(void)
{
	int i;
	system("CLS");
	if(n==0)
	   	printf("�٥���J�ǥ�!\n");
	else
	{
		for(i=0;i<n;i++)
		    rank[i]=student[i];
		for(i=0;i<n-1;i++)
		{
			if(rank[i].avg<rank[i+1].avg)
			{
				temp=rank[i];
				rank[i]=rank[i+1];
				rank[i+1]=temp;
			}
		}
		printf("�m�@�W   �ǡ@��   �ƾ�   ���z   �^��   ������\n");
		for(i=0;i<n;i++)
		    printf("%6s   %s%6d%7d%7d%9.1f\n",rank[i].name,rank[i].ID,rank[i].math,rank[i].physics,rank[i].english,rank[i].avg);
	}
	system("pause");
}
