#include<iostream>

using namespace std;

int main()
             {
  int num, i;
  int product=1;

cout<<"Enter a number:\n";
cin>>num;

  for (i=num;i>0; i--)
    product = product * i;

cout<<"The factorial for "<<num << "is: "<< product<< endl;
  return 0;
}