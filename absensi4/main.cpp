#include <iostream>


using namespace std;

struct siswa{
    string nama;
    int kelas;
    string mapel;
}absen [5];


int main(){
        for (int i=0;i<5;i++){
            cout<<"-------Absensi bimbel Merdeka-------"<<endl;
            //input
            cout<<"Siswa Ke-"<<i+1<<endl;
            cout<<"Masukan Nama :";
            cin>>absen[i].nama;
            cout<<"Masukan Kelas :";
            cin>>absen[i].kelas;
            cout<<"Masukan Mata pelajaran :";
            cin>>absen[i].mapel;
            //output
            cout<<"------------------------------------"<<endl;
            cout<<"Nama :"<<absen[i].nama<<endl;
            cout<<"Kelas :"<<absen[i].kelas<<endl;
            cout<<"Mata pelajaran :"<<absen[i].mapel<<endl;
            cout<<"Terimakasih sudah melakukan absensi"<<endl<<endl;
        }

    return 0;
}
