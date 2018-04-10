//
// Created by DongjianPeng on 2018/4/8/0008.
//

#include <iostream>
using namespace std;

const double PI = 3.14159265;
extern const double E;

int main()
{
    cout << "Hello World" << "ddd" << endl << "ff" << &"dd";

    double *p;
    p = new double[2];

    cin >> *(p+1);

    cout << *(p+1);

    delete p;

    return 0;
}


