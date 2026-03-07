#include <iostream>
using namespace std;

// CONTOH DENGAN REKURSIF
int fibonacci (int n){
    if (n == 1){
        return 0;
    }
    else if (n == 2){
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    // CONTOH TANPA REKURSIF
    // 0, 1, 1, 2, 3, 5, 8, 13,...
    int n = 8;
    int baris = 1;

    int skrg;
    int n_1;
    int n_2;

    while (baris <= n){
        if (baris == 1){
            skrg = 0;
        }
        else if (baris == 2){
            n_1 = skrg;
            skrg = 1;
        }
        else {
            n_2 = n_1;
            n_1 = skrg;
            skrg = n_1 + n_2;
        }
        baris++;
    }

    cout<<skrg<<endl;

    int hasil = fibonacci(8);
    cout<<"Angka fibonacci ke-8 adalah"<<hasil;
}