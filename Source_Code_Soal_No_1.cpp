// Soal1_15-10-2024.cpp : This file contains the 'main' function. Program execution begins and ends there.


/*

    Muhammad Idham Ma'arif
    Teknik Komputer
    245150300111024

*/


#include <iostream>
#include <numbers>
#include <cmath>
using namespace std;

void luas_persegi() {
    int sisi;
    cout << "\nMasukkan Panjang Sisi: ";
    cin >> sisi;
    while (sisi <= 0) {
        cout << "\nMasukkan Sisi Positif: ";
        cin >> sisi;
    }
    cout << "\nLuas Persegi adalah " << sisi * sisi << endl;
}

void luas_persegi_panjang() {
    int length, height;
    cout << "\nMasukkan Panjang Persegi Panjang: ";
    cin >> length;   
    cout << "Masukkan Tinggi Persegi Panjang: ";
    cin >> height;
    while (height <= 0 || length <= 0) {
        cout << "\nMasukkan Panjang dan Tinggi Positif \n";
        cout << "Masukkan Panjang Persegi Panjang : ";
        cin >> length;
        cout << "Masukkan Tinggi Persegi Panjang: ";
        cin >> height;
    }
    cout << "\nLuas Persegi Panjang Adalah: " << length * height << endl << endl;
}

void luas_lingkaran() {
    int radius;
    const float pi = 3.14159;
    cout << "\nMasukkan Radius Lingkaran: ";
    cin >> radius;
    while (radius <= 0) {
        cout << "\nMasukkan Radius Positif: ";
        cin >> radius;
    }
    cout << "\nLuas Lingkaran Adalah: " << pi * radius * radius << endl << endl;
}

void pangkat() {
    int x, n;
    cout << "\nMasukkan Nilai X: ";
    cin >> x;
    cout << "\nMasukkan Nilai N: ";
    cin >> n;
    cout << "\nX pangkat N adalah: " << pow(x, n) << endl;
}

void average() {
    int panjang;
    float total = 0;
    cout << "\nMasukkan Jumlah Angka: ";
    cin >> panjang;
    for (int i = 0; i < panjang; i++) {
        float tmp;
        cout << "\nMasukkan Angka ke-" << i + 1 << ": ";
        cin >> tmp;
        total += tmp;
    }
    cout << "\nRata-Rata Angka Adalah: " << total / panjang << endl;
}

int main() {
    
    int n;
    cout << "Masukkan Operasi yang Ingin Dipilih " << endl;
    cout << "1. Luas Persegi\n";
    cout << "2. Luas Persegi Panjang\n";
    cout << "3. Luas Lingkaran\n";
    cout << "4. X pangkat N\n";
    cout << "5. Nilai rata-rata dari n-bilangan\n";

    cout << "\nMasukkan Pilihan Operasi: ";
    do {
        cin >> n;
        if (!(n >= 1 && n <= 5)) {
            cout << "\nMasukkan Pilihan Operasi dari 1-5";
        }
    } while (!(n >= 1 && n <= 5));

    switch (n) {
        case 1:
            luas_persegi();
            break;
        case 2:
            luas_persegi_panjang();
            break;
        case 3:
            luas_lingkaran();
            break;
        case 4:
            pangkat();
            break;
        case 5:
            average();
            break;
    }
    
    return 0;
}
