// Program untuk mengecek posisi bilangan bulat pada derat bilangan
// Apakah negatif, positif, atau nol

#include <stdio.h>

int main(){
    int angka;

    printf("Program untuk mengecek posisi bilangan bulat pada deret bilangan\n");
    printf("Masukkan angka : ");
    scanf("%d", &angka);

    if(angka > 0 ){
        printf("Positif");
    }else if(angka < 0){
        printf("Negatif");
    }else {
        printf("Nol");
    }

    return 0;
}