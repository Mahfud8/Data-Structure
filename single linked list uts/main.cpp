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
    cout << "Data belakang ditambahkan\n";
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
        cout << endl;
    }
}
int main(){
    cout << "Tambah Node dari belakang" << endl;
    int pilih, dataBaru;
    awal();
    do {
        tampil();
        cout << "\n1.Input Data"
        <<"\n2. Keluar\n"
        <<"Silahkan input menu : ";
        cin >> pilih;
        switch (pilih){
            case 1:
                cout << "Masukan Data: ";
                cin >> dataBaru;
                tambahBelakang(dataBaru);
                break;
            default:
                break;
        }
    }while (pilih!=2);
}
