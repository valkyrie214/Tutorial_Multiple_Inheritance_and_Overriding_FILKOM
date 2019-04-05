#include <iostream>
using namespace std;

class KelasA{
    public :
        void matkul(string siswa,string pel){
            cout << siswa <<" belajar " << pel << endl;
        }
        void sks(int jum){
            cout << "Jumlah SKSnya : " << jum << endl;
        }
};

class KelasB{
    public :
        void matkul(string siswa,string pel){
            cout << siswa << " belajar " << pel << endl;
        }
        void sks(int jum){
            cout << "Jumlah SKSnya : " << jum << endl;
        }
};
class KelasC : public KelasA,public KelasB{
    public:
        void matkul(string siswa,string pel1,string pel2){
            cout << siswa << " belajar "<< pel1 <<" dan "<< pel2 << endl;
        }
        void sks(int jum1,int jum2){
            cout << "Jumlah SKSnya : " << jum1 << " + " << jum2 << " = " << jum1+jum2 << endl;
        }
};

int main(){
    KelasA a;
    KelasB b;
    KelasC c;

    cout << "-------------------------------------------------------------" << endl;
    cout << "Kelas A :" << endl;
    a.matkul("Mustafa","Pemograman Lanjut");
    a.sks(4);
    cout << "-------------------------------------------------------------" << endl;
    a.matkul("Hamdan","Statistika");
    a.sks(3);
    cout << "-------------------------------------------------------------" << endl << endl;

    cout << "-------------------------------------------------------------" << endl;
    cout << "Kelas B :" << endl;
    b.matkul("Kamal","Basis Data Terapan");
    b.sks(3);
    cout << "-------------------------------------------------------------" << endl;
    b.matkul("Mirdas","Algoritma Struktur Data");
    b.sks(4);
    cout << "-------------------------------------------------------------" << endl << endl;

    cout << "-------------------------------------------------------------" << endl;
    cout << "Kelas C :" << endl;
    c.matkul("Ahmad","Pemograman Lanjut","Statistika");
    c.sks(5,3);
    cout << "-------------------------------------------------------------" << endl;
    c.matkul("Farhan","Basis Data Terapan","Algoritma Struktur Dasar");
    c.sks(3,4);
    cout << "-------------------------------------------------------------" << endl << endl;

    return 0;
}
