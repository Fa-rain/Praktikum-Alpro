# Program untuk mengecek cuaca berdasarkan input suhu

suhu = float(input("Masukkan suhu (Celcius) : "))

if suhu >= 30 :
    print("Cuaca panas")
elif suhu >= 20 and suhu < 30 :
    print("Cuaca hangat")
elif suhu < 20 :
    print("Cuaca dingin")