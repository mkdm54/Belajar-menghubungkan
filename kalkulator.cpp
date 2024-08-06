#include <iostream>

using namespace std;

float result(float pertama, float kedua, char operation)
{
    switch (operation)
    {
    case '+':
        return pertama + kedua;
    case '-':
        return pertama - kedua;
    case '*':
        return pertama * kedua;
    case '/':
        if (kedua == 0)
        {
            cerr << "Error: Cannot divide by zero.\n";
            return 1;
        }
        else
        {
            return pertama / kedua;
        }
    default:
        cerr << "Opsi tidak tersedia\n";
        return 1;
    }
}

int main()
{
    float pertama, kedua;
    char operation;
    char ulang;

    do
    {
        cout << "Masukkan angka pertama: ";
        cin >> pertama;
        cout << "Masukkan operasi: ";
        cin >> operation;
        cout << "Masukkan angka kedua: ";
        cin >> kedua;

        float hasil = result(pertama, kedua, operation);
        if (hasil == 1 && operation == '/')
        {
            cout << "Hasil: " << hasil << endl;
        }
        else
        {
            cout << "Hasil: " << hasil << endl;
        }

        cout << "Apakah ingin mengulang (y/n)? ";
        cin >> ulang;
        if (ulang == 'y')
        {
            break;
        }
        else if (ulang == 'n')
        {
            cout << "Terima kasih" << endl;
        }
        else
        {
            cout << "Opsi tidak tersedia" << endl;
        }
    } while (ulang == 'y');

    return 0;
}