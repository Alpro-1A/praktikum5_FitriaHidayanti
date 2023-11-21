#include <iostream>

using namespace std;


void bilanganGanjil(int batas, int &jumlahGanjil){
        cout << "Bilangan Ganjil : ";
        for (int j = 1; j <= batas; ++j){
            if (j % 2 != 0) cout << j << " ";
            if (j % 2 != 0)jumlahGanjil += j;
        }   cout << endl;
    }


    void bilanganGenap (int batas, int &jumlahGenap){
        cout << "Bilangan Genap : ";
        for (int k = 1; k <= batas; ++k){
                if (k % 2 == 0) cout << k << " ";
                if (k % 2 == 0) jumlahGenap += k;
        } cout << endl;
    }


    void bilanganPrima (int batas, int &jumlahPrima){
        cout << "Bilangan Prima : ";
        for (int i = 2; i <= batas; ++i){
        int prima = 1;
        for (int j = 2; j*j <= i; j++){
            if (i*j == 0){
                prima = 0;
                break;
                }
        }
        if (prima == 1){
            cout << i << " ";
            jumlahPrima += 1;
            }
        } cout << endl;
    }

    void faktorGanjil (int jumlahGanjil){
    cout << "Faktor-Faktor dari Bilangan Ganjil adalah : ";
    for (int j = 1; j <= jumlahGanjil; j++){
        if (jumlahGanjil % j == 0){
            cout << j << " ";
        }
    }
    cout << endl;
}

    void faktorGenap (int jumlahGenap){
        cout << "Faktor-Faktor dari Bilangan Genap adalah : ";
        for (int k = 1; k <= jumlahGenap; k++){
            if (jumlahGenap % k == 0){
                cout << k << " ";
            }
        }
    cout << endl;
    }

    void faktorPrima (int jumlahPrima){
        cout << "Faktor-Faktor dari Bilangan Prima adalah : ";
        for (int i = 1; i <= jumlahPrima; i++){
            if (jumlahPrima % i == 0){
                cout << i << " ";
            }
        }
    cout << endl;
    }


int main(){
    int batas;
    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    cout << "Program Bilangan Ganjil, Genap, dan Prima" << endl;
    cout << "Masukkan batas bilangan akhir: ";
    cin >> batas;


    bilanganGanjil (batas, jumlahGanjil);
    bilanganGenap (batas, jumlahGenap);
    bilanganPrima (batas, jumlahPrima);

    cout << "Jumlah Bilangan Ganjil : " << jumlahGanjil << endl;
    cout << "Jumlah Bilangan Genap : " << jumlahGenap << endl;
    cout << "Jumlah Bilangan Prima : "<< jumlahPrima << endl;


    faktorGanjil (jumlahGanjil);
    faktorGenap (jumlahGenap);
    faktorPrima (jumlahPrima);

    return 0;
}
