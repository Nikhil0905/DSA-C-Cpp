#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a = 5;              //INTEGER
    int s = sizeof(a);
    cout <<"size of "<< a <<" is " << s << endl;

    char c = 'w';           //CHAR
    int t = sizeof(c);
    cout <<"size of "<< c <<" is " << t << endl;

    float f = 1.23;         //FLOAT
    int u = sizeof(f);
    cout <<"size of "<< f <<" is " << u << endl;

    double d = 1.12345;     //DOUBLE
    int v = sizeof(d);
    cout <<"size of "<< d <<" is " << v << endl;

    return 0;
}
