#include"ex1Hdr.h"
void accept(int *a,int *arr,int **T,int in[],int *n,int i,int j,int l,int m)
{
        int out,s,k;
        for(k=0;k<m;k++)
        {
                if(arr[k] == in[i])
                        out = T[j][k];
        }
        printf("\n CURRENT STATE: Q%d   AND NEXT STATE : Q%d \n",a[j],out);
        if(i<l-1)
        {
                i++;
                accept(a,arr,T,in,n,i,out,l,m);
        }
        if(i==l-1 && (found(n,out))){
                printf("\nSTRING ACCEPTED\n");
                exit(0);
        }
        if(i==l-1 && !(found(n,out))){
                printf("\nSTRING NOT ACCEPTED\n");
                exit(0);
        }
}

bool found(int* n,int ni)
{
        int i;
        for(i=0;i<10;i++)
        {
                if(n[i] == ni)
                {
                        return true;
                }
        }
        return false;
}
