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
void tambahDepan(int dataBaru){
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
        head = nodeBaru;
    }
    cout << dataBaru << " Ditambahkan didepan" << endl;
}

void hapusDepan(){
    Node *hapus;
    if(isEmpty()){
        cout << "Data masih kosong,Silahkan Diisi" << endl;
    }else{
        if(head->next != head){
            hapus = head;
            head = head->next;
            tail->next = head;
            head->prev = tail;
        } else{
            hapus = head;
            head = NULL;
            tail = NULL;
        }

        cout << "Data Paling Depan Sudah Terhapus" << endl;
        delete hapus;
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
void tambahTengah(int posisi, int dataBaru){
    Node *nodeBaru, *current, *current2;

    nodeBaru = new Node;
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;
    bool indikator = false;

    current = head;

    int i;
    for (i=0; i<10; i++){
        if (current->data == posisi){
            indikator = true;
            break;
        }
        current = current->next;
    }

    if (isEmpty()){
        cout << "Data masih kosong,Silahkan diisi dengan input data depan" << endl;
    }else{
        if (indikator){
            current2 = current->next;
            nodeBaru->next = current2;
            nodeBaru->prev = current;

            current2->prev = nodeBaru;
            current->next = nodeBaru;
            cout << "Data " << dataBaru << " ditambahkan diantara " << current->data << " dan " << current2->data << endl;

            if (current2 == head){
                cout << "Data berada di head" << endl;
            } else if (current == tail){
                cout << "Data berada di tail" << endl;
            }else{
                cout << "Data tidak berada di head dan tail" << endl;
            }
        }else{
            cout << "Data tidak ditemukan" << endl;
        }
    }
}

void hapusTengah(int posisi){
    Node *hapus, *current, *current2;

    current = head;
    bool indikator = false;

    int i;
    for (i=0; i<10; i++){
        if (current->data == posisi){
            indikator = true;
            break;
        }
        current = current->next;
    }

    if (isEmpty()){
        cout << "Data masih kosong, Silahkan diisi dengan input data depan" << endl;
    }else{
        if (indikator){
            hapus = current;
            current2 = current->next;

            current = hapus->prev;

            current->next = current2;
            current2->prev = current;

            cout << posisi << " Sudah terhapus" << endl;
            delete hapus;
        }else {
            cout << "Data Tidak ditemukan" << endl;
        }
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
    cout << "     Double Linked List Circular     " << endl;
    cout << "-------------------------------------" << endl;
    int pilih, dataBaru;
    awal();
   do {
        tampil();
        cout << "\n1.Input Data Dapan"
        <<"\n2.Input Data Tengah"
        <<"\n3.Input Data Belakang"
        <<"\n4.Hapus Data Dapan"
        <<"\n5.Hapus Data Tengah"
        <<"\n6.Hapus Data Belakang"
        <<"\n7.Keluar\n"
        <<"Silahkan input menu : ";
        cin >> pilih;
        switch (pilih){
            case 1:
                tambahDepan(3);
                tambahDepan(5);
                tambahDepan(1);
                break;
            case 2:
                tambahTengah(5, 7);
                break;
            case 3:
                tambahBelakang(6);
                tambahBelakang(5);
                tambahBelakang(10);
                break;
            case 4:
                hapusDepan();
                break;
            case 5:
                hapusTengah(6);
                break;
            case 6:
                hapusBelakang();
                break;
            default:
                break;
        }
    }while (pilih!=7);

}
