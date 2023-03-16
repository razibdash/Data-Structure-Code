#include<stdio.h>
void babul(int rajib[50],int n)
{
    int i,j;
    i=0;
    while(i<n)
    {
        for(j=i+1;j<n;j++)
        {
            if(rajib[i]>rajib[j])
            {
                int temp=rajib[i];
                rajib[i]=rajib[j];
                rajib[j]=temp;

            }
        }
        i++;
    }
    printf("\nSorting Number: ");
    i=0;
    while(i<n)
    {
        printf("%d ",rajib[i]);
        i++;
    }

}
int main()
{
    int rajib[50],n,i;
    printf("How Many Number: ");
    scanf("%d",&n);
    printf("Enter Your Number: ");
    i=0;
    while(i<n)
    {
        scanf("%d",&rajib[i]);
        i++;
    }
    babul(rajib,n);
}
