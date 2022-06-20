#include <iostream>
#define MAX 6

using namespace std;

struct Queue{
    int top, bottom, data[MAX];
}Antrian;

void init(){
    Antrian.top = -1;
    Antrian.bottom = 0;
}

bool isEmpty(){
   if (Antrian.bottom == 0){
       return true;
    }else{
        return false;
    }
}

bool isFull(){
    if (Antrian.bottom == MAX){
        return true;
    }else{
        return false;
    }
}

void push(){
    if (isEmpty()==1){
        Antrian.top++;
        Antrian.bottom++;
        cout << "Masukan Nomor Antrian: ";
        cin >> Antrian.data[Antrian.bottom];
        cout << "Nomor Antrian " << Antrian.data[Antrian.bottom] << " Masuk ke Antrian" <<endl;
        cout << "===================================" <<endl;
    }else if (isFull()==0){
         Antrian.bottom++;
         cout << "Masukan Nomor Antrian: ";
        cin >> Antrian.data[Antrian.bottom];
        cout << "Nomor Antrian " << Antrian.data[Antrian.bottom] << " Masuk ke Antrian" <<endl;
        cout << "===================================" <<endl;
    }else{
        cout << "Antrian penuh" <<endl;
        }
}

void pop(){
    if (isEmpty()==0){
        for(int i=Antrian.top; i<Antrian.bottom; i++)
            Antrian.data[i] = Antrian.data[i+1];
            Antrian.bottom--;
            cout << Antrian.top[Antrian.data] << " keluar dari Antrian" <<endl;
            cout << "===================================" <<endl;
    }else{
        cout << "Antrian kosong" <<endl;
    }
}

void printSemua(){
    if(isEmpty()==1){
        cout << "===================================" <<endl;
        cout << "           lakumart             " <<endl;
        cout << "===================================" <<endl;
    }else{
        cout << "\nDaftar Antrian : ";
        for(int i=1; i<=Antrian.bottom; i++)
            cout << " " <<Antrian.data[i];
            cout << endl;
    }
}

int main(){
    int pilih;
    init();
    do {
        printSemua();
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
