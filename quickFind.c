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
        if(id[p] ==id[q]){
            continue;
        }
        for(t=id[p], i=0;i<N;i++){
           if (id[i]  ==t)
           {
               id[i] = id[q];
           }
                
        }
        for (size_t i = 0; i < N; i++)
        {
            printf("%d " , id[i]);
        }
        printf("\n");
    }  
    return 0;
}
