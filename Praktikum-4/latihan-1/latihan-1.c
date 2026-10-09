#include <stdio.h>

// Fungsi faktorial dengan parameter berupa bilangan integer
int faktorial(int a){
    // Variabel untuk menampung hasil faktorial
    int hasil = 1;

    // Perulangan untuk faktorial
    while(a > 0){
        // update hasil dengan faktorial
        hasil = hasil * a;
        a--;
    }
    // kembalikan hasil
    return hasil;
}

int main(){
    // simpan hasil fungsi ke dalam output
    int output = faktorial(5);
    printf("Hasil : %d\n", output);
    return 0;
}