#include"ex1Hdr.h"
int main()
{
        int n,m,i,j,a;
        int *Q,*S,**T,in[4];
        printf("\nENTER THE NUMBER OF STATES :");
        scanf("%d",&n);
                Q = (int *)malloc( n * sizeof(int));
                for(i=0;i<n;i++)
                {
                        Q[i] = i;
                }
                printf("\nENTER THE NUMBER OF SYMBOLS :");
                scanf("%d",&m);
                S = (int *)malloc( n * sizeof(int));
                printf("\nENTER THE SYMBOLS :");
                for(i=0;i<m;i++)
                {
                        scanf("%d",&S[i]);
                }
                printf("\nENTER THE TABLE TRANSITION :");
                T = (int **)malloc(n * sizeof(int));
                for(i=0;i<n;i++)
                {
                        T[i] = (int *)malloc(m * sizeof(int));
                }
                for(i=0;i<n;i++)
                {
                        printf("\nFOR STATE Q%d :",Q[i]);
                        for(j=0;j<m;j++)
                        {
                                scanf("%d",&T[i][j]);
                        }
                }
                printf("\nSYMBOLS       STATES\n");
                for(i=0;i<m;i++)
                {
                        printf("%d\t",S[i]);
                }
                printf("\n\n");
                for(i=0;i<n;i++)
                {
                        for(j=0;j<m;j++)
                        {
                                printf("%d\t",T[i][j]);
                        }
                        printf("%d\n\n",Q[i]);
                }
                printf("ENTER THE NUMBER OF ACCEPTING STATE :");
                scanf("%d",&a);
                printf("\nENTER THE ACCEPTING STATE :");
                int l,*accept_state;
                accept_state = (int *)malloc(sizeof(int) * a);
                for(i=0;i<a;i++)
                {
                        accept_state[i] = -1;
                }
                for(i=0;i<a;i++)
                {
                        scanf("%d",&accept_state[i]);
                }
                printf("\nENTER THE STRING LENGTH :");
                scanf("%d",&l);
                for(i=0;i<l;i++)
                {
                        scanf("%d",&in[i]);
                }
                accept(Q,S,T,in,accept_state,0,0,l,m);
                return 0;
}
