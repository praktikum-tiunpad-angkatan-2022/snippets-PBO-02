#include <iostream>
#include <string>
using namespace std;

class File1 {

    public:
        string data;

        File1(string data)  {
            this->data = data;
        }

        string getData() const {
            return data;
        }

        void setData(string data) {
            this->data = data;
        }
};

