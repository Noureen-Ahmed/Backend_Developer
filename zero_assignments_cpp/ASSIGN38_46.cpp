/*
 ASSIGNMENT FROM 38 TO 46
ASSIGN 1
int num[4] ={ 100, 300, 600, 900 };
string awards[4]={ "iPhone", "iPad", "PC", "Car" };
cout << "Number" << num[0] << " Award Is : " << awards[0]<<"\n";
cout << "Number" << num[1] << " Award Is : " << awards[1]<< "\n";
cout << "Number" << num[2] << " Award Is : " << awards[2]<< "\n";
cout << "Number" << num[3] << " Award Is : " << awards[3]<< "\n";
ASSIGN 2
// Example 1
int check = 25;
int num[5]={ 40, 20, 30, 70, 100 };
int el = sizeof(num) / 4;
if (num[0] > check)
cout << num[0] + num[el-2];
else if (num[1] > 25)
cout << num[1] + num[el-2];
else if (num[2] > 25)
cout << num[2] + num[el-2];
else if (num[3] > 25)
cout << num[3] + num[el-2];
else if (num[4] > 25)
cout << num[4] + num[el - 2];

// Example 2
int check = 25;
int num[]{ 20, 35, 30, 70, 100 };
int el = sizeof(num) / 4;
if (num[0] > check)
cout << num[0] + num[el - 2];
else if (num[1] > 25)
cout << num[1] + num[el - 2];
else if (num[2] > 25)
cout << num[2] + num[el - 2];
else if (num[3] > 25)
cout << num[3] + num[el - 2];
else if (num[4] > 25)
cout << num[4] + num[el - 2];

// Example 3
int check = 25;
int num[]{ 20, 25, 30, 70, 100 };
int el = sizeof(num) / 4;
if (num[0] > check)
cout << num[0] + num[el - 2];
else if (num[1] > 25)
cout << num[1] + num[el - 2];
else if (num[2] > 25)
cout << num[2] + num[el - 2];
else if (num[3] > 25)
cout << num[3] + num[el - 2];
else if (num[4] > 25)
cout << num[4] + num[el - 2];
ASSIGN 3
int filling = 10;
int vals[]{ 100, 200, 300, 400 };
vals[0] = vals[1] = vals[2] = vals[3] = filling;
cout << vals[0] << "\n"; // 10
cout << vals[1] << "\n"; // 10
cout << vals[2] << "\n"; // 10
cout << vals[3] << "\n"; // 10
ASSIGN 4
// Example 1
int vals[]{ 100, 200, 250, 400, 200 };
if ((vals[0] + vals[4]) > vals[2]) {
cout << "First Number + Last Number Is Larger Than Middle Number"<<"\n";
cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4]<<"\n";
cout << vals[0] + vals[4] << " > " << vals[2];
}

else if ((vals[1] + vals[3]) > vals[2]) {
cout <<"Second Number + Before Last Number Is Larger Than Middle Number" << "\n";
cout << vals[1] << " + " << vals[3] << " = " << vals[0] + vals[4] << "\n";
cout << vals[1] + vals[3] << " > " << vals[2];
}
else {
cout << "Middle Number Is The Largest" << "\n";
cout << vals[2];
}
// Example 2
int vals[]{ 100, 200, 500, 400, 200 };
if ((vals[0] + vals[4]) > vals[2]) {
cout << "First Number + Last Number Is Larger Than Middle Number" << "\n";
cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << "\n";
cout << vals[0] + vals[4] << " > " << vals[2];
}

else if ((vals[1] + vals[3]) > vals[2]) {
cout << "Second Number + Before Last Number Is Larger Than Middle Number" << "\n";
cout << vals[1] << " + " << vals[3] << " = " << vals[0] + vals[4] << "\n";
cout << vals[1] + vals[3] << " > " << vals[2];
}
else {
cout << "Middle Number Is The Largest" << "\n";
cout << vals[2];
}
// Example 3
int vals[]{ 100, 200, 600, 400, 200 };

if ((vals[0] + vals[4]) > vals[2]) {
cout << "First Number + Last Number Is Larger Than Middle Number" << "\n";
cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << "\n";
cout << vals[0] + vals[4] << " > " << vals[2];
}

else if ((vals[1] + vals[3]) > vals[2]) {
cout << "Second Number + Before Last Number Is Larger Than Middle Number" << "\n";
cout << vals[1] << " + " << vals[3] << " = " << vals[0] + vals[4] << "\n";
cout << vals[1] + vals[3] << " > " << vals[2];
}
else {
cout << "Middle Number Is The Largest" << "\n";
cout << vals[2];
}
ASSIGN 5
int vals[] = { 100, 200, 600, 200, 100 };
int vals[] = { 100, 200, 200, 100 };
int vals[] = { 100, 300, 600, 200, 100 };
int el = sizeof(vals) / 4;
if (vals[0] == vals[el - 1] && vals[1] == vals[el - 2]) {
cout << "Array Is Palindrome";
}
else  {
cout<<"Array Is Not Palindrome";
}
ASSIGN 6
int vals[] = { 10, 20, 30 };
vals[0] = 100;
vals[1] = 200;
vals[2] = 300;
cout << vals[0] << "\n"; // 100
cout << vals[1] << "\n"; // 200
cout << vals[2] << "\n"; // 300
ASSIGN 7
string names[3][3] = {
{ "Ahmed","Sayed","Mahmoud"},
{ "Sameh","Mahdy","Gamal"},
{ "Mohamed","Adel","Majed"}
};


cout << "First Collection Of Names:\n";
cout << names[0][0] << "\n";
cout << names[1][1] << "\n";
cout << names[2][2] << "\n";

cout << "Second Collection Of Names:\n";
cout << names[2][1] << "\n";
cout << names[1][2] << "\n";
cout << names[0][2] << "\n";

cout << "Third Collection Of Names:\n";
cout << names[0][1] << "\n";
cout << names[1][0] << "\n";
cout << names[2][0] << "\n";
ASSIGN 8
array<int, 3> nums;
nums.fill(100);
cout << nums[0] << "\n";
cout << nums[1] << "\n";
cout << nums[2] << "\n";
ASSIGN 9
array<int, 6> nums{ 10, 20, 30, 40, 20, 50 };
// Method 1
cout << sizeof(nums) / sizeof(nums[0]);

// Method 2
cout << end(nums) - begin(nums);

// Method 3
cout << nums.size();
ASSIGN 10
array<int, 6> nums = { 10, 20, 30, 40, 20, 50 };
cout << "First: "<<nums[0]<<"\n"<<"Last: "<<nums[5] ;
cout << "First: " << nums.front()<<"\n" << "Last: " << nums.back();
cout << "First: " << nums.at(0)<<"\n" << "Last: " << nums.at(5);
ASSIGN 11
int index = 1;
array<int, 3> oldNums = { 10, 20, 30 };
array<int, 3> newNums;

newNums[0] = oldNums[2];
newNums[1] = oldNums[1];
newNums[2] = oldNums[0];
// Do Not Edit The Next 3 Lines
cout << newNums[0] << "\n"; // 30
cout << newNums[1] << "\n"; // 20
cout << newNums[2] << "\n"; // 10
or
newNums.front() = oldNums.back();
newNums.back() = oldNums.front();
newNums.at(index) = oldNums.at(index);
ASSIGN 12
int nums[] = { 1, 2, 3, 5 };
int vals[] = { 10, 20, 40, 30, 10, 60 };
int i1 = nums[3];
int i2 = nums[0];
int i3 = nums[1];
int i4 = nums[2];
cout << vals[5] + vals[2] + vals[3] + vals[1];
cout << vals[i1] + vals[i2] + vals[i3] + vals[i4];
ASSIGN 13
string fName = "Elzero ";
string mName = "Web ";
string lName = "School";
cout << fName + mName + lName<<"\n";
cout << fName << mName << lName << "\n";
cout << fName.append(mName).append(lName) << "\n";

WE FINISHED ASSIGNMENT FROM 38 TO 46 AT 9:18 PM ON TUESDAY
*/