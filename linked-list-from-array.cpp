#include<bits/stdc++.h>
using namespace std;
struct Node *linked(int ar[],int size);
struct Node
{
    int data;
    struct Node *next;
};
struct Node* linked(int ar[],int size)
{
    struct Node *head=NULL,*temp=NULL,*current=NULL;
    int i;
    for(i=0;i<size;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=ar[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }
     return head;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    struct Node *head;

    head=linked(ar,n);
      while(head!=NULL)
    {
        cout<<head->data<<"-> ";
        head=head->next;
    }
    cout<<"NULL";



}
