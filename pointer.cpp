#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    // Complete this function    
    int i, j;
    i = *a + *b;
    j = *a - *b;
    *a = i;
    *b = abs(j);
    }

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}