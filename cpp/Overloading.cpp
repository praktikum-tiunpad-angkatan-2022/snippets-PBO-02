#include "Manusia.cpp"
#include <iostream>

int main() {
    // beda konstruktor, tetap jadi objek manusia
    Manusia ujang = Manusia(20, "Ujang");
    Manusia udin = Manusia("Udin", 21);
    std::cout << ujang.toString() << std::endl;
    std::cout << udin.toString() << std::endl;

    std::cout << "---" << std::endl;
    // set umur, tapi beda jenis parameter
    ujang.setUmur("30");
    udin.setUmur(25);
    std::cout << ujang.toString() << std::endl;
    std::cout << udin.toString() << std::endl;
}