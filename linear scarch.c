#include<stdio.h>
void rajibbd(int rajib[],int n,int src)
{
     int index=-1;
    int i=0;
    while(i<n)
    {
        if(rajib[i]==src)
        {
            index=i+1;
            break;
        }
        i++;
    }
    if(index==-1)
    {
        printf("Item Is Not Found\n");
    }
    else
        printf("The Item Is found %d Num Position",index);
}


int main()
{
    int rajib[50],i,n,src;
    printf("How Many Number: ");
    scanf("%d",&n);
     printf("Enter Your Number: ");
     for(i=0;i<n;i++)
     {
         scanf("%d",&rajib[i]);
     }
     printf("Scarch Any Number: ");
     scanf("%d",&src);
    
     }

}
