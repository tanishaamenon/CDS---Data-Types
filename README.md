# Experiment - 2
**Aim:** <br>
To study and implement C++ Program Structure (Data Types)<br>
<br>
**Objectives** <br>
a. To check the size of various data types.<br>
b. To check whether size of a datatype varies with different data types.<br>
<br>
**Theory:** <br>
Data types are the building blocks of variable declarations. The primary data types include integers (int), floating-point numbers (float, double), characters (char), and booleans (bool). Other than the basic few there are long and short int, signed and unsigned integer, long long integer and long double. Each of these types will have different memory aizes to store data.<br>
<br>
Storage classes in C++ helps us understand the lifespan, visibility, and memory location of variables. They include auto, register, static, extern, and mutable. 
*auto* - a variable's type automatically. <br>
*register* - the compiler to store the variable in a CPU register for quick access. <br>
*static* - retain their value between function calls and are confined to the file scope when declared outside functions. <br>
*extern* - the visibility of variables or functions to multiple files.<br>
*mutable* - a member of an object to alter its value whether or not it is a constant (const) on not.<br>
<br>
**Code:** <br>
a. <br>
*#include <iostream> <br>
using namespace std;<br>
int main()<br>
{<br>
    int a;<br>
    char b;<br>
    short int c;<br>
    long int d;<br>
    float e;<br>
    double f;<br>
    wchar_t g;<br>
    signed short int h;<br>
    unsigned short int i;<br>
    signed long int j;<br>
    unsigned long int k;<br>
    long long int l;<br>
    unsigned long long int m;<br>
    long double n;<br>
    cout<<"Size of integer: "<<sizeof(a)<<" bytes"<<endl;<br>
    cout<<"Size of character: "<<sizeof(b)<<" byte"<<endl;<br>
    cout<<"Size of short int: "<<sizeof(c)<<" bytes"<<endl;<br>
    cout<<"Size of long int: "<<sizeof(d)<<" bytes"<<endl;<br>
    cout<<"Size of float: "<<sizeof(e)<<" bytes"<<endl;<br>
    cout<<"Size of double: "<<sizeof(f)<<" bytes"<<endl;<br>
    cout<<"Size of wide character: "<<sizeof(g)<<" bytes"<<endl;<br>
    cout<<"Size of signed short int: "<<sizeof(h)<<" bytes"<<endl;<br>
    cout<<"Size of unsigned short int: "<<sizeof(i)<<" bytes"<<endl;<br>
    cout<<"Size of signed long int: "<<sizeof(j)<<" bytes"<<endl;<br>
    cout<<"Size of unsigned long int: "<<sizeof(k)<<" bytes"<<endl;<br>
    cout<<"Size of long long int: "<<sizeof(l)<<" bytes"<<endl;<br>
    cout<<"Size of unsigned long long int: "<<sizeof(m)<<" bytes"<<endl;<br>
    cout<<"Size of long double: "<<sizeof(n)<<" bytes"<<endl;<br>
    return 0;<br>
<br>
}<br>*
<br>
b. <br>
*#include <iostream><br>
using namespace std;<br>
int main()<br>
{<br>
    int num1 = 1;<br>
    register int num2 = 4;<br>
    static int num3 = 5;<br>
    extern int a;<br>
    cout<<"Size of auto integer: "<<sizeof(num1)<<" bytes"<<endl;<br>
    cout<<"Size of register integer: "<<sizeof(num2)<<" bytes"<<endl;<br>
    cout<<"Size of static int: "<<sizeof(num3)<<" bytes"<<endl;<br>
    cout<<"Size of extern int: "<<sizeof(a)<<" bytes"<<endl;<br>
<br>
    return 0;<br>
}<br>*

**Outputs:**
a.<br>
![exp2a output](https://github.com/tanishaamenon/CDS---Data-Types/blob/main/exp2a.JPG)
<br>
b. <br>
![exp2b output](https://github.com/tanishaamenon/CDS---Data-Types/blob/main/exp2b.JPG)
<br>

**Conclusion:** <br>
&#8594; We learnt basic datatypes of C++. <br>
&#8594; We learnt types of storage class in C++. <br>
<br>
*******
