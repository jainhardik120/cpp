#include <iostream>

using namespace std;

void fun(int* p){
    int* origRef = p;
    p = new int();
    *p = 20;
    // p = origRef;
    *p = 30;
}

int main()
{
    int x = 10;
    int *p = &x;

    fun(p);

    cout << "x = " << x << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

    return 0;
}