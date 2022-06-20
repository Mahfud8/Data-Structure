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
    cout << "Tambah Node dari depan" << endl;
    int pilih, dataBaru;
    awal();
    do {
        tampil();
        cout << "\n1.Input Data Depan"
        <<"\n2. Keluar\n"
        <<"Silahkan input menu : ";
        cin >> pilih;
        switch (pilih){
            case 1:
                cout << "Masukan Data depan : ";
                cin >> dataBaru;
                tambahDepan(dataBaru);
                break;
            default:
                break;
        }
    }while (pilih!=2);
}
