#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1, n2, n3;
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    printf("n3: ");
    scanf("%d", &n3);
    int maior = n1;
    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }
    printf("o maior nmr eh: %d\n", maior);
    return 0;
}