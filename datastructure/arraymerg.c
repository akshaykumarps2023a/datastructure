
#include<stdio.h>
void main()
{
int l,m,i,k,j,temp;
int a[100],b[100],c[100];
printf("enter the limit of 1st array:");
scanf("%d",&l);


printf("enter 1st array:\n");
for(i=0;i<l;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the limit of 2nd array:");
scanf("%d",&m);
k=l+m;
printf("enter 2nd array:\n");
for(i=0;i<m;i++)
{
    scanf("%d",&b[i]);
}
j=0;
for(i=0;i<k;i++)
    {
        if(i<l)
            {
                c[i]=a[i];
            }
        else
            {
                c[i]=b[j];
                j++;
            }
    }
for(i=0;i<k;i++)
{
    for(j=i+1;j<k;j++)
    {
        if(c[i]>c[j])
             {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
             }
    }
}
printf("array:");
for(i=0;i<k;i++)
{
    printf("%d ",c[i]);
}
}
