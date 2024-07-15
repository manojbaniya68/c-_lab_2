//To swap two private data using friend function.

#include<iostream>
using namespace std;

class NUMBERS
{
    int num1,num2;
    public:
      void getNumber()
      {
        cout<<"Enter any two numbers: "<<endl;
        cin>>num1>>num2;
      }

      void showSwapedNumber()
      {
        cout<<"Swaped numbers are: \n"<<num1<<endl<<num2<<endl;
      }
      friend void swap(NUMBERS&);
};

void swap(NUMBERS &t)
{
     int x;
     x = t.num1;
     t.num1 = t.num2;
     t.num2 = x;

}

int main()
{

    NUMBERS n1,n2;
    n1.getNumber();
    swap(n1);
    n1.showSwapedNumber();
    return 0;
}