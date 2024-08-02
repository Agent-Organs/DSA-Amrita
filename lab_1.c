#include <stdio.h>

void prog1()
{
	int a=0,b=1,c=0,in=0;
	printf("1. enter number");
	scanf("%d",&in);
	if (in == 0)
		printf("1. given number is fibonacci series\n");
	else if (in == 1)
		printf("1. given number is fibonacci series\n");
	else 
	{
		for (c;c<in;)
		{
			c=a+b;			
			a=b;
			b=c;	
		}
		if (in == c)
			printf("1. given number is fibonacci series\n");
		else 
			printf("1. given number is not fibonacci series\n");
	}
	
}

void prog2()
{
	int i=0,rev=0;
	printf("2. enter number");
	scanf("%d",&i);
	for (i;i>0;i=i/10)
		rev=rev+i%10;
	printf("2. sum of digits is %d\n",rev);	
}

void prog3()
{
	int i=0,rev=0;
	printf("3. enter number");
	scanf("%d",&i);
	for (i;i>0;i=i/10)
	{
		rev=10*rev+i%10;
	}
	printf("3. reverse is %d\n",rev);
}

void prog4()
{
	int num=0;
	printf("4. The series is:\n");
	for (int i=1;i<=4;i++)
	{
		for (int j=0;j<i;j++)
		{		
			num++;
			printf("%d\t",num);
		}
		printf("\n");
	}
}

void prog5()
{
	char c;
	printf("\n5. enter character");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
			printf("vowel");
			break;
		case 'e':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");
			break;
		case 'o':
			printf("vowel");
			break;
		case 'u':
			printf("vowel");
			break;
		case 'A':
			printf("vowel");
			break;
		case 'E':
			printf("vowel");
			break;
		case 'I':
			printf("vowel");
			break;
		case 'O':
			printf("vowel");
			break;
		case 'U':
			printf("vowel");
			break;
		default:
			printf("not a vowel");
	}
}

void prog6()
{
	int a[10]={1,3,6,4,56,23,1,2,3,8},k=a[0];
	for(int i=0;i<10;i++)
			if (k<a[i])
				k=a[i];
	printf("\n6.Largest number in the given array is %d", k);
		
}

void prog7()
{
	int a[10]={1,3,6,4,56,23,9,2,65,8},k,y;
	printf("7. enter number");
	scanf("%d",&k);
	for(int i=0;i<10;i++)
		if (k==a[i]){
			y=i;
			printf("\n7.the required number is %d in the array",y);
			break;
		}
			printf("\n7.the required number is not in the array");
		
}

int main()
{
	prog1();
	prog2();
	prog3();
	prog4();
	prog5();
	prog6();
	prog7();
}
