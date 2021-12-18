#include <iostream>
using namespace std;

class base
{

private:
    int data1;

public:
    int data2;

    void setdata();
    int getdata1();
    int getdata2();
};

class derived : private base
{

private:
    int data3;

public:
    void process();
    void display();
};

void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1()
{

    return data1;
}

int base ::getdata2()
{

    return data2;
}

void derived ::process()
{

    setdata();
    data3 = data2 * getdata1();
}

void derived ::display()
{

    cout << "The value of data1 is : " << getdata1() << endl;
    cout << "The value of data2 is : " << data2 << endl;
    cout << "The value of data3 is : " << data3 << endl;
}

int main()
{

    derived der;

    der.process();
    der.display();

    return 0;
}
