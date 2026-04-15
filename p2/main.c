#include <stdio.h>

int main()
{
    int n, ca=0, c1=0, max_a=0, max_1=0;
    char ch;
    
    scanf("%d\n", &n);
    
    for (int i=0; i<n; i++){
        scanf("%c", &ch);
        if (ch>='a' && ch<='z'){
            ca++;
            c1=0;
            if (ca>max_a){
                max_a =ca;
            }
                
        }
        else if (ch>='0' && ch<='9'){
            c1++;
            ca=0;
            if (c1>max_1){
                max_1=c1;
            }
        }
        else{
            ca=0;
            c1=0;
        }
    }

    printf("%d\n", max_a);
    printf("%d", max_1);

    return 0;
}
