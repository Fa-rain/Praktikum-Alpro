# Fungsi faktorial
def faktorial(a):
    # variabel untuk menyimpan hasil faktorial
    hasil = 1

    # Perulangan untuk faktorial
    while a > 0 :
        # Update nilai hasil
        hasil = hasil * a
        a = a - 1

    # Kembalikan hasil
    return hasil

# Print
output = faktorial(5)
print("Hasil Faktorial : ",output)





        