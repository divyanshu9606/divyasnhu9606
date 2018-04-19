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


    for(i=0;i<n;i++)
    {
        postn=i;
        for(j=i+1;j<n;j++)
        {
            if(gt[j]>gt[postn])
                postn=j;
        }

        nom[i]=i;
        varib1=gt[i];
        gt[i]=gt[postn];
        gt[postn]=varib1;

        varib2=pn[i];
        pn[i]=pn[postn];
        pn[postn]=varib2;
    }

    wt[0]=0;    //waiting time for person with most number is zero

    // waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=gt[j];

        total+=wt[i];
    }

    mean_wt=total/n;      //average waiting time
    total=0;

    printf("\n#Process\t  #Number of gifts \t#Waiting Time\t  #Turnaround Time     #priority");
    for(i=0;i<n;i++)
    {
        varib[i]=gt[i]+wt[i];     //calculate turnaround time
        total+=varib[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d  %d",pn[i],gt[i],wt[i],varib[i],nom[i]);
    }

    mean_varib=total/n;     //average turnaround time
    printf("\n\nAverage Waiting Time=%d",mean_wt);
    printf("\nAverage Turnaround Time=%d\n",mean_varib);

    return 0;
}
}
