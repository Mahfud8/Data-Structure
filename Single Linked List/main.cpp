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
    if (head == NULL){
        return true;
    }else{
        return false;
    }
}
void tambahDepan(int dataBaru){
    Node *nodeBaru;
    nodeBaru = new Node;
    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    if (isEmpty()==1){
        head = nodeBaru;
        head->next = NULL;
    }else{
        nodeBaru->next = head;
        head = nodeBaru;
    }
    cout << "Data depan ditambahkan\n";
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
    cout << "Data belakang ditambahkan\n";
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
        cout << "Data depan telah dihapus" << endl;
    }else{
        cout << "Data kosong" << endl;
    }
}
void hapusBelakang(){
    Node *hapus, *bantu;
    int tmp;
    if(!isEmpty()){
        if(head -> next != NULL){
            bantu = head;
            while (bantu -> next -> next != NULL){
                bantu = bantu -> next;
            }
            hapus = bantu -> next;
            tmp = hapus -> data;
            bantu -> next = NULL;
            delete hapus;
        }else{
            tmp = head -> data;
            head = NULL;
        }
        cout << "Data belakang sudah dihapus" << endl;
    }else{
        cout << "data kosong" << endl;
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
    cout << "------------------------------------" << endl;
    int pilih, dataBaru;
    awal();
    do {
        tampil();
        cout << "\n1.Input Data Depan"
        << "\n2.Hapus Data Depan"
        << "\n3.Input Data Belakang"
        << "\n4.Hapus Data Belakang"
        <<"\n5. Keluar\n"
        <<"Silahkan input menu : ";
        cin >> pilih;
        switch (pilih){
            case 1:
                cout << "Masukan Data depan : ";
                cin >> dataBaru;
                tambahDepan(dataBaru);
                break;
            case 2:
                hapusDepan();
                break;
            case 3:
                cout << "Masukan Data belakang : ";
                cin >> dataBaru;
                tambahBelakang(dataBaru);
                break;
            case 4:
                hapusBelakang();
                break;
            default:
                break;
        }
    }while (pilih!=5);
}
