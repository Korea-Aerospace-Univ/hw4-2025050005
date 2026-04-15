#include <stdio.h>

int main()
{
    int i=0, a=0, g=0;
    scanf("%d\n", &a);
    do {
        i+=1;
        scanf("%d", &g);
        if (a>g){
            printf("%d<?\n", g);
        }
        else if (a<g){
            printf("%d>?\n", g);
        }
        else{
            printf("%d==?\n", g);
            printf("%d",i);
        }
    } while (a!=g);
    return 0;
}


