// Soal2_15-10-2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*

    Muhammad Idham Ma'arif
    Teknik Komputer B
    245150300111024

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool ketemu = false;                                    //inisialisasi boolean untuk menandakan apakah kata ketemu

vector<int> cariKarakter(char& ch, string& kata) {      //inisialisasi fungsi cariKarakter dengan pass by Reference
    int len = kata.length();                            //inisialisasi panjang karakter
    vector<int> index;                                  //membuat vector dengan tupe integer bernama index
    for (int i = 0; i < len; i++) {                     //melakukan pengulangan setiap karakter pada string
        if (ch == kata[i]) {                            //cek apakah karakter sama dengan string
            index.push_back(i);                         //masukkan index karakter yang ketemu pada vector index
            ketemu = true;                              //ubah boolean ketemu menjadi true
        }
    }
    return index;                                       //kembalikan vector index
}

int main() {                                            //fungsi main
    string kalimat;                                     //deklarasi kalimat
    char ch;                                            //deklarasi karakter yang akan dicari
    cout << "Masukkan Sebuah Kalimat: ";                
    getline(cin, kalimat);                              //menerima input string
    cout << "Cari Sebuah Karakter Dalam Kalimat: ";
    cin >> ch;                                          //menerima input karakter
    vector<int> index = cariKarakter(ch, kalimat);      //lakukan fungsi untuk kalimat dan ch
    if (!ketemu) {                                      //cek jika karakter tidak ketemu
        cout << "-1";       
    }
    else {
        cout << "Karakter Ditemukan Dalam Index: ke-";
        for (const int& i : index) {                    //print dengan iterator
            if (i == index[0]) {
                cout << i;
            }
            else {
                cout << ", ke-" << i;
            }
        }        
    }

    
    return 0;
}

