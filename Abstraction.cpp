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
        cout << "a = " << a << end1;
        cout << "b = " << b << end1;
    }
};

int  main()
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}
