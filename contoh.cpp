#include <iostream>
using namespace std;

class PersegiPanjang
{
    public: // akses modifier
    int panjang, lebar;

    public:
    
    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }

    Lingkaran ol;

};

    cout << "Masukkan Lebar : ";
    cin >> objekPP.lebar;
    cout << "Luas Persegi Panjang : " <<
    objekPP.LuasPp(objekPP.panjang, objekPP.lebar) << endl;
}
