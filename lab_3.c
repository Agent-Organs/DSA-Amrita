#include <stdio.h>

void gain()
{
	int size=0,new=0,p=0;
	printf("Enter size of the array\t");
	scanf("%d",&size);

	int a[size];
	printf("Enter digits");

	for (int i=0;i<size;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the number to be inserted\t");
	scanf("%d",&new);
	printf("Enter the position\t");
	scanf("%d",&p);
	size=size+1;

	for(int i=size-1;i>=p; i--)
		a[i+1]=a[i];
	        a[p-1]=new;
	for (int i=0;i<size;i++)
		printf("%d\n",a[i]);
}

void vain()
{
	int size=0,p=0;
	printf("Enter size of the array\t");
	scanf("%d",&size);

	int a[size];
	printf("Enter digits");

	for (int i=0;i<size;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the position to be deleted\t");
	scanf("%d",&p);
	
	for(int i=p-1;i<size-1;i++)
		a[i]=a[i+1];
	size=size-1;
	for (int i=0;i<size;i++)
		printf("%d\n",a[i]);

}

void lane()
{
	int size=0,p=0,temp=0;
	printf("Enter size of the array\t");
	scanf("%d",&size);

	int a[size];
	printf("Enter digits");

	for (int i=0;i<size;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<size;i++)
		for(int j=i;j<size;j++)
			if (a[i]>a[j])
			{	temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	for (int i=0;i<size;i++)
		printf("%d\n",a[i]);
}

int main()
{
	int hp;
	printf("1. for insertion, 2. for deletion, 3. for sorting");
	scanf("%d",&hp);
	if (hp==2)
		vain();
	else if (hp==1) 
		gain();
	else
		lane();
}
