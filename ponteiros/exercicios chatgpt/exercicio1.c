#include <stdlib.h>
#include <stdio.h>

int main(){
    int *v;
    int n;
    printf("Digite o tamanho do seu vetor: "); scanf("%d", &n);
    v = (int *)malloc(n * sizeof(int));
    if(v==NULL){
        exit(1);
    }
    for(int i=0;i<n;i++){
        printf("Digite o %dº elemento.", i+1);
        scanf("%d", &v[i]);
    }
    printf("[");
    for(int i=0;i<n-1;i++){
printf("%d, ", v[i]);
    }
    printf("%d]", v[n-1]);
    free(v);
    return 0;

}
