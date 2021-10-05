#include <iostream>
using namespace std;

int main(){
    

    cout << "tugas 1 \n";
    int i;

    cout << "tugas 1.if-else \n";

    cout << "Makanan apa yang anda suka? \n 1. Ayam Goreng \n 2. Bebek Goreng\n 3. Lele Goreng\n Pilih = ";
    cin >> i;

    if (i == 1){
        cout << "Ayam Goreng \n";
    } else if (i == 2)
    {
        cout << "bebek goreng \n";
    } else if (i == 3)
    {
        cout << "lele goreng \n";
    } else {
        cout << "tidak suka semua \n";
    }

    cout << "tugas 1.switch-case \n";

    cout << "Makanan apa yang anda suka? \n 1. Ayam Goreng \n 2. Bebek Goreng\n 3. Lele Goreng\n Pilih = ";
    cin >> i;

    switch (i)
    {
    case 1:
        cout << "Ayam goreng \n";
        break;
    case 2:
        cout << "Bebek goreng \n";
        break;
    case 3:
        cout << "Lele goreng \n";
        break;
    default:
        cout << "Tidak Suka Semua\n";
        break;
    }

    cout << "tugas 2\n";
    int umur, status;

    cout << "tugas 2.if-else\n";
    cout << "Berapakah umur anda? ";
    cin >> umur;

    if (umur >= 18)
    {
        cout << "Apakah anda sudah terdaftar?\n ketik 1 apabila sudah dan 2 apabila belum\n";
        cin >> status;
        if (status == 1)
        {
            cout << "Anda berhak memilih\n";
        }else{
        cout << "Anda belum terdaftar\n";
        }
        
    }else{
    cout << "Anda belum berhak memilih \n";
    }

    cout << "tugas 2.switch-case\n";
    cout << "apakah umur anda sudah 18 tahun keatas?\n 1. sudah\n 2. belum\n";
    cin >> umur;

    switch (umur)
    {
    case 1:
        cout << "Apakah anda sudah terdaftar?\n ketik 1 apabila sudah dan 2 apabila belum\n";
        cin >> status;
        switch (status)
        {
        case 1:
            cout << "Anda berhak memilih\n";
            break;
        default:
            cout << "Anda belum terdaftar\n";
            break;
        }
        break;
    
    default:
        cout << "Anda belum berhak memilih\n";
        break;
    }

    


}