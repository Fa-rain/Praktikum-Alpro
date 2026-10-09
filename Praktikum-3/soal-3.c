// Program mencari bilangan terkecil
// menerima 10 input yang akan dibandingkan

#include <stdio.h>

int main(){
    int b;
    int terkecil;
    printf("Program mencari bilangan terkecil dari 10 input\n");
    for (int i = 1; i <= 10; i++){
        printf("Bilangan ke-%d : ", i);
        scanf("%d", &b);
        if(terkecil > b){
            terkecil = b;
        }
    }
    printf("Bilangan terkecil adalah : %d", terkecil);

}