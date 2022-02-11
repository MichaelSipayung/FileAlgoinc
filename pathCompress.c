#include <stdio.h>
#define N 10
int main(){
    int i,j,p,q,id[N],sz[N];
    for ( i = 0; i < N; i++)
    {
        id[i] = i;
        sz[i]=1;
    }
    printf("Please input a pair of connected number\n");
    while (scanf("%d %d", &p,&q) ==2)
    {
        for ( i = p; i != id[i]; i=id[i])
        {
           int t =i;i=id[id[t]];id[t]  = i;
        }
        for ( j = q; j !=id[j]; j=id[j])
        {
            int t  =j;j=id[id[t]];id[t]  =j;
        }
        if(i==j){continue;}
        if (sz[i]<sz[j])
        {
            id[i]=j;sz[j]+=sz[i];
        }
        else{
            id[j] =i;sz[i]+=sz[j];
        }
        for (size_t i = 0; i < N; i++)
        {
            printf("%d " , id[i]);
        }
        printf("\n");
    }
    
    
    return 0;
}