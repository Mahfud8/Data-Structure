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
void tambahData(int dataBaru){
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
    cout << dataBaru << " Data depan ditambahkan\n" ;
}

void tampil(){
    if (!isEmpty()){
        Node *bantu;
        bantu = head;
        int tumpukan[6], x=0, y;
        do{
            tumpukan[x] = bantu->data;
            bantu = bantu->next;
            x++;
        }while(bantu!=NULL);
        for (y=x-1; y>=0; y--)
            cout << tumpukan[y]<< " -> ";
        cout << endl;
    }else{
        cout << endl;
    }
}

int main(){
    //karena inputan harus integer
    tambahData(1);//a diganti 1
    tambahData(2);//b diganti 2
    tambahData(8);
    tambahData(90);
    tambahData(10);//x diganti 10
    tambahData(46);
    tampil();

    return 0;
}
