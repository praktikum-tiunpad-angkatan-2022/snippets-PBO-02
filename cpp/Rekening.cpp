#include <iostream>
#include <string>
using namespace std;

class Rekening {

    private:
        float money;
    
    public:
        float retrieveMoney() {
            // for retrieving money
            return this->money;
        }

        void setMoney(float amount) {
            // for setting money value
            this->money = amount;
        }
};