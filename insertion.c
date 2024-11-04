#include<stdio.h>
void main()
{
	int a[100],i,n,in,pos;
	printf("Enter the limit");
	scanf("%d", &n);
	printf("Enter the Elememts");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be inserted");
	scanf("%d", &in);
	printf("Enter the position");
	scanf("%d", &pos);
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
		a[pos-i]=in;
	}
	
	for(i=0;i<n+1;i++)
	{
		printf("%d\n", a[i]);
	}
}
