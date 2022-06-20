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

void tambahBelakang(int dataBaru){
     //Membuat node baru
    Node *nodeBaru;
    nodeBaru = new Node;

    //Bentuk node baru dengan data inputan
    nodeBaru->data = dataBaru;

    if (isEmpty()){
        //jika data kosong
        head = nodeBaru;

        head->next = head;
        head->prev = head;
        tail = head;

    }else{
        nodeBaru->next = head;
        nodeBaru->prev = tail;
        head->prev = nodeBaru;
        tail->next = nodeBaru;
        tail = nodeBaru;
    }
    cout << dataBaru << " Ditambahkan dibelakang" << endl;
}

void hapusBelakang(){
    Node *hapus;
    if(isEmpty()){
        cout << "Data masih kosong, Silahkan Diisi" << endl;
    }else{
        if(tail->prev != tail){
            hapus = tail;
            tail = tail->prev;
            tail->next = head;
            head->prev = tail;
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
        do{
            cout << "<- " << current->data << " ->";
            current = current->next;
        }while (current != head);
        cout << endl;
    } else {
        cout << "Data Kosong" << endl;
    }
}


int main(){
    cout << "-------------------------------------" << endl;
    cout << "           PT. Obat Manjur           " << endl;
    cout << "-------------------------------------" << endl;
    int pilih, dataBaru;
    awal();
   do {
        tampil();
        cout << "\n1.Input Data Obat "
        <<"\n2.Hapus Data Obat"
        <<"\n3.Keluar\n"
        <<"Silahkan input menu : ";
        cin >> pilih;
        switch (pilih){
            case 1:
                cout << "Masukan Data Nomor Obat : ";
                cin >> dataBaru;
                tambahBelakang(dataBaru);
                break;
                break;
            case 2:
                hapusBelakang();
                break;
            default:
                break;
        }
    }while (pilih!=3);

}
