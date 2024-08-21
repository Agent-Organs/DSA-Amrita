#include <stdio.h>
int main()
{
	int n,rev=0;
	printf("enter number");
	scanf("%d",&n);
	int t=n;
	for(n;n>0;n=n/10)
		rev=10*rev+(n%10);
	if(t==rev)
		printf("palindrome");
	else printf("not palindrome");
}
