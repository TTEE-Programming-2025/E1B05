#include<stdio.h>
#include<stdlib.h>
void menu1(int);
void menu2(int);
void RT(int);
void MT(int);
int main(void)
{
	int n=0,i=1,a=0,password;//�ŧi�ܼ� 
	char ch,chRT='a';
	
	menu1(1);
	for(i=1;i<=3;i++)
	{
		printf("�п�J�K�X:(�K�X�w�]��2025)\n");
	    scanf("%d",&password);
	    if(password==2025)
	    {
		
	        while(1)
	        {
			    menu2(1);
	            while(1)
	            {
	            	printf("�п�J:(a-c or A-C)\n");
	            	scanf(" %c",&ch);
	            	switch(ch)
	            	{
	            		case 'a':
	            		case 'A':
	            			system("CLS"); // �M���ù�
	            			while(1)
	        		    	{
	        		    		//system("CLS"); // �M���ù�
	        		    		printf("�п�Ja-n:\n");
	        		    		scanf(" %c",&chRT);
	        		    		//chRT=getch();
	        		    		if((int)chRT<'a'||(int)chRT>'n')
	        		    		{
	        		    	        printf("��J���~�A�Э��s��J\n");
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
					    		printf("�п�Jn:(1-9)\n");
					    		scanf(" %d",&n);
					    		if(n<1||n>9)
					    		    printf("��J���~�A�Э��s��J\n");
					    		else
					    		{
					    		    MT(n);
					    		    system("pause");
	        		    	    	break;
	        		    	    }
							}
					    default:
					    	printf("��J���~�A�Э��s��J\n");
				    }
				    //if((ch<'a'&&ch>'C')||ch>'c'||ch<'A')
				    //    printf("��J���~�A�Э��s��J\n");
				    //else
				    if((ch>='a'&&ch<='c')||(ch>='A'&&ch<='C'))    
					    break;
			    }
			}//while((ch<'a'&&ch>'C')||ch>'c'||ch<'A');
	        break;
    	}
	    if(i==3)
	        printf("�w�s��K�X���~3��\n");
	}
    
	system("pause");
	return 0;
} 
void menu1(int a)
{
	int i,j;
	for(i=0;i<=20;i++)//��for�j��s�y20�檺�ӤH�e�� 
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
}
void menu2(int a)
{
	system("CLS"); // �M���ù�
	printf("---------------------\n");//�D��� 
	printf("| a. �e�X�����T���� |\n");
	printf("| b. ��ܭ��k��     |\n");
	printf("| c. ����           |\n");
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
