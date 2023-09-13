#include <iostream>
#include <string>
#include "child1/File1.cpp"
using namespace std;

int main() {
    File1* tes[5];

    for (int i = 0; i < 5; i++) {
        tes[i] = new File1("Ini tes ke-" + std::to_string(i));
    }

    for (int i = 0; i < 5; i++) {
        std::cout << tes[i]->getData() << std::endl;
    }
}

// TO RUN
// compile using "g++ Test.cpp -o Test" 
// then execute using ".\Test"
