#include<stdio.h>
void main()
{
	int a[10],i,n,pos;
	printf("Enter the Limit");
	scanf("%d", &n);
	printf("Enter the Elemets");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Given array is");
	for(i=0;i<n;i++)
	{
		printf("%d \n", a[i]);
	}
	printf("Enter the position to be deleted");
	scanf("%d", &pos);
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	printf("\n Converted array");
	for(i=0;i<n-1;i++)
	{
		printf("%d \n", a[i]);
	}
}
