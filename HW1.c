#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,password;//宣告變數 
	char ch;
	for(i=0;i<=20;i++)//用for迴圈製造20行的個人畫面 
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
	system("pause");
	system("CLS"); // 清除螢幕
	printf("請輸入密碼:");
	scanf("%d",&password);
	if(password==2025)//判斷密碼 
	{
		system("CLS"); // 清除螢幕
		printf("---------------------------\n");//主選單 
		printf("- 'A' ... 'Z' : Uppercase -\n");
		printf("- 'a' ... 'z' : Lowercase -\n");
		printf("- '0' ... '9' : Digit     -\n");
		printf("-  Otherwise  : your name -\n");
		printf("---------------------------\n");
		printf("請輸入一個字元:");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch)//判斷字元 
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
			    printf("陳昱宏\n");
		}
	}
	else
	    printf("密碼錯誤!\n");
	
	system("pause");
	return 0;
} 
//心得:一開始的編譯器設dev C，無法commit，後來在網路找很久， 
// 終於找到如何改變編譯器，在換回notepad，就成功commit， 
//程式很簡單，就是不太會用git，要更加學習。 
