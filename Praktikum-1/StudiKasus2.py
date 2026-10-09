# Nomor 5
# Rumus keliling lingkaran = 2 x Pi x Jari-jari
jari_jari = float(input("Masukkan jari-jari : "))

def hitungKelilingLingkaran(jari_jari):
    pi = 3.14
    return  2 * pi * jari_jari

keliling = hitungKelilingLingkaran(jari_jari)
print(f"Keliling lingkaran : {keliling}")
