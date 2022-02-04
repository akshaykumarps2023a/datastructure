#include<stdio.h>
void main()
{
    int li,lj,si[100],sj[100],i,s[100];
    printf("enter the 1st array limit:");
    scanf("%d",&li);
    printf("enter the 2nd array limit:");
    scanf("%d",&lj);
    printf("enter the 1st array:");
    for(i=0;i<li;i++)
    {
        scanf("%d",&si[i]);
    }
    printf("enter the 2nd array:");
    for(i=0;i<lj;i++)
    {
        scanf("%d",&sj[i]);
    }
    if(li!=lj)
    {
        printf("The operation not possible:");
    }
    else
    {
        for(i=0;i<li;i++)
        {
            s[i]=si[i]&&sj[i];
        }
    printf("The array elements are:");
    for(i=0;i<li;i++)
    {
        printf("%d ",s[i]);
    }
    }
}
