#include<stdio.h>
int binary(int rajib[50],int n,int value)
{
    int i, high,low,mid,count=-1;
    high=n-1;
    low=0;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(rajib[mid]==value)
        {
        printf("The Item Is %d Found At Index %d",value,mid+1);
            count=low+1;
            break;
        }
        else if(rajib[mid]<value)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
}
int main()
{
    int rajib[50],i,n,value;
   printf("How Many Number: ");
    scanf("%d",&n);
    i=0;
    printf("Enter Number: ");
    while(i<n)
    {
        scanf("%d",&rajib[i]);
        i++;
    }
    printf("Enter check value: ");
    scanf("%d",&value);
    binary(rajib,n,value);
}

