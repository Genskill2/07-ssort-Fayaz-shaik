#include <stdio.h>
#include <cs50.h>


void swap_max(int arr[], int l, int n)
{
    int m=0;
    for(int i=n;i<l;i++)
    {
        if(m<arr[i])
           m=arr[i];
    }
    for(int i=n;i<l;i++)
    {
        if(m==arr[i])
        {
           arr[i]=arr[n];
           arr[n]=m;
           break;
        }
    }
}

void ssort(int arr[],int l)
{
    for(int i=0;i<l;i++)
    {
        swap_max(arr,l,i);
    }
}
