#include<stdio.h>
#include<stdlib.h>
void menu1(int);//個人畫面
void menu2(int);//主選單
void RT(int);//直角三角形
void MT(int);//乘法表
int main(void)
{
	int n=0,i,password;//宣告變數 
	char ch,yn,chRT='a';//ch是主選單，yn是c的是否結束，chRT是直角三角形 
	
	menu1(1);//個人畫面 
	for(i=1;i<=3;i++)
	{
		fflush(stdin);
		printf("請輸入密碼:(密碼預設為2025)\n");
	    scanf("%d",&password);
	    if(password==2025)
	    {
	        while(1)
	        {
			    menu2(1);//主選單
	            while(1)
	            {
	            	fflush(stdin);
	            	printf("請輸入選項(a-c or A-C): \n");
	            	scanf(" %c",&ch);
	            	switch(ch)
	            	{
	            		case 'a':
	            		case 'A':
	            			system("CLS"); // 清除螢幕
	            			while(1)
	        		    	{
	        		    		fflush(stdin);
	        		    		printf("請輸入直角三角形(a-n): \n");
	        		    		scanf(" %c",&chRT);
	        		    		if((int)chRT<'a'||(int)chRT>'n')
	        		    		{
	        		    	        printf("輸入錯誤，請重新輸入\n");
	        		    	    }
	        		    	    else
	        		    	    {
	        		    	    	RT((int)chRT-96);//直角三角形
	        		    	    	system("pause");
	        		    	    	break;
								}
					    	}
					    	break;
					    case 'b':
					    case 'B':
					    	while(1)
					    	{
					    		n=0;
					    		fflush(stdin);
					    		printf("請輸入n*n乘法表(1-9): \n");
					    		scanf("%d",&n);
					    		if(n<1||n>9)
					    		    printf("輸入錯誤，請重新輸入\n");
					    		else
					    		{
					    		    MT(n);//乘法表
					    		    system("pause");
	        		    	    	break;
	        		    	    }
							}
							break;
						case 'c':
						case 'C':
							while(1)
							{
								fflush(stdin);
								printf("Continue? (y/n)\n");
								scanf(" %c",&yn);
								if(yn=='y'||yn=='Y'||yn=='n'||yn=='N')
								    break;
								else
								    printf("輸入錯誤，請重新輸入\n");
							}
							break;
					    default:
					    	printf("輸入錯誤，請重新輸入\n");
				    }
				    if((ch>='a'&&ch<='c')||(ch>='A'&&ch<='C'))    
					    break;
			    }
			    if(yn=='y'||yn=='Y')
			        break;
			}
	        break;
    	}
	    if(i==3)
	        printf("已連續密碼錯誤3次\n");
	}
    
	system("pause");
	return 0;
} 
void menu1(int a)//個人畫面 
{
	int i,j;
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
}
void menu2(int a)//主選單 
{
	system("CLS"); // 清除螢幕
	printf("---------------------\n");
	printf("| a. 畫出直角三角形 |\n");
	printf("| b. 顯示乘法表     |\n");
	printf("| c. 結束           |\n");
	printf("---------------------\n");
}
void RT(int a)//直角三角形 (a是大小) 
{
	int i=0,j=0,k=0;
	char str[]="abcdefghijklmn";
	printf("\n");
	for(i=1;i<=a;i++)
	{
		for(j=a;j>i;j--)
		    printf(" ");
		for(k=1;k<=i;k++)
		    printf("%c",str[a-i+k-1]);
		printf("\n");
	}
}
void MT(int a)//乘法表 (a是大小) 
{
	int i,j;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		    printf("%d*%d=%2d ",i,j,i*j);
		printf("\n");
	}
}
