/*
ASSIGNMENT FROM 30 T0 35
ASSIGN 1
int age = 40;
int points = 800;
float rate = 8.5f;
cin >> age >> points >> rate;
if (age > 18 && points > 500 && rate > 5)
cout << "Yes Age > 18 & Points > 500 & Rate > 5";
else
cout << "error";
ASSIGN 2
// Test Case 1
int age = 18;
int points = 450;
if (age > 18)
cout << "  Yes Age Is Ok" << "\n";
else
cout << "No Age Is Not Ok" << "\n";
if (points > 500)
cout << "  Yes Points Is Ok" << "\n";
else
cout << "No Points Is Not Ok" << "\n";


// Test Case 2
int age = 20;
int points = 450;
if (age > 18)
cout << "  Yes Age Is Ok" << "\n";
else
cout << "No Age Is Not Ok" << "\n";
if (points > 500)
cout << "  Yes Points Is Ok" << "\n";
else
cout << "No Points Is Not Ok" << "\n";


// Test Case 3
int age = 20;
int points = 650;
if (age > 18)
cout << "  Yes Age Is Ok" << "\n";
else
cout << "No Age Is Not Ok" << "\n";
if (points > 500)
cout << "  Yes Points Is Ok" << "\n";
else
cout << "No Points Is Not Ok" << "\n";
ASSIGN 3
int num,i=0;
cout << "Please Type A Number Between 0 And 150\n";
cin >> num;
if (num >= 0 && num <= 150)
{
if (num < 10)
cout << "00" << num << "\n";
else if (num > 10 && num < 100)
cout << "0" << num << "\n";
else if (num >= 100)
cout << num;
}
else {
cout << "error";
i--;
}
ASSIGN 4
int num1 = 5;
int num2 = 1;
int num3 = 5;
int num4 = 30;

// Do Not Edit Any Condition

// Condition 1
if (num1 > num2)
cout << "Condition 1 Is True\n";
else
cout << "Condition 1 Is False\n";

// Condition 2
if (num1 > num2 && num1 < num4)
cout << "Condition 2 Is True\n";
else
cout << "Condition 2 Is False\n";

// Condition 3
if (num1 > num2 && num1 == num3)
cout << "Condition 3 Is True\n";
else
cout << "Condition 3 Is False\n";

// Condition 4
if (num1 + num2 < num4)
cout << "Condition 4 Is True\n";
else
cout << "Condition 4 Is False\n";

// Condition 5
if (num1 + num3 < num4)
cout << "Condition 5 Is True\n";
else
cout << "Condition 5 Is False\n";

// Condition 6
if (num1 + num2 + num3 < num4)
cout << "Condition 6 Is True\n";
else
cout << "Condition 6 Is False\n";

// Condition 7
if (num4 - (num1 + num3) + num2 == 21)
cout << "Condition 7 Is True\n";
else
cout << "Condition 7 Is False\n";
ASSIGN 5
int by = 82; // by => Birth Year
int s = 500; // s => Salary
cout<< (by > 80 ? (s < 600 ? "ok" : "High\n") : "Not Ok\n");
ASSIGN 6
int age = 40;
int points = 100;
if (age > 18 || sizeof(age) == 4 || points > 50)
cout << "Age Data Is 4 Bytes\n"<< "Age Is Ok\n"<< "Points Is Ok\n";
ASSIGN 7
int result = 0;
int num1, num2, num3, num4;
cout << "Please Type 5 Numbers In A Row\n";
cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
cin >> num1 >> num2 >> num3 >> num4;
if (num1 < 20 && num1 % 2 == 0)
result += num1;
if (num2 < 20 && num2 % 2 == 0)
result += num2;
if (num3 < 20 && num3 % 2 == 0)
result += num3;
if (num4 < 20 && num4 % 2 == 0)
result += num4;
cout << result;
*/