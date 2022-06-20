#include <iostream>
#include <cstring>

using namespace std;
//aritmatika C++
//int main()
//{
//    int a,b;
//    float x;
//    char c1[20]="selamat ";
//    char c2[20]="menghitung";
//    strcat(c1,c2);
//    cout<<c1<<endl;
//    x=2;
//    cout << "masukan a = ";
//    cin >> a;
//    cout << "masukan b = ";
//    cin >> b;
//    cout << a<<"+"<<b<<"="<< a+b << endl;
//    cout << a<<"-"<<b<<"="<< a-b << endl;
//    cout << a<<"*"<<b<<"="<< a*b << endl;
//    cout << a<<"/"<<b<<"="<< a/b << endl;
//    cout << a<<"%"<<b<<"="<< a%b << endl;
//    return 0;
//}
//
//// If else C++
//int main()
//{
//    int a,b;
//    cout << "masukan a = ";
//    cin >> a;
//    cout << "masukan b = ";
//    cin >> b;
//    if (a>b){
//        cout << "a lebih besar dari b";
//    }
//    else if (a==b){
//        cout << "a sama dengan b";
//    }
//    else {
//        cout << "b lebih besar dari a";
//    }
//    return 0;
//}

// looping C++
int main()
{
    int a,b;
    cout << "masukan a = ";
    cin >> a;
    cout << "masukan b = ";
    cin >> b;
    for(a=1; a<10; a++){
        cout << a << endl;
    }
    while(a< 20){
        cout << a << endl;
        a++;
    }
    return 0;
}
