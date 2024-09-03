//Program to implement nested classes
#include <iostream>
using namespace std;

class Outer {
private:
    int outerData;

public:
    class Inner {
    private:
        int innerData;

    public:
        void setInnerData(int value) {
            innerData = value;
        }

        int getInnerData() const {
            return innerData;
        }
    };

    void setOuterData(int value) {
        outerData = value;
    }

    int getOuterData() const {
        return outerData;
    }

    void displayInnerData(const Inner& innerObj) {
        cout << "Inner Data: " << innerObj.getInnerData() << endl;
    }
};

int main() {
    Outer outerObj;
    Outer::Inner innerObj;

    outerObj.setOuterData(10);
    innerObj.setInnerData(20);

    cout << "Outer Data: " << outerObj.getOuterData() << endl;
    outerObj.displayInnerData(innerObj);

    return 0;
}