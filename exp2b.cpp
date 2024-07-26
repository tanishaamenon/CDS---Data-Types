#include <iostream>
using namespace std;
int main()
{
    int num1 = 1;
    register int num2 = 4;
    static int num3 = 5;
    extern int a;
    cout<<"Size of auto integer: "<<sizeof(num1)<<" bytes"<<endl;
    cout<<"Size of register integer: "<<sizeof(num2)<<" bytes"<<endl;
    cout<<"Size of static int: "<<sizeof(num3)<<" bytes"<<endl;
    cout<<"Size of extern int: "<<sizeof(a)<<" bytes"<<endl;

    return 0;
}

/*
Output:
Size of auto integer: 4 bytes
Size of register integer: 4 bytes
Size of static int: 4 bytes
Size of extern int: 4 bytes
*/
