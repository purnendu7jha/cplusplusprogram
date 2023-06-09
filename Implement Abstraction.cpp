#include <iostream>
using namespace std;

class implementAbstraction {
    private:
    int a,b;

    public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }

    void display()
    {
        cout << "a = " << a <<
        cout << "b = " << b <<
    }
};

int main()
{
    implementAbstraction obj;
    obj.set(10,20);
    obj.display();
    return 0;
}
}