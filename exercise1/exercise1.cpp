#include <iostream>
#include <string>

using namespace std;

const int Nama = 20; 
const int Nilai = 2;

int main() {
    string nama[Nama]; 
    float nilai[Nama][Nilai]; 
    float rata[Nama]; 
    int pilihan;


    for (int i = 0; i < Nama; i++) {
        cout << "Nilai 1 = Matematika dan Nilai 2 = Bhs Inggris" << endl;
        cout << "Masukkan Nama " << i + 1 << ": ";
        getline(cin, nama[i]);

        for (int j = 0; j < Nilai; j++) {
            cout << "Masukkan Nilai " << j + 1 << " Untuk " << nama[i] << ": ";
            cin >> nilai[i][j];
        }


        cin.ignore();
    }



    for (int i = 0; i < Nama; i++) {
        float sum = 0;

        for (int j = 0; j < Nilai; j++) {
            sum += nilai[i][j];
        }

        rata[i] = (sum + Nilai) /2 ;
    }
        

    do {
        cout << "Ingin menunjukan nilai?(1 = iya, 2 = tidak) \n";
        cin >> pilihan;
    switch (pilihan) {
    case 1:

        cout << "Nama  Nilai  Status";
        for (int i = 0; i < Nama; i++) {
            cout << nama[i] << nilai [i][0] << rata[i] << endl;
            cout << endl;
        
        }
    case 2:
        cout << "Nama  Status";
        for (int i = 0; i < Nama; i++) {
            cout << nama[i] << rata[i] << endl;
            cout << endl;
         
        }
    case 3:
        break;
    }
} while (pilihan != 3);