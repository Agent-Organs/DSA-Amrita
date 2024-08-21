#include <stdio.h>

void laine()
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1},temp=0,small=0;
	for (int i=0;i<10;i++)
	{	small=i;
		for( int j=i+1;j<10;j++)
		if (a[j]<a[small])
		small=j;
		
		temp=a[small];
		a[small]=a[i];
		a[i]=temp;
	}
	
	for (int i=0;i<10;i++)
		printf("%d\t",a[i]);
}
int main()
{
	int a[3][3]= {{0,1,2}, {4,5,6}, {8,9,10}},n=3;
	int b[3][3]= {{0,1,2}, {4,5,6}, {8,9,10}};
	int c[3][3]= {{0,0,0}, {0,0,0}, {0,0,0}};
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			c[i][j]=a[i][j]+b[i][j];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
			printf("%d\t",c[i][j]);
		printf("\n");
	}
	laine();
}


	
