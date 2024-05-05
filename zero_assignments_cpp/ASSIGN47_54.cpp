/*
                        ASSIGNMENT FROM 47 TO 54 
ASSIGN 1
int i = 0;
do {
cout << i << "\n";
i++;
} while (i < 11);
int j=0;
while (j < 11) {
cout << j << "\n";
j++;
}
for (int k = 0; k < 11; k++) {
cout << k << "\n";
}
ASSIGN 2
int index=2;
for (;;) // <= Do Not Edit This Line
{ if(index<9)
cout << index << "\n"; // From 2 To 10
index ++ ;
}
ASSIGN 3
	int x, y;
	cin >> x >> y;
	if (y > x) {
		for (int i = x; i < y; i++) {
			if (i % 2 == 1 &&i!=x) {
				cout << i << ", ";
			}
		}
	}
	else if (x>y){
		for (int i = y; i <x; i++) {
			if (i % 2 == 1 && i != y) {
				cout << i <<", ";
			}
		}
	}
ASSIGN 4
    for (int i = 0; i < 19; i += 2) {
            if(i!=10 && i!=12)
            cout << i<<"\n";
}
ASSIGN 5
for (int i = 0; i < 28; i += 3) {
cout << i << "\n";
}
ASSIGN 6
for (int i = 10; i <=100000000; i*=10) {
if(i%10==0 && i!=100000&&i!=1000000&&i!=10000000&& i!=1000)
cout << i<<"\n";
}
ASSIGN 7
for (int i = 2; i < 129; i *= 2) {
if(i%2==0)
cout << i << "\n";
}
ASSIGN 8
for (int i = 2;int j = 2; i < 127; i *= 2 , i+=j) {
cout << i<< "\n";
}
ASSIGN 9
string friends[] = { "Ahmed", "Mohamed", "Sayed", "Gamal" };
for (int i = 1; i < 3; i++) {
cout<<"\"" << friends[i]<<"\"" << "\n";
}
ASSIGN 10
string friends[] = { "Ahmed", "Mohamed", "ameer", "Ashraf", "Amany" };
for (int i = 0; i < 5; i++) {
char x = 'A';
if(friends[i][0] == x)
cout << "\"" << friends[i] << "\"" << "\n";
}
ASSIGN 11
string friends[] = { "Ahmed", "Osama", "Ameer" };
	for (int i = 0; i < 3; i++) {
		cout << "=========\n";
		cout << "= " << friends[i] << " =" << "\n";
		cout << "==================\n";
		cout << "== ";
		for (int j = 0; j <=4; j++) {

			cout  << friends[i][j];
			if (j <= 3)
				cout << ", ";
		}
		cout << " =";
		cout << "\n";
		cout << "==================\n\n";
	}
	ASSIGN 12
		int nums[] = { 10, 20, 14, 28, 40, 80, 15, 30 };
	for (int i = 0; i < 9; i++) {
		if (2 * nums[i] == nums[i + 1])
			cout << nums[i]<<"\n";
	}
	ASSIGN 13
	for (int i = 30; i >= 3;i-=3) {
		cout << i<<"\n";
	}
	cout << "\n\n";
	for (int i = 30; i >= 3; i -= 3) {
		if(i%2==1)
		cout << i << "\n";
	}
ASSIGN 14
int num = 2;
while (num < 520) {
		for (int i = 1, j = 1; i <383,j<129; i += j * 3, j *= num)
			cout << i << "\n";
		break;

	}
ASSIGN 15
	int help_num = 4;
	int nums[] = { 2, 4, 5, 6, 10 };
	for (int i = 0,j=4; i <= help_num,j>=0; i++,j--) {
	cout << nums[i] << " + " << nums[j] << " = " << nums[i]+nums[j]<<"\n";
	}
	ASSIGN 16
	int index = 10;
	int jump = 2;
	for (int i=index; i >= 2 * jump;i-=2){
		cout << i<<"\n";
	}
ASSIGN 17
for (int i = 1; i < 103; i++) {
			if (i < 10) {
				cout << "00" << i << "\n";
			}
			else if (i <= 20) {
				cout << "0" << i << "\n";
			}
			else if (i >= 100) {
				cout << i<<"\n";
			}
		}
ASSIGN 18
		for (int i = 0; i <= 1000; i += 100){
		if(i!=500&&i!=1000&&i!=0)
		cout << i << "\n";
	}
ASSIGN 19
	for (int i = 100; i <= 1100; i += 100) {
		cout << i << "\n";
		if (i != 100 && i != 1100)
			cout << i << "\n";

	}
ASSIGN 20
string names[] = { "Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa" };
for (int i = 0; i <= 6; i++) {
		if (names[i].length() == 5)
			cout << names[i]<<"\n";
} 
WE FINISHED IT AT 9:14 PM THE LOOPS
*/