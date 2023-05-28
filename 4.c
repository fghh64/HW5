#include<stdio.h>

void reduce_fraction(int * a, int * b) {
int i=0, del=0;
        if (*a < *b) {
            i=*a;
        } else {
            i=*b;
        }
            for (;i>0;i--) {
                if (*a%i==0 && *b%i==0 && i>del) {
                    del=i;
                }
            }
*a = *a/del;
*b = *b/del;
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    reduce_fraction(&a, &b);
    printf("%d %d\n", a, b);
}