#include <stdlib.h>
#include <stdio.h>
int i;
int main(){
    int nc = 2;
    int nl = 1;
    int **z;
    z = malloc(nl*sizeof(int*));
    z[0] = malloc(nc*nl*sizeof(int));
    for(i=0;i<nl;i++){
        z[i+1] = z[i]+nc;
    }
    free (z[0]);
    free (z);
    return 0;
}