#include <iostream>

using namespace std;

int main()
{
    // * melihat data dari memory
    // & melihat memory
    int panjang = 20;
    int *alamatpanjang = &panjang;

    cout << "isi data divariable panjang " << panjang << endl;
    cout << "latak alamat memory variable panjang " << &panjang << endl;
    cout << "latak alamat memory variable panjang " << alamatpanjang << endl;

    cout << "isi data dari alamat memory variable panjang " << *alamatpanjang << endl;
    return 0;
}
