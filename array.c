#include<stdio.h>
int inarray(int a[],int n);
int main()
{
    int a[]={1,2,6,4,5};
    int n,c;
    printf("enter the element ");
    scanf("%d",&n);
    c=inarray(a,n);
    printf("%d",c);
    return 0;
}
int inarray(int a[],int n)
{
        int i;int flag=0;
        for(i=0;i<5;i++)
        {
                if(a[i]==n)
                {
                        return i;
                        flag++;
                }
                
                
                  
        }
        if (flag==0)
        {
                return -1;
        }
}
