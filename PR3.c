#include<stdio.h>
 int main()
{
    int gt[20],pn[20],wt[20],varib[20],nom[20],i,j,n,tot=0,postn,varib1,mean_wt,mean_varib,varib2;
    printf("<-----------------------Enter total Number of Persons:-------------------Max(10)>");
    scanf("%d",&n);
if(n!=10)
{
printf("This is an error");
}
else
{


    printf("----------------------\nEnter number of gifts selected from gift shop------------\n");
    for(i=0;i<n;i++)
    {
        printf("\n   P[%d]     \n",i+1);
        printf("    Number of gifts:  ");
        scanf("%d",&gt[i]);
        pn[i]=i+1;           // process number
    }
 }
}
