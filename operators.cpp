#include <iostream>
using namespace std;

int main(){
    int a=5;
    int b=3;

     //ARITHMETIC OPERATORS


     cout << a+b << endl;
     cout << a-b << endl;
     cout << a*b << endl;
     cout << a/b << endl;
     cout << a%b << endl;

     //RELATIONAL OPERATORS

     cout << (a!=b)<< endl;
     cout << (a>=b) << endl;
     cout << (a<=b) << endl;
     cout << (a==b) << endl;

     //LOGICAL OPERATORS

     cout << (a>=5 && b<=3) << endl;
     cout << (a>5 && b<3) << endl;
     cout << (a>5 && b<=3) << endl;
     cout << (a>5 || b<=3) << endl;
     cout << (a>5) << endl;
     cout << !(a>5) << endl;


}
