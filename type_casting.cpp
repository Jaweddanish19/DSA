#include <iostream>
using namespace std;

int main(){
char ch=97;
cout << ch << endl;
// here we have given integer data type but the output is character data type , and this is called Type casting 
//here integer data  type is type casted into character data type

int number = 'c';
cout << number << endl;

//upper examples are of Implicit data type casting
//type casting where data is automatically type casted is called IMPLICIT TYPE CASTING
//while when the data is manually definen in type casting is called EXPLICIT TYPE CASTING
//here are some examples of EXPLICIT TYPE CASTING

double num=5.7;
int sum = int(num)+8;
cout << "value of sum is " << sum << endl;

char number1 = 'a';
int sum1 = int (number1) + 97;
cout << "value of sum 1 is " << sum1 << endl;
//this is the example of implicit as well as explicit type conversion

char number2 = 10345;
cout << number2 << endl;
}
