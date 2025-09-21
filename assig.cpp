// 1.Write a program to calculate average of three integers.
// Numbers are given by the user.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    float average;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    average = (num1 + num2 + num3) / 3.0;
    cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << endl;

    return 0;
}

// 2.Write a program to calculate circumference of a circle.
// #include <iostream>
// using namespace std;

// int main() {
//     float radius, circumference;
//     const float PI = 3.14159;

//     cout << "Enter the radius of the circle: ";
//     cin >> radius;

//     circumference = 2 * PI * radius;
//     cout << "The circumference of the circle is: " << circumference << endl;

//     return 0;
// }

// 3.Write a program to calculate simple interest.
// #include <iostream>
// using namespace std;

// int main() {
//     float principal, rate, time, simpleInterest;
//     cout << "Enter Principal amount: ";
//     cin >> principal;
//     cout << "Enter Rate of interest (%): ";
//     cin >> rate;
//     cout << "Enter Time (in years): ";
//     cin >> time;
//     simpleInterest = (principal * rate * time) / 100;
//     cout << "The Simple Interest is: " << simpleInterest << endl;

//     return 0;
// }
// 4.Write a program to calculate volume of a cuboid

// #include <iostream>
// using namespace std;

// int main() {
//     float length, width, height, volume;
//     cout << "Enter length of the cuboid: ";
//     cin >> length;

//     cout << "Enter width of the cuboid: ";
//     cin >> width;

//     cout << "Enter height of the cuboid: ";
//     cin >> height;
//     volume = length * width * height;
//     cout << "The volume of the cuboid is: " << volume << endl;

//     return 0;
// }
//5. Write a program to ask user about the cost price and selling
// price banana per dozen. Calculate the profit or loss earned
// upon selling 25 bananas
// #include <iostream>
// using namespace std;

// int main() {
//     float cp_per_dozen, sp_per_dozen;
//     float cp_per_banana, sp_per_banana;
//     float total_cp, total_sp, profit_loss;
//     cout << "Enter cost price of bananas per dozen: ";
//     cin >> cp_per_dozen;

//     cout << "Enter selling price of bananas per dozen: ";
//     cin >> sp_per_dozen;

//     cp_per_banana = cp_per_dozen / 12.0;
//     sp_per_banana = sp_per_dozen / 12.0;

//     total_cp = cp_per_banana * 25;
//     total_sp = sp_per_banana * 25;

//     profit_loss = total_sp - total_cp;

//     if (profit_loss > 0) {
//         cout << "Profit earned on selling 25 bananas = " << profit_loss << endl;
//     } else if (profit_loss < 0) {
//         cout << "Loss incurred on selling 25 bananas = " << -profit_loss << endl;
//     } else {
//         cout << "No profit, no loss on selling 25 bananas." << endl;
//     }
//     return 0;
// }

//6.Write a program to input a character from the user and print
//its ASCII code 

// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     cout << "The ASCII code of '" << ch << "' is: " << int(ch) << endl;

//     return 0;
// }


// 7.Write a program to input an ASCII code from the user and
//print its corresponding character.

// #include <iostream>
// using namespace std;

// int main() {
//     int asciiCode;
//     cout << "Enter an ASCII code (0 - 127): ";
//     cin >> asciiCode;
//     char ch = char(asciiCode);
//     cout << "The character for ASCII code " << asciiCode << " is: '" << ch << "'" << endl;

//     return 0;
// }
// 8.Write a program to input three characters from the user and
//display characters with their corresponding ASCII codes
// #include <iostream>
// using namespace std;

// int main() {
//     char ch1, ch2, ch3;
//     cout << "Enter three characters separated by space: ";
//     cin >> ch1 >> ch2 >> ch3;
//     cout << "Character: " << ch1 << " | ASCII Code: " << int(ch1) << endl;
//     cout << "Character: " << ch2 << " | ASCII Code: " << int(ch2) << endl;
//     cout << "Character: " << ch3 << " | ASCII Code: " << int(ch3) << endl;

//     return 0;
// }

