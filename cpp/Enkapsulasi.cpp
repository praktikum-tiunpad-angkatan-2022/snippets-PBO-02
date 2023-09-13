#include <iostream>
#include "Rekening.cpp"

int main() {
    Rekening bca = Rekening();
    
    // bca.money;
    // bca.money = 1000000;
    // baris-baris diatas akan error karena mengakses private property

    // untuk mengakses money, diperlukan fungsi getter
    bca.retrieveMoney();
    std::cout << bca.retrieveMoney() << std::endl;

    // untuk mengubah isi money, diperlukan fungsi setter
    bca.setMoney(20000);
    std::cout << bca.retrieveMoney() << std::endl;

}