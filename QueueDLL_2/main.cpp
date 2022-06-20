#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

Node *head, *tail;

void awal(){
    head = NULL;
    tail = NULL;
}
bool isEmpty(){
    if (head == NULL){
        return true;
    }else{
        return false;
    }
}

//sebagai Push
void tambahDepan(int dataBaru){
    //Membuat node baru
    Node *nodeBaru;
    nodeBaru = new Node;

    //Bentuk node baru dengan data inputan
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;
    if (isEmpty()){
        //jika data kosong
        head = nodeBaru;
        tail = nodeBaru;

        head->next = NULL;
        head->prev = NULL;

        tail->next = NULL;
        tail->prev = NULL;
    }else{
        nodeBaru->next = head;
        head->prev = nodeBaru;
        head = nodeBaru;
    }
    cout << dataBaru << " Ditambahkan didepan" << endl;
}

//Sebagai Pop
void hapusBelakang(){
    Node *hapus;
    if(isEmpty()){
        cout << "Data masih kosong, Silahkan Diisi" << endl;
    }else{
        if(head->next != NULL){
            hapus = tail;
            tail = tail->prev;
            tail->next = NULL;
        }else{
            hapus = head;
            head = NULL;
            tail = NULL;
        }
        cout << "Data Paling Belakang Sudah Terhapus" << endl;
        delete hapus;
    }
}

void tampil(){
    Node *current;

    current = head;
    if(!isEmpty()){
        while(current != NULL){
            cout << "<- " << current->data << " ->";
            current = current->next;
        }
        cout << endl;
    } else {
        cout << "Data Kosong" << endl;
    }
}

int main(){
    cout << "-------------------------------------" << endl;
    cout << "     Queue 2 Double Linked List      " << endl;
    cout << "-------------------------------------" << endl;
    int pilih, dataBaru;
    awal();
   do {
        tampil();
        cout << "\n1.Input Data Depan"
        <<"\n2.Hapus Data Belakang"
        <<"\n3.Keluar\n"
        <<"Silahkan input menu : ";
        cin >> pilih;
        switch (pilih){
            case 1:
                cout << "Masukan Data : ";
                cin >> dataBaru;
                tambahDepan(dataBaru);
                break;
            case 2:
                hapusBelakang();
                break;
            default:
                break;
        }
    }while (pilih!=3);
}
