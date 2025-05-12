#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 10
void start(void);  // Initialize the seat chart
void menu1(void);  // Display with personal style
void menu2(void);  // Display the main menu of the booking system
void show(void);  // Display the current seating chart
void suggest(int);  // Suggest recommended seats on the number needed
void okseats(void);  // Change suggested seats to confirmed seats
void copy(char dest[ROW][COL],char src[ROW][COL]);  // Copy matrix

char seats[ROW][COL];
char temp[ROW][COL];
int main(void)
{
	int i,j,k,n=0,x,y,pwd;
	char ch,satisfy,mark,exit;
	
	start();
	menu1();
	for(i=0;i<=2;i++)
	{
		printf("password:(4 numbers)(default password 2025) ");
		scanf(" %d",&pwd);
		fflush(stdin);
		if(pwd==2025)  // Check if the password is correct
		{
			puts("welcome!");
			system("pause");
			while(exit!='y')
			{
				menu2();
				printf("choose: ");
				scanf(" %c",&ch);
				fflush(stdin);
				switch(ch)
				{
					case 'a':  // Show available seats
				        show();
				        system("pause");
						break;
					case 'b':  // Suggest seats
						while(1)
						{
							puts("How many seats are needed?(<=4)");
							scanf(" %d",&n);
						    fflush(stdin);
						    if(n>=1&&n<=4)
						        break;
						    else
						        puts("Input error");
						}
						copy(temp,seats);  // Copy current seats to temporary array
						suggest(n);  // Suggest seats
						show();  // Show the suggested seats
						while(1)
						{
							printf("Are you satisfied?(y/n) ");
		   		            scanf(" %c",&satisfy);
		   		            fflush(stdin);
							if(satisfy=='y')
							{
								okseats();  // Confirm the suggested seats
								break;
							}
		   		            if(satisfy=='n')
		   		            {
		   		            	copy(seats,temp);  // Revert back to the original seat chart
		   		            	break;
							}
							puts("Input error");
						}
						break;
					case 'c':  // Allow user to choose seats manually
						while(1)
						{
							printf("choose seat or '0' to exit:(row-col) ");
							x=getche();
							if(x=='0')
							{
								printf("\n");
								break;
							}
							    
							mark=getche();
							y=getche();
							if(seats[(int)x-49][(int)y-49]=='-'&&mark=='-')
							    seats[(int)x-49][(int)y-49]='@';
							else
							{
								printf("\nInput error or Duplicate seats\n");
							}
							printf("\n");
						}
						show();  // Show the updated seating chart
						system("pause");
						okseats();  // Confirm the selected seats
						break;
					case 'd':  // Exit option
						while(1)
						{
							printf("Continue? (y/n)");
							exit=getche();
							printf("\n");
							if(exit=='y'||exit=='n')
							    break;
							else
							    puts("Input error");
						}
						break;
					default:
					    puts("Input error");
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
void start(void)  // Initialize the seat chart
{
	int i=0,j,k=0;
	for(i=ROW-1;i>=0;i--)
    	for(j=0;j<COL-1;j++)
	        seats[i][j]='-';
	srand(time(NULL));  // Initialize the random seed using the current time
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
void menu1(void)  // Display with personal style
{
	int i,j;
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
}
void menu2(void)  // Display the main menu of the booking system
{
	system("CLS");
	printf("-----[Booking System]-----\n");
	printf("| a. Available seats     |\n");
	printf("| b. Arrange for you     |\n");
	printf("| c. Choose by yourself  |\n");
	printf("| d. Exit                |\n");
	printf("--------------------------\n");
}
void show(void)  // Display the current seating chart
{
	int i,j;
	printf("\\123456789\n");
	for(i=ROW-1;i>=0;i--)
	{
		printf("%d",i+1);
    	for(j=0;j<COL-1;j++)
			printf("%c",seats[i][j]);
		printf("\n");
	}
}
void suggest(int n)  // Suggest recommended seats on the number needed
{
	int i,j,k,x,y,row;
	srand(time(NULL));  // Initialize the random seed using the current time
	while(1)
	{
		i=rand()%ROW;  // Find consecutive seats
    	j=rand()%(COL-n);
    	for(k=0;k<n;k++)
    	    if(seats[i][j+k]!='-')
    	    {
    	    	break;
			}
		if(k==n)
		    break;
		if(n==4)  // Find two adjacent seats in both the front and back rows
		{
			x=rand()%(ROW-1);
    	    y=rand()%(COL-2);
    	    if(seats[i][j]=='-'&&seats[i][j]!='*'&&
		        seats[i][j+1]=='-'&&seats[i][j+1]!='*'&&
	    	    seats[i+1][j]=='-'&&seats[i+1][j]!='*'&&
	    		seats[i+1][j+1]=='-'&&seats[i+1][j+1]!='*')
		    {
			    seats[i][j]=seats[i][j+1]=seats[i+1][j]=seats[i+1][j+1]='@';
		    	row=0;
		    	break;
			}
		}
	}
	if(row!=0)
		for(k=0;k<n;k++)
		    seats[i][j+k]='@';
}
void okseats(void)  // Change suggested seats to confirmed seats
{
	int i,j;
	for(i=ROW-1;i>=0;i--)
	    for(j=0;j<COL-1;j++)
	        if(seats[i][j]=='@')
	            seats[i][j]='*';
	    
}
void copy(char dest[ROW][COL],char src[ROW][COL])  // Copy matrix
{
	int i,j;
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
            dest[i][j]=src[i][j];
}
