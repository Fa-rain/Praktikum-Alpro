# Nomor 4
# Rumus lingkaran = Pi x Pi x Jari-jari
jari_jari = float(input("Masukkan jari-jari : "))
pi = 3.14

def hitungLuasLingkaran(jari_jari):
    return pi * (jari_jari * jari_jari)


luas = hitungLuasLingkaran(jari_jari)
print(f"Luas lingkaran : {luas}")