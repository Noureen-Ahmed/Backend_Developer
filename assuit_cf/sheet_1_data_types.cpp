/*PROBLEM A
  #include <iostream>
using namespace std;
int main() {
	string a;
	cin >> a;
	cout << "Hello, " << a;
	return 0;
}
PROBLEM B
#include <iostream>
using namespace std;
int main()
{
	int a, long long b, char c, float d, double e;
	cin >> a >> b >> c >> d >> e;
	cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e;
	return 0;
}
PROBLEM C
#include <iostream>
using namespace std;
int main()
{
	int a;
	long long b;
	cin >> a >> b;
	cout << a <<" + "<<b<<" = "<<a + b<<endl;
	cout << a <<" * "<<b<<" = "<<a * b<<endl;
	cout << a <<" - "<<b<<" = "<<a - b<<endl;
	return 0;
}
PROBLEM D

#include <iostream>
using namespace std;
int main() {
	long long  A, B, C, D;
	cin >> A >> B >> C >> D;
	cout << "Difference = " << (A * B) - (C * D);
	return  0;
}

PROBLEM E
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << fiaed << setprecision(9);
	double r, pi = 3.141592653;
	cin >> r;
	cout << pi * r * r;

PROBLEM F
#include<iostream>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	cout << (a % 10) + (b % 10);

}
PROBLEM G

#include<iostream>
using namespace std;
int main()
{
	long long N;
	cin >> N;
	cout << (N*(N + 1)) / 2;
	return 0;

}

PROBLEM H
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	cout << "floor " << a << " / " << b << " = " << floor(a / b)<<"\n";
	cout << "ceil " << a << " / " << b << " = " << ceil(a / b)<<"\n";
	cout << "round " << a << " / " << b << " = " << round(a / b);
	return 0;

}
PROBLEM I

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a >= b)
		cout << "bes";
	else
		cout << "No";
		 return 0;

}
PROBLEM J
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	if (a % b == 0)
		cout << "Multiples";
	else if (b % a == 0)
		cout << "Multiples";
	else
		cout << "No Multiples";
  return 0;

}
PROBLEM K
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << min(a, min(b, c)) << " " << maa(a, maa(b, c));
return 0;

}
PROBLEM L

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b == d)
		cout << "ARE Brothers";
	else
		cout << "NOT";
		return 0;

}
PROBLEM M
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{

	char a;
	cin >> a;
	if (int(a) >= 48 && int(a )< 65)
		cout << "IS DIGIT";
	if (int(a) >= 65 && int(a)<97)
		cout << "ALPHA"<<"\n"<<"IS CAPITAL";
	if (int(a) >= 97)
		cout << "ALPHA"<<"\n"<<"IS SMALL";

return 0;

}
PROBLEM N
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (int(a) >= 97)
		cout << char(a - 32);
	if (int(a) >= 65 && int(a) < 97)
		cout << char(a +32);
	return 0;

}
PROBLEM O
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a, b;
	char c;
	cin >> a >> c >> b;
	switch (c)
	{
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;
	}
	return 0;
}
PROBLEM P
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a / 1000 % 2 == 0)
	{
		cout << "EVEN";
	}
	else
	{
		cout << "ODD";
	}
	return 0;
}
PROBLEM Q
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	cin >> a >> b;
	if (a > 0 && b > 0)
		cout << "Q1";
	else if (a < 0 && b > 0)
		cout << "Q2";
	else if (a < 0 && b < 0)
		cout << "Q3";
	else if (a > 0 && b < 0)
		cout << "Q4";
	else if (a == 0 && b == 0)
		cout << "Origem";
	else if (a != 0 && b == 0)
		cout << "Eiao a";
	else if (a == 0 && b != 0 )
		cout << "Eiao b";
	return 0;
}
PROBLEM R
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int a;
	cin >> a;
	int age_in_bears = a / 365;
	a=a % 365;
	int age_in_month = a/30;
	a = a % 30;
	int age_in_dabs = a ;
	cout << age_in_bears << " " << "bears" << "\n";
	cout << age_in_month << " " << "months" << "\n";
	cout << age_in_dabs << " " << "dabs";
	return 0;
}
PROBLEM S
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	cin >> a;
	if (a >= 0 && a <= 25)
		cout << "Interval [0,25]";
	else if (a > 25 && a <= 50)
		cout << "Interval (25,50]";
	else if (a > 50 && a <= 75)
		cout << "Interval (50,75]";
	else if (a > 75 && a <= 100)
		cout << "Interval (75,100]";
	else
		cout << "Out of Intervals";
	return 0;
}
PROBLEM T

#include<iostream>
using namespace std;
int main()
{
	int  a, b, c;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		if (b >= c)
		{
			cout << c << "\n" << b << "\n" << a << "\n";
			cout << endl;
			cout << a << "\n" << b << "\n" << c<<"\n";

		}
		else
		{
			cout << b << "\n" << c << "\n" << a << "\n";
			cout << endl;
			cout << a << "\n" << b << "\n" << c<<"\n";

		}
	}
	else if (b >= a && b >= c)
	{
		if (a >= c)
		{
			cout << c << "\n" << a << "\n" << b << "\n";
			cout << "\n";
			cout << a << "\n" << b << "\n" << c<<"\n";

		}
		else
		{
			cout << a << "\n" << c << "\n" << b << "\n";
			cout << "\n";
			cout << a << "\n" << b << "\n" << c<<"\n";

		}
	}
	else if (c >= a && c >= b)
	{
		if (b >= a)
		{
			cout << a << "\n" << b << "\n" << c << "\n";
			cout << "\n";
			cout << a << "\n" << b << "\n" << c<<"\n";

		}
		else
		{
			cout << b << "\n" << a << "\n" << c << "\n";
			cout << "\n";
			cout << a << "\n" << b << "\n" << c<<"\n";

		}
	}
	return 0;
}
PROBLEM U
#include<iostream>
using namespace std;
int main()
{
	double  n;
	cin >> n;
	int y = int(n);
	if (n - y > 0)
		cout << "float " << y << " " << n - y << endl;
	else
		cout << "int " << y << endl;
	return 0;
}
PROBLEM V
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char s;
	cin >> a >> s >> b;
	if (s == '>') {
		if(a>b)
		cout << "Right";
	else
		cout << "Wrong";
	}
	if (s == '<') {
		if (a < b)
			cout << "Right";
		else
			cout << "Wrong";
	}
	if (s == '=') {
		if (a == b)
			cout << "Right";
		else
			cout << "Wrong";
	}

	return 0;
}
PROBLEM W
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	char s, q;
	cin >> a >> s >> b >> q >> c;
	if (s == '+'){
		if (a + b == c)
			cout << "Yes";
		else
			cout << a+b;
	}
	else if (s == '-') {
		if (a - b == c)
			cout << "Yes";
		else
			cout << a - b;
	}
	else if (s == '*') {
		if (a * b == c)
			cout << "Yes";
		else
			cout << a * b;
	}




	return 0;
}
PROBLEM X
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (c >= a && c <= b) {
		if (d >= b)
			cout << c << " " << b;
			else if(b >= d)
			cout << c << " " << d;
	}
	else if (a >= c && a <= d) {
		if (b >= d)
			cout << a << " " << d;
		else if (d >= b)
			cout << a << " " << b;

	}
	else
		cout << -1;

	return 0;
}
PROBLEM Y
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	int x;
	cin >> a >> b >> c >> d;
		a %= 100;
		b %= 100;
		c %= 100;
		d %= 100;
		x = a * b * c * d;
		int y = x % 100;
		if (y < 10)
			cout << 0 << y;
		else
		cout<< y;
	return 0;
}
PROBLEM Z
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a >= 1 && b >= 1 && c >= 1 && d >= 1) {
		if (b * log(a) > d * log(c))
			cout << "YES";
		else
			cout << "NO";
	}
	return 0;
}
WE FINISHED IT AT 2:01 AM THE FIRST SHEET
*/