/*
ASSIGN 1
int calcspecial(int x, int y)
{
	if (x == y) {
		return x + y;
	}
	else if (x > y) {
		return x - y;
	}
	else if (x < y) {
	   return y - x;
	}

}
int main()
{
	cout << calcspecial(40, 40) << "\n";
	cout << calcspecial(200, 50) << "\n";
	cout << calcspecial(100, 300) << "\n";
	return 0;
}
ASSIGN 2
double money(float x, int y)
{
	int weeks = y / 7;
	int holiday = weeks * 2;
	double needed = (x / ( y - holiday));
	return needed;
}
int main()
{
	cout << money(2015, 21) << "\n";
	cout << money(4500, 40) << "\n";
}
ASSIGN 3
#include <iostream>
using namespace std;
int plusnums(int numone, int numtwo);
int minusnums(int numone, int numtwo);
int divnums(int numone, int numtwo);

int main()
{
	cout << plusnums(50, 60) << "\n"; // 110
	cout << minusnums(150, 50) << "\n"; // 100
	cout << divnums(100, 5) << "\n"; // 20
	return 0;
}
int plusnums(int numone, int numtwo)
{
	return numone + numtwo;
}

int minusnums(int numone, int numtwo)
{
	return numone - numtwo;
}

int divnums(int numone, int numtwo)
{
	return numone / numtwo;
}
ASSIGN 4
int calculation(int x, int y, int z) {
	return x + y + z;
}
int calculation(int x, int y) {
	return x + y+ 150 ;
}
int calculation(int x) {
	return x + 200;
}
int main()
{
	cout << calculation(50, 100, 150) << "\n"; // 300
	cout << calculation(100, 50) << "\n"; // 300
	cout << calculation(100) << "\n"; // 300
	return 0;
}
ASSIGN 5
int thepower(int x, unsigned int y) {
	int power = 1;
	for (int i = 0; i < y; i++)
		power *= x;
	return power;
}
int main()
{
	cout << pow(2, 5) << "\n";
	cout<<thepower(2, 5); // 32
	return 0;
}ASSIGN 6
string swapping(string x)
{
	int n = x.length();
	for (int i = 0; i < n; i++) {
		if (x[i] == 'h' || x[i] == 'H') {
			continue;
		}
		else if (isupper(x[i]) ) {
			x[i]= tolower(x[i]);
		}
		else if (islower(x[i])) {
			x[i]=toupper(x[i]);
		}
	}
	return x;
}

int main()
{
	cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
	return 0;
}
ASSIGN 7
int beforeresult(int num, int num2)
{
	int count = num - num2;
	int sum = 0;
	for (int i=num; i>=count; i--) {
		sum +=num--;
	}
	return sum;
}
int main()
{
	cout << beforeresult(10, 5) << "\n";
	cout << beforeresult(15, 3) << "\n";
	return 0;
}
ASSIGN 8
int plusandmultiply(int x[], int size)
{
	int plus = 0;
	int multi = 1;
	for (int i = 0; i < size; i++) {
		if (x[i] % 2 == 0) {
			plus += x[i];
		}
		else  {
			multi *= x[i];
		}
	}
	return plus + multi;
}
int main()
{
	int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
	int numssize = size(numbers);
	cout << plusandmultiply(numbers, numssize) << "\n";
	return 0;
}
ASSIGN 9
int sumall(int arr[], int size, int x)
{
	int x = 13;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] != x)
		{
			sum += arr[i];
		}
	}
	return sum;
}
int main()
{
	int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
	int numssize = size(numbers);
	int noneed = 13;
	cout << sumall(numbers, numssize, noneed) << "\n";
	return 0;
}
ASSIGN 10
int minpositive(int arr[], int size)
{
	int min = arr[2];
	for (int i = 0; i < size; i++) {
		if (arr[i]<min && arr[i]>0)
		{
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
	int numssize = size(numbers);
	cout << minpositive(numbers, numssize) << "\n";
	return 0;
}
ASSIGN 11
int firstnegative(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if(arr[i]<0)
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
	int numssize = size(numbers);
	cout << firstnegative(numbers, numssize) << "\n";
	return 0;
}
ASSIGN 12
string createurl(string x, string y, string z,bool www= true)
{
	string url =" ";

	if (www) {
		url= x +"://"+ y+"." + z;
	}
	else {
		url= x + "://" + "." + y+ ". " +z;
	}
	return url;

}
int main()
{
	cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
	cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
	cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
	return 0;
}
ASSIGN 13
#include <iostream>
using namespace std;
string greeting(string name, string gender=" ") {
	string title;
	if ("male") {
		title = "hello mr" + name;
	}
	else if ("female") {
		title = "hello miss" + name;
	}
	else {
		title = "hello" + name;
	}
	return title;
}
int main()
{
	cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
	cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
	cout << greeting("Sameh") << "\n"; // Hello Sameh
	return 0;
}
ASSIGN 14
int calculate(int x, int y, string z=" ") {
	if (z=="a" ||z== "add")
	{
		return x + y;
	}
	else if (z=="s" || z=="subtract")
	{
		return x - y;
	}
	else if (z== "m" ||z=="multiply")
	{
		return x * y;
	}
	else if(z=="Invalid")
	{
		return 0;
	}
	else
	{
		return x + y;
	}
}
int main()
{
	cout << calculate(10, 20) << "\n"; // 30
	cout << calculate(10, 20, "a") << "\n"; // 30
	cout << calculate(10, 20, "s") << "\n"; // -10
	cout << calculate(10, 20, "subtract") << "\n"; // -10
	cout << calculate(10, 20, "multiply") << "\n"; // 200
	cout << calculate(10, 20, "m") << "\n"; // 200
	cout << calculate(10, 20, "Invalid") << "\n"; // 0
	return 0;
	}
    ASSIGN 15
double avg(int arr[], int size) {
	double total = 0;
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
		total = sum / size;
	}
	return total;
}
int main()
{
	int money[] = { 10, 20, 15, 25, 30, 35 };
	int monsize = size(money);
	cout << avg(money, monsize) << "\n"; // 22.5
	return 0;
}
ASSIGN 16
int books(int s, int m, int l, int r)
{
	double sum = (r * 20) - (s * 2 + m * 4 + l * 6);
	if(sum>0 ) {
		return sum;
	}
	else if(sum<0) {
		return 0;
	}
}
int main()
{
	cout << books(10, 4, 3, 4) << "\n"; // 26
	cout << books(10, 4, 3, 2) << "\n"; // 0
	return 0;
}
ASSIGN 17
int pricing(int sold, int used, float price, double bonus) {
	double paid = ((sold-used) * 800) + (used * 600);
	double salary = paid-( (bonus / 100) * paid );
	return salary;
}
int main()
{
	cout << pricing(50, 10, 800, 20) << "\n"; // 30400
	return 0;
}
I FINISHED FUNCTION ASSIGNMENTS AT 3:21 PM AND ANOTHER DAY ALSO

*/