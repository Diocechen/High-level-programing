#include <iostream>
using namespace std;

class myClass
{
    public:
    void myMethod()
    {
        cout << "Hello C++";
    }
};

int main()
{
    myClass myObj;
    myObj.myMethod();
    return 0;
}
