/*
                        ASSIGNMENT FROM 16 TO 23
ASSIGN 1
'a' // char => character
'9' // char => character
9   // int => integer
true // bool => Boolean
100   // int => integer
- 10   // int => integer
0     // int => integer
false // bool => Boolean
10.9   // f => float
ASSIGN 2
double salary = 5000.98;
cout << sizeof(salary)<<" Bytes"<<"\n";
cout << sizeof(salary)*8<<" Bits";
ASSIGN 3
cout << "Maximum Integer Number Is => " << INT_MAX <<"\n";
cout << "Minimum Integer Number Is => "<<INT_MIN << "\n";
cout << "Maximum Short Integer Number Is => "<<SHRT_MAX << "\n";
cout << "Minimum Short Integer Number Is => "<<SHRT_MIN << "\n";
ASSIGN 4
cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n";
ASSIGN 5
char a = '~';
char b = '&';
char c = '%';
char d = 'A';
cout << "ASCII Value of ~ IS " << int(a) << "\n" << "ASCII Value of & IS " << int(b) << "\n" << "ASCII Value of % IS " << int(c) << "\n" << "ASCII Value of A IS " << int(d) << "\n";
ASSIGN 6
int a = 69;
int b = 108;
int c = 122;
int d = 101;
int e = 114;
int f = 111;
cout << "Character Of This ASCII Value " << a << "  IS " << char(a)<<"\n";
cout << "Character Of This ASCII Value " << b << " IS " << char(b) << "\n";
cout << "Character Of This ASCII Value " << c << " IS " << char(c) << "\n";
cout << "Character Of This ASCII Value " << d << " IS " << char(d) << "\n";
cout << "Character Of This ASCII Value " << e << " IS " << char(d) << "\n";
cout << "Character Of This ASCII Value " << f << " IS " << char(f) << "\n";
cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f);
ASSIGN 7
int a = 1;
int b = 13;
int c = 17;
int d = 70;
cout << char(d - a) << char(d + c) << char(d + b);
ASSIGN 8
short a = 100;
double b = 15001500;
long double c = 100.54565746;
cout << sizeof(a) << " Bytes\n";
cout << sizeof(b) << " Bytes\n";
cout << sizeof(c) << " Bytes\n";
ASSIGN 9
int a = 100;
signed int b = -100;
short c = 100;
double d = 500.55;
cout << a << "\n"; // 100
cout << b << "\n"; // -100
cout << c << "\n"; // 100
cout << d << "\n"; // 500.55
ASSIGN 10
//type alias here
using lli = long long int;
typedef long long int lli;
lli num = 150050005;
cout << num << "\n";
ASSIGN 11
// Do Not Edit Here
short int a = 100;
float b = 98.5f;
double c = 1.7;
cout << int (a + int(b) +c+1)<< "\n"; 
ASSIGN 12
short a = 1000;
int b = 10000;
long double c = 5.560000505012;
cout << sizeof(c) + sizeof(b) << "\n";
cout << sizeof(c) + 3*sizeof(b) << "\n";
cout << sizeof(c)*4  << "\n";
cout << a*5<< "\n";
cout << char( (sizeof(a)+sizeof(c))*8) << "\n";