//9.WAP to take date as an input in below given format and convert the date format and display the result as given below.
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int day, month, year;
//     string months[] = {"", "January", "February", "March", "April", "May", "June",
//                        "July", "August", "September", "October", "November", "December"};
//     cout << "Enter date in format DD/MM/YYYY: ";
//     char slash;
//     cin >> day >> slash >> month >> slash >> year;
//     cout << "Date in DD-MM-YYYY format: ";
//     if (day < 10) cout << "0"; 
//     cout << day << "-";
//     if (month < 10) cout << "0"; 
//     cout << month << "-" << year << endl;
//     cout << "Date in 'Month DD, YYYY' format: ";
//     cout << months[month] << " " << day << ", " << year << endl;

//     return 0;
// }

// 10.WAP to take time as an input in below given format and
// convert the time format and display the result as given
// below.

// #include <iostream>
// using namespace std;

// int main() {
//     int hour, minute;
//     char colon; 

//     cout << "Enter time in 24-hour format (HH:MM): ";
//     cin >> hour >> colon >> minute;

//     cout << "Time in 24-hour format: ";
//     if (hour < 10) cout << "0";
//     cout << hour << ":";
//     if (minute < 10) cout << "0";
//     cout << minute << endl;

//     string period = "AM";
//     int hour12 = hour;

//     if (hour == 0) {
//         hour12 = 12; 
//         period = "AM";
//     } else if (hour == 12) {
//         hour12 = 12; 
//         period = "PM";
//     } else if (hour > 12) {
//         hour12 = hour - 12;
//         period = "PM";
//     }
//     cout << "Time in 12-hour format: ";
//     if (hour12 < 10) cout << "0";
//     cout << hour12 << ":";
//     if (minute < 10) cout << "0";
//     cout << minute << " " << period << endl;

//     return 0;
// }


// 11.Write a program to input three characters from the user
// and display characters with their corresponding ASCII
// code
// #include <iostream>
// using namespace std;

// int main() {
//     char ch1, ch2, ch3;

//     cout << "Enter three characters separated by space: ";
//     cin >> ch1 >> ch2 >> ch3;
//     cout << "Character: " << ch1 << " | ASCII Code: " << int(ch1) << endl;
//     cout << "Character: " << ch2 << " | ASCII Code: " << int(ch2) << endl;
//     cout << "Character: " << ch3 << " | ASCII Code: " << int(ch3) << endl;

//     return 0;
// }


// 12.Create a program that takes a person's age as input and
// classifies them into different age groups (e.g., child,
//     teenager, adult, senior)

// #include <iostream>
// using namespace std;

// int main() {
//     int age;

//     cout << "Enter your age: ";
//     cin >> age;

//     if (age >= 0 && age <= 12) {
//         cout << "You are a Child." << endl;
//     } 
//     else if (age >= 13 && age <= 19) {
//         cout << "You are a Teenager." << endl;
//     } 
//     else if (age >= 20 && age <= 59) {
//         cout << "You are an Adult." << endl;
//     } 
//     else if (age >= 60) {
//         cout << "You are a Senior." << endl;
//     } 
//     else {
//         cout << "Invalid age entered." << endl;
//     }

//     return 0;
// }

// 13.Develop a program that takes a student's score (0-100) as
// input and prints the corresponding grade (e.g., A, B, C, D, F)
// based on a grading scale

// #include <iostream>
// using namespace std;

// int main() {
//     int score;
//     cout << "Enter the student's score (0-100): ";
//     cin >> score;

//     if (score < 0 || score > 100) {
//         cout << "Invalid score entered." << endl;
//         return 0;
//     }
//     char grade;
//     if (score >= 90) {
//         grade = 'A';
//     } else if (score >= 80) {
//         grade = 'B';
//     } else if (score >= 70) {
//         grade = 'C';
//     } else if (score >= 60) {
//         grade = 'D';
//     } else {
//         grade = 'F';
//     }

//     cout << "The grade for score " << score << " is: " << grade << endl;

//     return 0;
// }

// 14. Write a program that reads two integers from the user
// and determines if the first integer is divisible by the second
// integer
// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2;

//     cout << "Enter the first integer: ";
//     cin >> num1;

