# Prosedur untuk meminta input, menghitung, dan menampilkan rata-rata
def hitung_rata_rata():
    #pengguna memasukkan jumlah data
    n = int(input("Masukkan jumlah bilangan (n): "))
    total = 0

    # Perulangan untuk menerima input sejumlah n
    for i in range(1, n + 1):
        angka = float(input(f"Masukkan bilangan ke-{i}: "))
        total += angka

    # Menghitung dan menampilkan hasil jika n > 0
    if n > 0:
        rata_rata = total / n
        print(f"Rata-rata: {rata_rata:.2f}")
    else:
        print("Jumlah bilangan harus lebih besar dari 0.")

# Pemanggilan prosedur
hitung_rata_rata()

a = 17
b = 5

print(a % b)