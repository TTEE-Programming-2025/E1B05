#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 10
void start(void);
void menu1(void);
void menu2(void);
void Arrange(int);
void show(void);
void suggest(int);
void copy(char dest[ROW][COL],char src[ROW][COL]);
void oksuggest(void);

char seats[ROW][COL];
char temp[ROW][COL];
int main(void)
{
	int i,j,k,n=0,pwd;
	char ch,yn;
	
	start();
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
						do
						{
							puts("How many seats are needed?(<=4)");
							scanf(" %d",&n);
						    fflush(stdin);
						}while(n<1||n>4);
						//while(1)
						//{
							copy(temp,seats);
							suggest(n);
							show();
							printf("satisfy?(y/n) ");
		   		            scanf(" %c",&yn);
		   		            fflush(stdin);
							if(yn=='y')
							    oksuggest();
		   		            else
		   		                copy(seats,temp);
						//}
						
						//Arrange(n);
						//show();
						//printf("satisfy?(y/n) ")
						//scanf(" %c",&yn);
						//fflush(stdin);
						//yn=='y'?seats=''
					    break;
					default:
					    puts("error");
					    system("pause");
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
void start(void)
{
	int i=0,j,k=0;
	for(i=ROW-1;i>=0;i--)
    	for(j=0;j<COL;j++)
	        seats[i][j]='-';
	srand(time(NULL));
	while(k<10)
	{
		i=rand()%9;
		j=rand()%9;
		if(seats[i][j]!='*')
	    {
	    	seats[i][j]='*';
	    	k++;
		}
    }
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
	int i,j;
	printf("\\123456789\n");
	for(i=ROW-1;i>=0;i--)
	{
		printf("%d",i+1);
    	for(j=0;j<COL;j++)
			printf("%c",seats[i][j]);
		printf("\n");
	}
}
void suggest(int n)
{
	int i,j,k,x,y,row;
	srand(time(NULL));
	while(1)
	{
		//row=0;
		i=rand()%ROW;
    	j=rand()%(COL-n);
    	printf("ด๚ธี%d %d\n",i,j);
    	for(k=0;k<n;k++)
    	    if(seats[i][j+k]!='-')
    	    {
    	    	break;
			}
		printf("%d",row);
		if(k==n)
		    break;
		if(n==4)
		{
			x=rand()%(ROW-1);
    	    y=rand()%(COL-2);
    	    printf("ด๚ธี%d %d\n",i,j);
    	    if(seats[i][j]=='-'&&seats[i][j]!='*'&&
		        seats[i][j+1]=='-'&&seats[i][j+1]!='*'&&
	    	    seats[i+1][j]=='-'&&seats[i+1][j]!='*'&&
	    		seats[i+1][j+1]=='-'&&seats[i+1][j+1]!='*')
		    {
			seats[i][j]=seats[i][j+1]=
			    seats[i+1][j]=seats[i+1][j+1]='@';
		    	row=0;
		    	break;
			}
		}
	}
	if(row!=0)
		for(k=0;k<n;k++)
		    seats[i][j+k]='@';
}
void oksuggest(void)
{
	int i,j;
	for(i=ROW-1;i>=0;i--)
	    for(j=0;j<COL;j++)
	        if(seats[i][j]=='@')
	            seats[i][j]='*';
	    
}

void Arrange(int n)
{
	int i=0,j=0,k=0,x=0,y=0,z=0,row;
	char yn,b[3][2];
	srand(time(NULL));
	while(1)
	{
		j=rand()%9;
    	k=rand()%9;
    	printf("ด๚ธี%d %d\n",j,k);
    	//show();
    	for(i=0;i<n;i++)
    	{
	        temp[j][k+i]=seats[j][k+i];
	    	if(seats[j][k+i]!='*'&&seats[j][k+i]!='\0')
	           seats[j][k+i]='@';
	        else
	        {
	        	for(x=0;x<=i;x++)
	                seats[j][k+x]=temp[j][k+x];
	            break;
			}
        }
        if(seats[k+n-1][j]=='@')
        {
           	row=1;
            break;
        }
        for(i=0;i<2&&n==4&&j!=8;i++)
        {
			for(x=0;x<2;x++)
			{	
				b[x][i]=seats[j+x][k+i];
			    if(seats[j+x][k+i]!='*'&&seats[j+x][k+i]!='\0')
		        {
		        	seats[j+x][k+i]='@';
			    }
			    else
			    {
			    	for(y=0;y<x;y++)
                      	seats[j+y][k]=b[y][0];
					if(i==1)
	                    seats[j][k+1]=b[0][1];
	                break;
			    }
			}
			if(seats[j+i][k+x-1]=='*'||seats[j+i][k+x-1]=='\0')
				break;
	    }
	    if(seats[j+1][k+1]=='@')
		{
			row=0;
			break;
		}
	    //if(seats[j][k+n-1]=='@'||seats[j+1][k+1]=='@')
	    //    break;
    }
                       printf("\n");
	    	show();
		   	while(1)
		   	{
		   		printf("satisfy?(y/n) ");
		   		scanf(" %c",&yn);
		   		fflush(stdin);
		   		if(yn=='y')
		   		{
		   			if(row==1)
		    		    for(i=0;i<n;i++)
		    	            seats[j][k+i]='*';
		    	    if(row==0)
		    	        for(i=0;i<2;i++)
		    	        	for(x=0;x<2;x++)
				                seats[j+i][k+x]='*';   
				}
		    	if(yn=='n')
		    	{
		    		if(row==1)
		    		    for(i=0;i<n;i++)
		    	            seats[k+i][j]='-';
		    	    if(row==0)
		    	        for(i=0;i<2;i++)
		    	        	for(x=0;x<2;x++)
				                seats[k+x][j+i]='-';
				}
				    
		    	if(yn=='y'||yn=='n')
		    	    break;
	    		else
	    		    puts("error");
			}
}
void copy(char dest[ROW][COL],char src[ROW][COL])
{
	int i,j;
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
            dest[i][j]=src[i][j];
}
