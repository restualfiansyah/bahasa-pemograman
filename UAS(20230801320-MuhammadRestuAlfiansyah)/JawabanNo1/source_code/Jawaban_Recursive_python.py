def faktorial(n):
    # Basis kasus: jika n sama dengan 1, kembalikan 1
    if n == 1:
        return 1
    else:
        # Panggilan rekursif
        return n * faktorial(n - 1)

# Memanggil fungsi rekursif
hasil = faktorial(5)
print(hasil)  # Output: 120 (karena 5! = 5 * 4 * 3 * 2 * 1)
