#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i=1, jml;
    string  Nama, Nim, grade;
    cout << "Masukan Nama: ";
    cin >> Nama;
    cout << "Masukan Nim: ";
    cin >> Nim;
    cout << "Ingin mencetak berapa kali : ";
    cin >> jml;
    cout << "----------Mencetak Nama dan Nim----------" <<endl;

    for(int i = 0; i < jml; i++){
        cout<<"Nama : "<< Nama <<endl;
        cout<<"Nim : "<< Nim <<endl<<endl;
    }

//    while (i <= jml){
//        cout<<"Nama : "<< Nama <<endl;
//        cout<<"Nim : "<< Nim <<endl<<endl;
//        i++;
//    }

    return 0;
}

