#include<stdio.h>
void main()


{
	int a[15],i,n,key;
	printf("Enter the Limit");
	scanf("%d", &n);
	printf("Enter the Elements");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The Elements are");
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
	}
	printf("Enter the Key");
	scanf("%d", &key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("The given number position is %d", i+1);
			break;
		}	
	}
	if(i==n)
	{
		printf("The given number is not found");
	}
		
}	
