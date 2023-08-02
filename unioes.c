#include <stdio.h>
union Pokemon{
    int tipo; 
    int nivel;
};
int main(){
   union Pokemon Pikachu;
   Pikachu.tipo = 2;
   Pikachu.nivel = 3;
    printf("%d, %d", Pikachu.tipo, Pikachu.nivel);
    return 0;
}