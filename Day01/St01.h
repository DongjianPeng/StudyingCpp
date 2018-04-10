//
// Created by DongjianPeng on 2018/4/8/0008.
//

#ifndef PROJECT_ST01_H
#define PROJECT_ST01_H


#include <ostream>

class St01 {

public:
    St01();

    virtual ~St01();

    friend ostream &operator<<(ostream &os, const St01 &st01);

private:
    int max(int a,int b);
    int max(int a,int b,int c);
};


#endif //PROJECT_ST01_H
