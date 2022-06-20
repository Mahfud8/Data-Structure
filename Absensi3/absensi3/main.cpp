#include <iostream>

using namespace std;

    struct mhs{
    string nama;
    string nim;
    string kelas;
    string jurusan;
    };

int main(){
    mhs mahasiswa[2];

    mahasiswa[0].nama = "Muhammad Mahfud";
    mahasiswa[0].nim = "A11.2020.13018";
    mahasiswa[0].kelas = "A11.4319";
    mahasiswa[0].jurusan = "Teknik Informatika";

    mahasiswa[1].nama = "Muhammad Mahfud";
    mahasiswa[1].nim = "A11.2020.13018";
    mahasiswa[1].kelas = "A11.4319";
    mahasiswa[1].jurusan = "Teknik Informatika";

    cout << "Biodata Mahasiswa" << endl;
    cout << endl;
    cout << "Nama :" << mahasiswa[0].nama << endl;
    cout << "NIM :" << mahasiswa[0].nim << endl;
    cout << "Kelas :" << mahasiswa[0].kelas << endl;
    cout << "Jurusan :" << mahasiswa[0].jurusan << endl;
    cout << endl;
    cout << "Nama :" << mahasiswa[1].nama << endl;
    cout << "NIM :" << mahasiswa[1].nim << endl;
    cout << "Kelas :" << mahasiswa[1].kelas << endl;
    cout << "Jurusan :" << mahasiswa[1].jurusan << endl;

    return 0;
}
