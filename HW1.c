#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,password;//�ŧi�ܼ� 
	char ch;
	for(i=0;i<=20;i++)//��for�j��s�y20�檺�ӤH�e�� 
	{
		for(j=0;j<=10;j++)
		    printf("hi hello ");
		printf("\n");
	}
	system("pause");
	system("CLS"); // �M���ù�
	printf("�п�J�K�X:");
	scanf("%d",&password);
	if(password==2025)//�P�_�K�X 
	{
		system("CLS"); // �M���ù�
		printf("---------------------------\n");//�D��� 
		printf("- 'A' ... 'Z' : Uppercase -\n");
		printf("- 'a' ... 'z' : Lowercase -\n");
		printf("- '0' ... '9' : Digit     -\n");
		printf("-  Otherwise  : your name -\n");
		printf("---------------------------\n");
		printf("�п�J�@�Ӧr��:");
		fflush(stdin);
		scanf("%c",&ch);
		switch(ch)//�P�_�r�� 
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
//�߱o:�@�}�l���sĶ���]dev C�A�L�kcommit�A��Ӧb������ܤ[�A 
// �ש���p����ܽsĶ���A�b���^notepad�A�N���\commit�A 
//�{����²��A�N�O���ӷ|��git�A�n��[�ǲߡC 
