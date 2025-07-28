#include <stdio.h>

void Bubble(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted Data:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

int main()
{
	int a[50],n,i;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Bubble(a,n);
	
	return 0;
}
