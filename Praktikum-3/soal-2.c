// Program menjumlahkan deret bilangan
// jumlah bilangan dari 1 sampai bilangan yang diinput pengguna
#include <stdio.h>

int main(){
    int a = 1;
    int bilangan;
    int jumlah = 0;

    printf("Program menghitung jumlah bilangan\n");
    printf("Bilangan : ");
    scanf("%d", &bilangan);

    while(a <= bilangan){
        jumlah = jumlah + a;
        a++;
    }

    printf("Jumlah seluruh bilangan dari 1 ke input : %d", jumlah);
}