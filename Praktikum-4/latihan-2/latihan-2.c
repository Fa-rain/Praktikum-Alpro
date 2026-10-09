#include <stdio.h>

// Prosedur untuk meminta input, menghitung, dan menampilkan rata-rata
void hitung_rata_rata() {
    int n;
    float total = 0, angka, rata_rata;

    // Meminta pengguna memasukkan jumlah data
    printf("Masukkan jumlah bilangan (n): ");
    scanf("%d", &n);

    // Perulangan untuk menerima input sejumlah n
    for (int i = 1; i <= n; i++) {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%f", &angka);
        total += angka;
    }

    // Menghitung dan menampilkan hasil jika n > 0
    if (n > 0) {
        rata_rata = total / n;
        printf("Rata-rata: %.2f\n", rata_rata);
    } else {
        printf("Jumlah bilangan harus lebih besar dari 0.\n");
    }
}

int main() {
    // memanggil prosedur
    hitung_rata_rata();
    return 0;
}