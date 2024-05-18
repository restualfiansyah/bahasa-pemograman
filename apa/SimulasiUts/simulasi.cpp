#SOAL1
##Jelaskan sesuai dengan pemahaman anda apa itu Bahasa Pemrograman?
#Jawaban:Bahasa pemrograman adalah aturan atau sekumpulan instruksi yang digunakan untuk mengkomunikasikan dengan komputer. 
Ini memungkinkan pengembang untuk membuat program komputer dengan menentukan langkah-langkah yang harus diambil oleh komputer
untuk menyelesaikan suatu tugas atau menjalankan suatu fungsi tertentu.
Bahasa pemrograman dapat berupa sintaksis, aturan, dan struktur data yang diperlukan untuk menulis kode yang akan dieksekusi 
oleh komputer.Tujuan utamanya adalah untuk memberikan cara yang sistematis bagi manusia untuk berkomunikasi dengan 
komputer dan menyusun instruksi-instruksi yang akan dieksekusi oleh mesin tersebut.

#Soal2
##Jelaskan berdasarkan pemahaman anda apa saja paradigma dalam Bahasa Pemrograman?
#Jawaban : Paradigma dalam bahasa pemrograman mengacu pada kerangka pemikiran atau pendekatan umum 
yang digunakan untuk merancang dan mengembangkan program komputer. Berikut adalah beberapa paradigma yang umum dalam bahasa pemrograman:
Imperatif,Deklaratif,Pemrograman Fungsional,Pemrograman Berorientasi Objek,Pemrograman Prosedural,Pemrograman Logika.

#Soal3
##Jelaskan Jelaskan type data yang anda ketahui dan berikan penjelasan terkait type data tersebut!
#Jawaban : Terdapat beberapa tipe data yang umum digunakan dalam pemrograman. Berikut adalah beberapa di antaranya beserta 
penjelasan singkat: 
1.Integer: Tipe data ini digunakan untuk merepresentasikan bilangan bulat, baik positif maupun negatif, 
tanpa desimal.Contohnya adalah 1, 10, -5.
2.Float (Floating Point): Tipe data ini digunakan untuk merepresentasikan bilangan pecahan dengan titik desimal. 
Contohnya adalah 3.14, 2.718
3.String: Tipe data ini digunakan untuk merepresentasikan teks atau kumpulan karakter. 
String biasanya diapit oleh tanda kutip (""). Contohnya adalah "Hello, World!".

#Soal4
##Lengkapi Lengkapi Codingan Berikut:
# 	menu();
	tambah();
	kurang();
	kali();
	bagi();
	return 0;
}

#Jawaban : 
#include <iostream>
// Deklarasi fungsi
void menu();
void tambah();
void kurang();
void kali();
void bagi();
int main() {
    menu();  // Panggil fungsi menu
    return 0;
    "Pilih operasi:"
    "1. Tambah"
    "2. Kurang"
    "3. Kali"
    "4. Bagi"
    switch (pilihan) {
        case 1:
            tambah();  // Panggil fungsi tambah jika dipilih
            break;
        case 2:
            kurang();  // Panggil fungsi kurang jika dipilih
            break;
        case 3:
            kali();    // Panggil fungsi kali jika dipilih
            break;
        case 4:
            bagi();    // Panggil fungsi bagi jika dipilih
            break;
        default:
