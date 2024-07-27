import tkinter as tk
from tkinter import messagebox

# Fungsi yang akan dipanggil ketika tombol diklik
def klik_tombol():
    messagebox.showinfo("Informasi", "Tombol diklik!")

# Membuat jendela utama
jendela = tk.Tk()
jendela.title("Contoh GUI dengan Tkinter")
jendela.geometry("300x200")  # Ukuran jendela

# Membuat label
label = tk.Label(jendela, text="Halo, Selamat Datang!")
label.pack(pady=10)

# Membuat tombol
tombol = tk.Button(jendela, text="Klik Saya", command=klik_tombol)
tombol.pack(pady=20)

# Menjalankan aplikasi
jendela.mainloop()
