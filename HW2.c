#include<stdio.h>
#include<stdlib.h>
void menu1(int);//�ӤH�e��
void menu2(int);//�D���
void RT(int);//�����T����
void MT(int);//���k��
int main(void)
{
	int n=0,i,password;//�ŧi�ܼ� 
	char ch,yn,chRT='a';//ch�O�D���Ayn�Oc���O�_�����AchRT�O�����T���� 
	
	menu1(1);//�ӤH�e�� 
	for(i=1;i<=3;i++)
	{
		fflush(stdin);
		printf("�п�J�K�X:(�K�X�w�]��2025)\n");
	    scanf("%d",&password);
	    if(password==2025)
	    {
	        while(1)
	        {
			    menu2(1);//�D���
	            while(1)
	            {
	            	fflush(stdin);
	            	printf("�п�J�ﶵ(a-c or A-C): \n");
	            	scanf(" %c",&ch);
	            	switch(ch)
	            	{
	            		case 'a':
	            		case 'A':
	            			system("CLS"); // �M���ù�
	            			while(1)
	        		    	{
	        		    		fflush(stdin);
	        		    		printf("�п�J�����T����(a-n): \n");
	        		    		scanf(" %c",&chRT);
	        		    		if((int)chRT<'a'||(int)chRT>'n')
	        		    		{
	        		    	        printf("��J���~�A�Э��s��J\n");
	        		    	    }
	        		    	    else
	        		    	    {
	        		    	    	RT((int)chRT-96);//�����T����
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
					    		printf("�п�Jn*n���k��(1-9): \n");
					    		scanf("%d",&n);
					    		if(n<1||n>9)
					    		    printf("��J���~�A�Э��s��J\n");
					    		else
					    		{
					    		    MT(n);//���k��
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
								    printf("��J���~�A�Э��s��J\n");
							}
							break;
					    default:
					    	printf("��J���~�A�Э��s��J\n");
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
	        printf("�w�s��K�X���~3��\n");
	}
    
	system("pause");
	return 0;
} 
void menu1(int a)//�ӤH�e�� 
{
	int i,j;
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
}
void menu2(int a)//�D��� 
{
	system("CLS"); // �M���ù�
	printf("---------------------\n");
	printf("| a. �e�X�����T���� |\n");
	printf("| b. ��ܭ��k��     |\n");
	printf("| c. ����           |\n");
	printf("---------------------\n");
}
void RT(int a)//�����T���� (a�O�j�p) 
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
void MT(int a)//���k�� (a�O�j�p) 
{
	int i,j;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		    printf("%d*%d=%2d ",i,j,i*j);
		printf("\n");
	}
}
