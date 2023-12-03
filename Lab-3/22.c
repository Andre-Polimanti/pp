#include <stdio.h>

int main() {
    int i,j,p,r,m=0,t;
    
    for (i=100;i<=999;i++) {
        for (j=100;j<=999;j++) {
            p = i * j;
            r = 0;
            t=p;
            
            while (t>0) {
                r=r*10+t%10;
                t=t/10;
            }
            if (p==r&&p>m) {
                m=p;
            }
        }
    }
    
    printf("O maior palindromo eh %d", m);
    
    return 0;
}