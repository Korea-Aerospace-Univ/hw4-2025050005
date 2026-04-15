#include <stdio.h>

int main()
{
    int i=0, a=0, g=0;
    scanf("%d\n", &a);
    do {
        scanf("%d", &g);
        if (a>g){
            printf("%d<?\n", g);
            i+=1;
        }
        else if (a<g){
            printf("%d>?\n", g);
            i+=1;
        }
        else{
            printf("%d==?\n", g);
            printf("%d",i+1);
            break;
        }
    } while (a!=g);

    return 0;
}
