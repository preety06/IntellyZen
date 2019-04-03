#include <stdio.h>

int main()
{
    int N=13,nof,nofperson,cost=0;
    int A[N],i,j;
    printf("\nEnter any number of test cases");
    scanf("%d",&nof);
    while(nof!=0)
    {
        printf("Enter number of person");
        scanf("%d",&nofperson);
        printf("\nEnter weight for them");
        for(i=0;i<nofperson;i++)
        {
            scanf("%d",&A[i]);            
        }
        int temp=0;
        printf("We need to sort the array");
        for(i=0;i<nofperson-1;i++)
        {
            for(j=i+1;j<nofperson;j++)
            {
                if(A[i]<A[j])
                {
                   temp=A[i];
                   A[i]=A[j];
                   A[j]=temp;
                }
            }
        }
        printf("Once all sorted add to cost\n");
        
        if(nofperson==0)
        {
            printf("\nNo person in village");
            //cost=cost+A[0]+A[1];
        }
        
        if(nofperson==1)
        {
            cost=cost+A[0];
            printf("\ncost is %d",cost);
        }
        
        if(nofperson==2)
        {
            cost=cost+A[0]+A[1];
            printf("\ncost is %d",cost);
        }
        
        /*if(nofperson>2)
        {
            for(i=0;i<nofperson;i++)
            {
                cost=cost+(A[1]);
                
            }    
        }*/
        nof--;
    }
    printf("\n %d",cost);
}
