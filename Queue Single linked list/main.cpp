#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head, *tail;

void awal(){
    head = NULL;
}
bool isEmpty(){
    if(head == NULL){
        return true;
    }else{
        return false;
    }
}
void tambahBelakang(int dataBaru){
    Node *nodeBaru, *bantu;
    nodeBaru = new Node;
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    if (isEmpty()){
        head = nodeBaru;
        head->next = NULL;
    }else{
        bantu = head;
        while (bantu -> next != NULL){
            bantu = bantu -> next;
        }
        bantu -> next = nodeBaru;
    }
    cout << "Nomor antrian " << dataBaru << " ditambahkan\n";
}

void hapusDepan(){
    Node *hapus;
    int depan;
    if (!isEmpty()){
        if (head -> next != NULL){
            hapus = head;
            depan = hapus -> data;
            head = hapus -> next;
            delete hapus;
        }else{
            depan = head -> data;
            head = NULL;
        }
        cout << "Nomor Antrian " << depan << " Sudah dihapus" << endl;
    }else{
        cout << "Data kosong" << endl;
    }
}

void tampil(){
    if (!isEmpty()){
        Node *bantu;
        bantu = head;
        do{
            cout << bantu->data << " > ";
            bantu = bantu->next;
        }while(bantu!=NULL);
        cout << endl;
    }else{
        cout << "tidak ada data yang ditambahkan";
    }
}
int main(){
    cout << "------------------------------------" << endl;
    cout << "               Bank X               " << endl;
    cout << "------------------------------------";
    int pilih, dataBaru;
    awal();
    do {
        tampil();
        cout << "\n1. Input Data Antrian"
        <<"\n2. Hapus Data Antrian"
        <<"\n3. Keluar\n"
        <<"Silahkan input menu : ";
        cin >> pilih;
        switch (pilih){
            case 1:
                cout << "Masukan Data Antrian: ";
                cin >> dataBaru;
                tambahBelakang(dataBaru);
                break;
            case 2:
                hapusDepan();
                break;
            default:
                break;
        }
    }while (pilih!=3);
}
