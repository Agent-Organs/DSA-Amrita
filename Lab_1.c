#include <stdio.h>
void prog1()
{
	int sum=0;
	for(int n=0;n<=10;n++)
		sum=sum+n;
	printf("1. sum is %d\n",sum);
}

void prog2()
{
	int fact=1;
	for(int n=1;n<=5;n++)
		fact=fact*n;
	printf("2. factorial of 5 is %d\n",fact);	
}

void prog3()
{
	int a=0,b=1,c=0;
	printf("3. fibonacci sequence is \n%d\t%d\t",a,b);
	for (int i=1;i<=8;i++)
		{
			c=a+b;			
			a=b;
			b=c;
			printf("%d\t",c);		
		}
	printf("\n");
}

void prog4()
{
	int n1=320,n2=250,n3=445; 
	if (n1>n2)
		if (n1>n3)
			printf("4. %d is the largest\n",n1);
		else 
			printf("4. %d is the largest\n",n3);
	else 
		if (n2>n3)
			printf("4. %d is the largest\n",n2);
		else printf("4. %d is the largest\n",n3);
}

void prog5()
{
	int sum=0;
	for (int n=1;n<=10;n++)
		if (n%2==0)
			sum=sum-n;
		else sum=sum+n;
	printf("5. sum is %d\n",sum);
}

int main()
{
	prog1();
	prog2();
	prog3();
	prog4();
	prog5();
}
