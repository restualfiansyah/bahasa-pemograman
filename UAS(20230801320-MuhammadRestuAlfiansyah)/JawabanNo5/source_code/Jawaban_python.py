import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Simulasi data transportasi
np.random.seed(42)
data = {
    'Tanggal': pd.date_range(start='2023-01-01', periods=50),
    'Mobil': np.random.randint(5, 10, size=15),
    'Bus': np.random.randint(10, 10, size=20),
    'Sepeda': np.random.randint(10, 20, size=30),
    'Pejalan_Kaki': np.random.randint(10, 30, size=40)
}

# Membuat DataFrame
df = pd.DataFrame(data)

# Analisis Dasar
# Total penggunaan per moda
total_penggunaan = df[['Mobil', 'Bus', 'Sepeda', 'Pejalan_Kaki']].sum()
print("Total penggunaan per moda transportasi:")
print(total_penggunaan)

# Moda paling populer
moda_terpopuler = total_penggunaan.idxmax()
print(f"\nModa transportasi paling populer: {moda_terpopuler}")

# Rata-rata penggunaan per hari
rata_rata_penggunaan = df[['Mobil', 'Bus', 'Sepeda', 'Pejalan_Kaki']].mean()
print("\nRata-rata penggunaan harian per moda:")
print(rata_rata_penggunaan)

# Visualisasi
df.plot(x='Tanggal', y=['Mobil', 'Bus', 'Sepeda', 'Pejalan_Kaki'], kind='line', figsize=(12, 6))
plt.title('Penggunaan Transportasi Harian')
plt.xlabel('Tanggal')
plt.ylabel('Jumlah Pengguna')
plt.grid(True)
plt.legend(title='Moda Transportasi')
plt.show()
