#include <iostream>
#include "../child1/file1.cpp"
using namespace std;

int main() {
    File1 test = File1("Tes package!");
    cout << test.getData();
}


// TO RUN
// compile using "g++ File2.cpp -o File2" 
// then execute using ".\File2"


