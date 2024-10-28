#include<stdio.h>
{
	int linear_search(int a[],int i,int key,int n)
	{
		for(i=0;i<n;i++)
		{
			if(key==a[i])
			{
				return i;
			}
		return -1;
		}
	}
}	
int main()
{
	int a[15],i,n,key,index;
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
	index=linear_search(a,n,key);
	{
		if(index==-1)
		{
			printf("Value not found");
		}
		else
		{
			printf("Value found at %d", index);		
		}
	}
	return 0;
}	
