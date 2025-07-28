#include <stdio.h>

int BinarySearch(int a[], int left, int right, int data) 
{
	int mid;
    while (left <= right) 
	{
        mid = (left + right) / 2;

        if (a[mid] == data)
            return mid;

        else if (a[mid] < data)
            left = mid + 1;

        else
            right = mid - 1;
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
    
    result = BinarySearch(a,0,n-1,data);
    
    if (result == -1) 
	{
        printf("Element is not found\n",data);
    } 
	else 
	{
        printf("Element is found at location :%d\n",data,result);
    }
    
    return 0;
}

