#include <iostream>
#include <string>
using namespace std;

class Manusia{

    private:
        string nama;
        int umur;
    
    public:
        Manusia() {
            this->nama = "";
            this->umur = 0;
        }

        Manusia(int umur, string nama) {
            this->nama = nama;
            this->umur = umur;
        }

        Manusia(string nama, int umur) {
            this->nama = nama;
            this->umur = umur;
        }

        void setUmur(int umur) {
            this->umur = umur;
        }

        void setUmur(string umur) {
            this->umur = stoi(umur);
        }

        std::string toString() {
            return this->nama + ", " + std::to_string(this-> umur) + " tahun";
        }

};