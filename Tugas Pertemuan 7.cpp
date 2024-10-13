#include<iostream>
using namespace std;
int main()
{
    int nilai[5];
    int tertinggi;
    int periksa;
    int indeks=-1;

    cout<<"Masukkan 5 nilai: "<<endl;
    for(int i=0; i<5; i++){
        cout<<"Nilai ke -"<<i+1<<": ";
        cin>>nilai[i];
    }

    tertinggi=nilai [0];
    for(int i=1; i<5; i++){
        if(nilai [i]>tertinggi){
            tertinggi=nilai [i];
        }
    }
    cout<<"Nilai tertinggi adalah: "<<tertinggi<<endl;

    cout<<"Masukkan angka yang ingin diperiksa: ";
    cin>>periksa;
    for(int i=0; i<5; i++){
        if(nilai[i]==periksa){
            indeks=i;
            break;
        }
    }
    if(indeks !=-1) {
        cout<<"Angka "<<periksa<<" ditemukan di indeks "<<indeks<<endl;
    } else{
        cout<<"Angka "<<periksa<<" tidak ditemukan"<<endl;
        }
    return 0;
}
