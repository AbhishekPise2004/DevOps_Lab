#include <stdio.h>

int LinearSearch(int a[], int n, int data) 
{
	int i;
    for (i=0; i<n; i++) 
	{
        if (a[i] == data) 
		{
            return i; 
        }
    }
    
    return -1; 
}

int main() 
{
    int n,data,a[50],i,result;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &data);
    
    result = LinearSearch(a, n, data);
    
    if (result == -1) 
	{
        printf("Element is not found\n",data);
    } 
	else 
	{
        printf("Element is found at %d index\n", result);
    }
    
    return 0;
}