//     cout << "Enter the second integer: ";
//     cin >> num2;
//     if (num2 == 0) {
//         cout << "Division by zero is not allowed." << endl;
//         return 0;
//     }
//     if (num1 % num2 == 0) {
//         cout << num1 << " is divisible by " << num2 << "." << endl;
//     } else {
//         cout << num1 << " is NOT divisible by " << num2 << "." << endl;
//     }

//     return 0;
// }

// 15. Create a program that takes the lengths of three sides of a
// triangle as input and determines whether the triangle is
// equilateral, isosceles, or scalene

// #include <iostream>
// using namespace std;

// int main() {
//     float side1, side2, side3;

//     cout << "Enter the lengths of three sides of the triangle: ";
//     cin >> side1 >> side2 >> side3;

//     if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {

//         if (side1 == side2 && side2 == side3) {
//             cout << "The triangle is Equilateral." << endl;
//         } 
//         else if (side1 == side2 || side1 == side3 || side2 == side3) {
//             cout << "The triangle is Isosceles." << endl;
//         } 
//         else {
//             cout << "The triangle is Scalene." << endl;
//         }

//     } else {
//         cout << "The entered sides do not form a valid triangle." << endl;
//     }

//     return 0;
// }
 

// 16. Develop a program that converts a temperature from
// Fahrenheit to Celsius or vice versa based on user input. The
// user should specify the type of conversion

// #include <iostream>
// using namespace std;

// int main() {
//     char choice;
//     double temp, convertedTemp;

//     cout << "Enter 'C' to convert Fahrenheit to Celsius or 'F' to convert Celsius to Fahrenheit: ";
//     cin >> choice;

//     if (choice == 'C' || choice == 'c') {
//         cout << "Enter temperature in Fahrenheit: ";
//         cin >> temp;
//         convertedTemp = (temp - 32) * 5.0 / 9.0;
//         cout << temp << "°F is " << convertedTemp << "°C." << endl;
//     } 
//     else if (choice == 'F' || choice == 'f') {
//         cout << "Enter temperature in Celsius: ";
//         cin >> temp;
//         convertedTemp = (temp * 9.0 / 5.0) + 32;
//         cout << temp << "°C is " << convertedTemp << "°F." << endl;
//     } 
//     else {
//         cout << "Invalid choice. Please enter 'C' or 'F'." << endl;
//     }

//     return 0;
// }

// 17. Write a program that takes a start year and an end year
// from the user and prints all the leap years in that range

// #include <iostream>
// using namespace std;

// int main() {
//     int startYear, endYear;

  
//     cout << "Enter the start year: ";
//     cin >> startYear;

//     cout << "Enter the end year: ";
//     cin >> endYear;

//     cout << "Leap years between " << startYear << " and " << endYear << " are: " << endl;

//     for (int year = startYear; year <= endYear; year++) {
       
//         if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//             cout << year << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }

