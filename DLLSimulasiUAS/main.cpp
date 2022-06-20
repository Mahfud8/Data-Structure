#include <iostream>

using namespace std;

struct Node{
    int data;
    string dataString;
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
        nodeBaru->prev = tail;
        tail->next = nodeBaru;
        tail = nodeBaru;
    }
    cout << dataBaru << " Ditambahkan dibelakang" << endl;
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
    tambahBelakang(1);//a diganti 1
    tambahBelakang(2);//b diganti 2
    tambahBelakang(8);
    tambahBelakang(90);
    tambahBelakang(10);//x diganti 10
    tambahBelakang(46);
    tampil();

    return 0;
}
