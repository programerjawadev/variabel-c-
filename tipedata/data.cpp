#include <iostream>      // Header untuk input-output standar (cout, cin, dll)
#include <limits>        // Header untuk mengetahui batas nilai maksimum/ minimum tipe data
using namespace std;     // Supaya kita bisa menulis cout, cin, dll tanpa awalan std::

int main() {
    // Bilangan bulat
    int a = 5;           // Tipe data int, menyimpan bilangan bulat, contoh: 5
    long b = 6;          // Tipe data long, bisa menyimpan bilangan bulat lebih besar dari int
    short c = 7;         // Tipe data short, kapasitasnya lebih kecil dari int

    // Bilangan desimal
    float d = 9.2f;      // Tipe data float, menyimpan bilangan desimal, perlu 'f' di akhir
    double e = 8.3;      // Tipe data double, menyimpan bilangan desimal dengan presisi lebih tinggi dari float

    // Karakter
    char f = 's';        // Tipe data char, hanya menyimpan 1 karakter (tunggal), harus diapit tanda kutip satu

    // Boolean (nilai benar/salah)
    bool g = true;       // Tipe data bool, hanya punya dua nilai: true (benar) atau false (salah)

    // Menampilkan nilai dan ukuran (dalam byte) dari setiap variabel
    cout << "int a = " << a << " (" << sizeof(a) << " byte)" << endl;
    cout << "long b = " << b << " (" << sizeof(b) << " byte)" << endl;
    cout << "short c = " << c << " (" << sizeof(c) << " byte)" << endl;
    cout << "float d = " << d << " (" << sizeof(d) << " byte)" << endl;
    cout << "double e = " << e << " (" << sizeof(e) << " byte)" << endl;
    cout << "char f = " << f << " (" << sizeof(f) << " byte)" << endl;
    cout << "bool g = " << g << " (" << sizeof(g) << " byte)" << endl;

    // Menampilkan nilai maksimum yang bisa ditampung oleh tipe unsigned int
    cout << "Max unsigned int: " << numeric_limits<unsigned int>::max() << endl;

    cin.get();  // Menahan program agar tidak langsung tertutup (menunggu input Enter)
    return 0;   // Menandakan program selesai dijalankan tanpa error
}
