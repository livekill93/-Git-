#include <stdio.h>

int main(){
    int A,B,C,D,E,F;

    scanf("%d %d",&A,&B);

    C = A*(B%10);
    D = A*(B/10%10);
    E = A*(B/100);

    printf("%d\n",C);
    printf("%d\n",D);
    printf("%d\n",E);
    printf("%d\n",E*100+D*10+C);


    return 0;
}
