#include <iostream>
#define MAX 6

using namespace std;

struct Stack {
    int top, data[MAX];
}Tumpukan;

void init(){
    Tumpukan.top = -1;
}
bool isEmpty(){
    return Tumpukan.top == -1;
}
bool isFull(){
    return Tumpukan.top == MAX-1;
}
void push(){
    if (isFull()){
        cout << "\nTumpukan penuh" <<endl;
    }
    else {
        Tumpukan.top++;
        cout << "\nMasukan Nomor Absen = ";
        cin >> Tumpukan.data[Tumpukan.top];
        cout << "Nomor Absen " << Tumpukan.data[Tumpukan.top] << " Silahkan Tunggu " << endl;
        cout << "===============================" << endl;
    }
}
void pop(){
    if (isEmpty()){
        cout << "\nData kosong\n" <<endl;
    }
    else {
        cout << "\nNomor Absen " << Tumpukan.data[Tumpukan.top] << " Sudah Keluar" <<endl;
        Tumpukan.top--;
        cout << "===============================" << endl;
    }
}
void printStack(){
    if (isEmpty()){
        cout << "Antrian hafalan Al-Quran" <<endl;
        cout << "===============================" << endl;
    }
    else {
        cout << "\nTumpukan : ";
        for(int i=Tumpukan.top; i>=0; i--)
            cout << Tumpukan.data[i] << ((i == 0)? "" : ",");
    }
}
int main(){
    int pilih;
    init();
    do {
        printStack();
        cout << "\n1. Antrian Masuk"
        <<"\n2. Nomor Berikutnnya"
        <<"\n3. Keluar\n"
        <<"Silahkan input menu : ";
        cin >> pilih;
        switch (pilih){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        default:
            break;
        }
    }while (pilih!=3);
}