// 18.Write a program that takes three numbers as input and
// finds the middle (second largest) number

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c, middle;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     if ((a >= b && a <= c) || (a <= b && a >= c)) {
//         middle = a;
//     } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
//         middle = b;
//     } else {
//         middle = c;
//     }

//     cout << "The middle (second largest) number is: " << middle << endl;

//     return 0;
// }

// 19.Develop a program that takes a month (as an integer from
//     1 to 12) and a year as input, then prints the number of days
//     in that month, considering leap years

// #include <iostream>
// using namespace std;

// int main() {
//     int month, year, days;
//     cout << "Enter month (1-12): ";
//     cin >> month;
//     cout << "Enter year: ";
//     cin >> year;
//     switch(month) {
//         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//             days = 31;
//             break;
//         case 4: case 6: case 9: case 11:
//             days = 30;
//             break;
//         case 2:
            
//             if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//                 days = 29;
//             } else {
//                 days = 28;
//             }
//             break;
//         default:
//             cout << "Invalid month entered." << endl;
//             return 0;
//     }

//     cout << "Number of days in month " << month << " of year " << year << " is: " << days << endl;

//     return 0;
// }

// 20.Develop a program that takes four numbers as input and
// prints the largest among them

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c, d, largest;

//     cout << "Enter four numbers: ";
//     cin >> a >> b >> c >> d;

//     largest = a;

//     if (b > largest) largest = b;
//     if (c > largest) largest = c;
//     if (d > largest) largest = d;

//     cout << "The largest number is: " << largest << endl;

//     return 0;
// }

// 21.Create a program that takes a number (1-7) as input and
// prints the corresponding day of the week

// #include <iostream>
// using namespace std;

// int main() {
//     int dayNumber;

//     // Input day number
//     cout << "Enter a number (1-7): ";
//     cin >> dayNumber;

//     // Display corresponding day
//     switch(dayNumber) {
//         case 1: cout << "Sunday" << endl; break;
//         case 2: cout << "Monday" << endl; break;
//         case 3: cout << "Tuesday" << endl; break;
//         case 4: cout << "Wednesday" << endl; break;
//         case 5: cout << "Thursday" << endl; break;
//         case 6: cout << "Friday" << endl; break;
//         case 7: cout << "Saturday" << endl; break;
//         default: cout << "Invalid input. Please enter a number between 1 and 7." << endl;
//     }

//     return 0;
// }

//22.Write a program to calculate sum of first N natural numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     int sum = 0;

//     cout << "Enter a positive integer N: ";
//     cin >> N;

//     for (int i = 1; i <= N; i++) {
//         sum += i;
//     }

//     cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;

//     return 0;
// }

//23.Write a program to calculate sum of first N even natural
//numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     int sum = 0;
//     cout << "Enter a positive integer N: ";
//     cin >> N;
//     for (int i = 1; i <= N; i++) {
//         sum += 2 * i; 
//     }

//     cout << "The sum of the first " << N << " even natural numbers is: " << sum << endl;

//     return 0;
// }


// 33. First N terms of Fibonacci series
// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cout << "Enter the number of terms: ";
//     cin >> N;

//     int a = 0, b = 1;
//     cout << "Fibonacci series: ";
//     for (int i = 1; i <= N; i++) {
//         cout << a << " ";
//         int next = a + b;
//         a = b;
//         b = next;
//     }
//     cout << endl;
//     return 0;
// }

// 34. Check if a number is in Fibonacci series

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     int a = 0, b = 1;
//     bool found = (num == 0);

//     while (b <= num) {
//         if (b == num) {
//             found = true;
//             break;
//         }
//         int next = a + b;
//         a = b;
//         b = next;
//     }

//     if (found)
//         cout << num << " is in the Fibonacci series." << endl;
//     else
//         cout << num << " is NOT in the Fibonacci series." << endl;

//     return 0;
// }

// 35. HCF of two numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     int hcf = 1;
//     for (int i = 1; i <= a && i <= b; i++) {
//         if (a % i == 0 && b % i == 0)
//             hcf = i;
//     }

//     cout << "HCF of " << a << " and " << b << " is: " << hcf << endl;
//     return 0;
// }

// 36. Check if two numbers are co-prime
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     int hcf = 1;
//     for (int i = 1; i <= a && i <= b; i++) {
//         if (a % i == 0 && b % i == 0)
//             hcf = i;
//     }

//     if (hcf == 1)
//         cout << a << " and " << b << " are co-prime." << endl;
//     else
//         cout << a << " and " << b << " are NOT co-prime." << endl;

//     return 0;
// }

// 37. Print all prime numbers under 100
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Prime numbers under 100: ";
//     for (int num = 2; num < 100; num++) {
//         bool isPrime = true;
//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime)
//             cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }

// 38. Print all prime numbers between two given numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int start, end;
//     cout << "Enter two numbers: ";
//     cin >> start >> end;

//     cout << "Prime numbers between " << start << " and " << end << ": ";
//     for (int num = start; num <= end; num++) {
//         if (num < 2) continue;
//         bool isPrime = true;
//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime)
//             cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }

//39. Find next prime number of a given number
// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if (n < 2) return false;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     int next = num + 1;
//     while (!isPrime(next)) {
//         next++;
//     }

//     cout << "The next prime number after " << num << " is " << next << endl;
//     return 0;
// }

//40. Check if a number is an Armstrong number
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int num, sum = 0, temp;
//     cout << "Enter a number: ";
//     cin >> num;

//     temp = num;
//     int digits = 0;
//     int t = temp;
//     while (t != 0) {
//         digits++;
//         t /= 10;
//     }

//     temp = num;
//     while (temp != 0) {
//         int rem = temp % 10;
//         sum += pow(rem, digits);
//         temp /= 10;
//     }

//     if (sum == num)
//         cout << num << " is an Armstrong number." << endl;
//     else
//         cout << num << " is NOT an Armstrong number." << endl;

//     return 0;
// }

// 41. Print all Armstrong numbers under 1000
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     cout << "Armstrong numbers under 1000: ";
//     for (int num = 0; num < 1000; num++) {
//         int sum = 0, temp = num, digits = 0;

//         int t = temp;
//         while (t != 0) {
//             digits++;
//             t /= 10;
//         }

//         temp = num;
//         while (temp != 0) {
//             int rem = temp % 10;
//             sum += pow(rem, digits);
//             temp /= 10;
//         }

//         if (sum == num)
//             cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }

// 24. Sum of first N odd natural numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int N, sum = 0;
//     cout << "Enter N: ";
//     cin >> N;

//     for (int i = 0; i < N; i++)
//         sum += 2 * i + 1;

//     cout << "Sum of first " << N << " odd natural numbers is: " << sum << endl;
//     return 0;
// }

// 25. Sum of squares of first N natural numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int N, sum = 0;
//     cout << "Enter N: ";
//     cin >> N;

//     for (int i = 1; i <= N; i++)
//         sum += i * i;

//     cout << "Sum of squares of first " << N << " natural numbers is: " << sum << endl;
//     return 0;
// }

// 26. Sum of cubes of first N natural numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int N, sum = 0;
//     cout << "Enter N: ";
//     cin >> N;

//     for (int i = 1; i <= N; i++)
//         sum += i * i * i;

//     cout << "Sum of cubes of first " << N << " natural numbers is: " << sum << endl;
//     return 0;
// }

// 27. Factorial of a number
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     unsigned long long fact = 1;
//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//         fact *= i;

//     cout << "Factorial of " << n << " is: " << fact << endl;
//     return 0;
// }

// 28. Count digits in a number
// #include <iostream>
// using namespace std;

// int main() {
//     int num, count = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     int temp = num;
//     if (temp == 0) count = 1; // special case
//     while (temp != 0) {
//         temp /= 10;
//         count++;
//     }

//     cout << "Number of digits in " << num << " is: " << count << endl;
//     return 0;
// }
// 29. Check if a number is prime
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num <= 1) {
//         cout << num << " is NOT prime." << endl;
//         return 0;
//     }

//     bool isPrime = true;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime)
//         cout << num << " is prime." << endl;
//     else
//         cout << num << " is NOT prime." << endl;

//     return 0;
// }
// 

// //30. LCM of two numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, max;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     max = (a > b) ? a : b;

//     while (true) {
//         if (max % a == 0 && max % b == 0)
//             break;
//         max++;
//     }

//     cout << "LCM of " << a << " and " << b << " is: " << max << endl;
//     return 0;
// }


// 31. Reverse a number

// #include <iostream>
// using namespace std;

// int main() {
//     int num, reversed = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     int temp = num;
//     while (temp != 0) {
//         int digit = temp % 10;
//         reversed = reversed * 10 + digit;
//         temp /= 10;
//     }

//     cout << "Reversed number: " << reversed << endl;
//     return 0;
// }

// 32. Nth term of Fibonacci series
// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cout << "Enter N: ";
//     cin >> N;

//     int a = 0, b = 1, term;
//     if (N == 1) term = a;
//     else if (N == 2) term = b;
//     else {
//         for (int i = 3; i <= N; i++) {
//             term = a + b;
//             a = b;
//             b = term;
//         }
//     }

//     cout << "The " << N << "th term of the Fibonacci series is: " << term << endl;
//     return 0;
// }


//* * * * *
//*       *
//*       *
//*       *
//* * * * *
// #include<iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(i == 0 || j == 0 || i == n-1 || j == n-1) {
//                 cout << "*"<<" ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// question3
// 1 2 3 4 5 
// 1 2 3 4 5
//1 2  3 4 5
//1 2 3 4 5 
//1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){

//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


 //*
 //* *
 // * * *
 // * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i-1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


/* 1 
   1 2 
   1 2 3
   1 2 3 4*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }