#include<stdio.h>
int min_element(int a[],int j,int min,int n)
{
    if(j==(n-1))
    return min;
    else
        {
        if(a[j] <= min)
            min=a[j];
        return min_element(a,++j,min,n);
        }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int y;
    y=min_element(arr,0,arr[0],n);
    printf("%d\n",y);
}
