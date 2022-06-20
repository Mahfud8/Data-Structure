#include <iostream>
#define n 10
using namespace std;

struct siUnyil{
    string nama;
    int nomor;
}namaTokoh[n];

struct queue{
    int awal, akhir;
}Queue;

void deQueue();
void menu();
void inQueue();
void tampil();

void init(){
    Queue.awal = -1;
    Queue.akhir = -1;
    cout << "Data berhasil di reset" << endl << endl;
    menu();
}

bool isFull(){
    if(Queue.akhir == n - 1){
        return true;
    } else {
        return false;
    }
}

bool isEmpty(){
    if(Queue.akhir == -1){
        return true;
    }else {
        return false;
    }
}

void inQueue(){
    if(!isFull()){
        string nama;
        int nomor;
        cout << "Masukkan Nama :";
        cin >> nama;
        cout << "Masukkan Nomor Antrian :";
        cin >> nomor;
        namaTokoh[Queue.akhir].nama = nama;
        namaTokoh[Queue.akhir].nomor = nomor;
        ++Queue.akhir;
        cout << endl;
        menu();
    }else {
        cout << "Data penuh";
        menu();
    }
}

void deQueue(){
    if(!isEmpty()){
        for(int i = Queue.awal; i < Queue.akhir; i++){
            namaTokoh[i].nama = namaTokoh[i+1].nama;
            namaTokoh[i].nomor = namaTokoh[i+1].nomor;
        }Queue.akhir--;
        cout << "Data berhasil dihapus" << endl;
        cout << endl;
        menu();
    }else{
        cout << "antrian kosong" << endl;
    }
}

void tampil(){
    if(!isEmpty()){
        for(int i = 0; i < Queue.akhir; i++){
        cout << "Nama : " << namaTokoh[i].nama << endl;
        cout << "Nomor Antrian : " << namaTokoh[i].nomor << endl;
        cout << endl;
        }
    }else {
        cout << "data kosong";
        cout << endl << endl;
    }
    menu();
}
void menu(){
    cout << "======================================" << endl;
    cout << "=======    Antrian Senbako     =======" << endl;
    cout << "======================================" << endl;
    int pilih;
    cout << "1. masukkan data\n";
    cout << "2. Hapus satu data\n";
    cout << "3. Reset data\n";
    cout << "4. tampil data\n";
    cout << "Masukkan pilihan anda:";
    cin >> pilih;
    cout << endl;
    if(pilih == 1){
        inQueue();
    }else if(pilih == 2){
        deQueue();
    } else if(pilih == 3){
        init();
    }else if(pilih == 4){
        tampil();
    }else {
        menu();
    }
}

int main(){
    menu();

    return 0;
}
