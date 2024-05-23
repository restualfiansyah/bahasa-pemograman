#include <stdio.h>
using namespace std;

void tampilan_info() {
    int pilihan;
        printf("1. Tambah\n");
        printf("2. Kurang\n");
        printf("3. Bagi\n");
        printf("4. Kali\n");

    int main() {
        tampilan_info();
        int pilihan;
        cout << "Pilih operasi (1/2/3/4): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            double value1, value2;
            cout << "Masukkan angka pertama: ";
            cin >> value1;
            cout << "Masukkan angka kedua: ";
            cin >> value2;
        
        return 0;

        }

            double hasil;
            switch (pilihan) {
                case 1:
                    hasil = tambah(value1, value2);
                    break;
                case 2:
                    hasil = kurang(value1, value2);
                    break;
                case 3:
                    hasil = kali(value1, value2);
                    break;
                case 4:
                    hasil = bagi(value1, value2);
                    break;
            }
            cout << "Hasil: " << hasil << endl;
        } else if (pilihan == 4) {
            cout << "Keluar dari program..." << endl;
            break;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }
    }