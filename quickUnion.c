#include <stdio.h>
#define N 10

int main(){
    int i,p,q,t,id[N];
    for ( i = 0; i < N; i++)
    {
        id[i] = i;
    }
    printf("please input the data between 0-9\n");
    while (scanf("%d %d", &p,&q)==2)
    {
        for ( i = p; i !=id[i];  i=id[i]);
        for (  t= q; t!=id[t]; t=id[t]);
        if (i==t)
        {
            continue;
        }
        id[i]  =t;
        for (size_t i = 0; i < N; i++)
        {
            printf("%d " , id[i]);
        }
        printf("\n");
    }      
    return 0;
}
