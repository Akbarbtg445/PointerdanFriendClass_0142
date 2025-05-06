#include<iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk ="<< nim<< endl;
    }
};

int main(){
    mahasiswa mhs{1};//object mhs
    mhs.showNim();// Member Acses Oprator

    mahasiswa &refMhs =mhs; // Pointer References refMhs
    refMhs.nim = 2; // Member Acses Oprator
    mhs.showNim();

    mahasiswa  *pMhs = &mhs; // pointer Derefrence pMhs
    pMhs ->nim =3; // Arrow Oprator
    pMhs ->showNim();
    return 0;
};