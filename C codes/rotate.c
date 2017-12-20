#include<stdio.h>
void rotate(int a[],int n,int r);
void print(int a[],int  n);
int main()
{
    
    int i,n,r;
    scanf("%d %d",&n,&r);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
     rotate(a,n,r);
    return 0;
 
}
void rotate(int a[],int n,int r)
{
    int i;
    for(i=0;i<r;i++)
    {
        print(a,n);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void print(int a[],int n)
{
    int i,temp;
    temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
        
}
