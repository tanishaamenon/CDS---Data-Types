#include <iostream>
using namespace std;
int main()
{
    int a;
    char b;
    short int c;
    long int d;
    float e;
    double f;
    wchar_t g;
    signed short int h;
    unsigned short int i;
    signed long int j;
    unsigned long int k;
    long long int l;
    unsigned long long int m;
    long double n;
    cout<<"Size of integer: "<<sizeof(a)<<" bytes"<<endl;
    cout<<"Size of character: "<<sizeof(b)<<" byte"<<endl;
    cout<<"Size of short int: "<<sizeof(c)<<" bytes"<<endl;
    cout<<"Size of long int: "<<sizeof(d)<<" bytes"<<endl;
    cout<<"Size of float: "<<sizeof(e)<<" bytes"<<endl;
    cout<<"Size of double: "<<sizeof(f)<<" bytes"<<endl;
    cout<<"Size of wide character: "<<sizeof(g)<<" bytes"<<endl;
    cout<<"Size of signed short int: "<<sizeof(h)<<" bytes"<<endl;
    cout<<"Size of unsigned short int: "<<sizeof(i)<<" bytes"<<endl;
    cout<<"Size of signed long int: "<<sizeof(j)<<" bytes"<<endl;
    cout<<"Size of unsigned long int: "<<sizeof(k)<<" bytes"<<endl;
    cout<<"Size of long long int: "<<sizeof(l)<<" bytes"<<endl;
    cout<<"Size of unsigned long long int: "<<sizeof(m)<<" bytes"<<endl;
    cout<<"Size of long double: "<<sizeof(n)<<" bytes"<<endl;
    return 0;

}