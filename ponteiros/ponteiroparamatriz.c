#include <stdio.h>
#include <stdlib.h>

int main(){
int matriz[3][2] ={ {1, 2},
{3,4},
{5,6}};
int (*ponteiro)[2];
ponteiro = matriz;
printf("%d", ponteiro[0][1]);
return 0;

}