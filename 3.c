#include<stdio.h>

int main()
{	
	int x,y;
	char level,c;
	printf("����ȼ���1��������2\n");
	scanf("%d",&x);
	   c=getchar();//��������1ʱ��\n  
	if (x==1)
	{
		printf("������ȼ�");
       level=getchar();
		
		switch(level)
		{
			case'A':
				printf(">=85");
				break;
			case'B':
				printf("70-85");
				break;
			case'C':
				printf("60-70");
				break;
			case'D':
				printf("<60");
				break;
			default:
				printf("�ɼ�����");
				break;
		}

	}
	if(x==2)
	{
		printf("���������:\n");
		scanf("%d",&y);
		if(y>=85)
			printf("A:\n");
		else if(y>=70&&y<85)
			printf("B:\n");
		else if(y>=60&&y<70)
			printf("C:\n");
		else if(y<60)
			printf("D:\n");
	
	}
	return 0;
}
