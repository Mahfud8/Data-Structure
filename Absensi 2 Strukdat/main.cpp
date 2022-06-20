#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int nilai;
    string  Nama, Nim, grade;
    cout << "Masukan Nama: ";
    cin >> Nama;
    cout << "Masukan Nim: ";
    cin >> Nim;
    cout << "=== Program Grade Nilai ===" << endl;
    cout << "Inputkan nilai akhir: ";
    cin >> nilai;

//     //kondisi menggunakan percabangan if/esle/if
//    if (nilai >= 85) {
//        grade = "A";
//        cout << "Luar biasa!" << endl;
//    }  else if (nilai >= 70) {
//        grade = "B";
//        cout << "Bagus!" << endl;
//    } else if (nilai >= 50) {
//        grade = "C";
//        cout << "Cukup bagus!" << endl;
//    } else if (nilai >= 40) {
//        grade = "D";
//        cout << "Anda lulus" << endl;
//    } else if (nilai >= 30) {
//        grade = "E";
//        cout << "Anda remidi" << endl;
//    } else if (nilai>=0){
//        grade = "F";
//        cout << "Anda remidi" << endl;
//    } else {
//        grade = "-";
//        cout << "Nilai Salah!" << endl;
//
//    }

    //Kondisi menggunakan Switch case
    switch (nilai){
        case 85 ... 100:
            grade = "A";
            cout << "Luar biasa!" << endl;
            break;
        case 70 ... 84:
            grade = "B";
            cout << "Bagus!" << endl;
            break;
        case 50 ... 69:
             grade = "C";
            cout << "Cukup bagus!" << endl;
            break;
        case 40 ... 49:
            grade = "D";
            cout << "Anda lulus" << endl;
            break;
        case 30 ... 39:
            grade = "E";
            cout << "Anda remidi" << endl;
            break;
        case 0 ... 29:
            grade = "F";
            cout << "Anda remidi" << endl;
            break;
        default:
            grade = "-";
            cout << "Nilai Salah!" << endl;
    }
    cout << "Grade anda: " << grade << endl;
    return 0;
}

