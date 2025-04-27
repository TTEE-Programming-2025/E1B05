#include<stdio.h>
#include<stdlib.h>
void menu1(int);
void menu2(int);
void RT(int);
void MT(int);
int main(void)
{
	int n=0,i=1,a=0,password;//宣告變數 
	char ch,chRT='a';
	
	menu1(1);
	for(i=1;i<=3;i++)
	{
		printf("請輸入密碼:(密碼預設為2025)\n");
	    scanf("%d",&password);
	    if(password==2025)
	    {
		
	        while(1)
	        {
			    menu2(1);
	            while(1)
	            {
	            	printf("請輸入:(a-c or A-C)\n");
	            	scanf(" %c",&ch);
	            	switch(ch)
	            	{
	            		case 'a':
	            		case 'A':
	            			system("CLS"); // 清除螢幕
	            			while(1)
	        		    	{
	        		    		//system("CLS"); // 清除螢幕
	        		    		printf("請輸入a-n:\n");
	        		    		scanf(" %c",&chRT);
	        		    		//chRT=getch();
	        		    		if((int)chRT<'a'||(int)chRT>'n')
	        		    		{
	        		    	        printf("輸入錯誤，請重新輸入\n");
	        		    	    }
	        		    	    else
	        		    	    {
	        		    	    	RT((int)chRT-96);
	        		    	    	system("pause");
	        		    	    	break;
								}
					    	}
					    	break;
					    case 'b':
					    case 'B':
					    	while(1)
					    	{
					    		printf("請輸入n:(1-9)\n");
					    		scanf(" %d",&n);
					    		if(n<1||n>9)
					    		    printf("輸入錯誤，請重新輸入\n");
					    		else
					    		{
					    		    MT(n);
					    		    system("pause");
	        		    	    	break;
	        		    	    }
							}
					    default:
					    	printf("輸入錯誤，請重新輸入\n");
				    }
				    //if((ch<'a'&&ch>'C')||ch>'c'||ch<'A')
				    //    printf("輸入錯誤，請重新輸入\n");
				    //else
				    if((ch>='a'&&ch<='c')||(ch>='A'&&ch<='C'))    
					    break;
			    }
			}//while((ch<'a'&&ch>'C')||ch>'c'||ch<'A');
	        break;
    	}
	    if(i==3)
	        printf("已連續密碼錯誤3次\n");
	}
    
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
}
void menu2(int a)
{
	system("CLS"); // 清除螢幕
	printf("---------------------\n");//主選單 
	printf("| a. 畫出直角三角形 |\n");
	printf("| b. 顯示乘法表     |\n");
	printf("| c. 結束           |\n");
	printf("---------------------\n");
}
void RT(int a)
{
	int i=0,j=0,k=0;
	char str[]="abcdefghijklmn";
	for(i=1;i<=a;i++)
	{
		for(j=a;j>i;j--)
		    printf(" ");
		for(k=1;k<=i;k++)
		    printf("%c",str[a-i+k-1]);
		printf("\n");
	}
}
void MT(int a)
{
	int i,j;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		    printf("%d*%d=%2d ",i,j,i*j);
		printf("\n");
	}
}
