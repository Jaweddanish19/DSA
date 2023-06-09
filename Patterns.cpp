#include<iostream>
using namespace std;

int main(){
    //print solid rectangle
   /*
    for (int row=0; row<10; row=row+1)
    {
    for(int col=0; col<50; col=col+1)
    { 
    cout<<"*";
    }  
    cout<<endl;
    }
    
   //print SQUARE
   for (int row=0; row<3; row=row+1) //outer loop for row
   {
    for (int col=0; col<3; col=col+1) //inner loop for column
    {
    cout<<"*";
    }
    cout<<endl;
   }

//printing by taking input
int n;
cout<<"enter the number of stars you want to print for sqaure"<<endl;
cin>>n;
for (int row=0; row<n; row=row+1)
{
    for(int col=0; col<n; col=col+1)
{
cout<<"*";
    }
    cout<<endl;
}

//print Hollow Rectangle

for (int row=0; row<3; row=row+1)
{
    if (row==0||row==2)
    {
        for (int col=0; col<5; col=col+1)
        {
            cout<<"*";
        }
    }
    else {
        cout<<"*";
        for (int i=0; i<3; i=i+1)
        {
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
}

for(int row=0; row<5; row=row+1)
{
    if(row==0||row==4)
    {
        for(int col=0; col<5; col=col+1)
        {
        cout<<"*";
        }
    }
    else{
        cout<<"*";
        for(int i=0; i<3; i=i+1)
        {
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
}

//GENERIC HOLLOW RECTANGLE
 int rowcount;
 int colcount;
 cout<<"Enter the number of Rows you want to print in Hollow RECTANGLE"<<endl;
 cin>>rowcount;
 cout<<"Enter the number of Column you want to print in Hollow RECTANGLE"<<endl;
 cin>>colcount;
 for(int row=0; row<rowcount; row=row+1)
 {
    if(row==0||row==rowcount-1)
    {
     for(int col=0; col<colcount; col=col+1)
     {
        cout<<"* ";
     }
    }
    else{
        cout<<"* ";
        for(int i=0; i<colcount-2; i=i+1 )
        {
            cout<<"  ";
        }
        cout<<"* ";
    }
    cout<<endl;
 }
 
//GENERIC HALF PYRAMID
int n;
cout<<"Enter row count n"<<endl;
cin>>n;
for(int row=0; row<n; row=row+1)
{
    for(int col=0; col<row+1; col=col+1)
    {
        cout<<"* ";
    }
    cout<<endl;
}*/
//GENERIC INVERTED HALF PYRAMID
int n;
cout<<"Enter the number of rows"<<endl;
cin>>n;
for(int row=0; row<n; row=row+1)
{
    for(int col=0; col<n-row; col=col+1)
    {
        cout<<"* ";
    }
    cout<<endl;
}
}