#include <iostream>
using namespace std;

int main() {
    int n, i, j;

    cout << "Masukan jumlah baris: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        // Loop untuk cetak spasi
        for (j = i; j < n; j++)
            cout << " " ;
        // Loop untuk mencetak bintang
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
