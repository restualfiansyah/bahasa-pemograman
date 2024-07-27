def bagi(a, b):
    try:
        # Mencoba melakukan pembagian
        hasil = a / b
    except ZeroDivisionError:
        # Menangani pengecualian jika terjadi pembagian dengan nol
        return "Error: Tidak dapat membagi dengan nol."
    except TypeError:
        # Menangani pengecualian jika tipe data input tidak sesuai
        return "Error: Input harus berupa angka."
    else:
        # Dieksekusi jika tidak ada pengecualian
        return hasil
    finally:
        # Selalu dieksekusi, baik terjadi pengecualian atau tidak
        print("Proses pembagian selesai.")
        
# Contoh penggunaan fungsi dengan berbagai kasus
print(bagi(10, 2))   # Output: 5.0
print(bagi(10, 0))   # Output: Error: Tidak dapat membagi dengan nol.
print(bagi(10, 'a')) # Output: Error: Input harus berupa angka.