//  Overload >> and << operators to input and display time
#include<iostream>
using namespace std;

class TIME{
    int hours,minutes,seconds;
    public:
       friend ostream& operator <<(ostream&,TIME&);
       friend istream& operator >>(istream&,TIME&);

};

ostream& operator <<(ostream& out, TIME& t)
{    
    out<<"Time is : "<<endl;
    out<<t.hours <<":"<<t.minutes<<":"<<t.seconds;
    return out;
    
}

istream& operator >>(istream& in,TIME &t)
{
    in>>t.hours>>t.minutes>>t.seconds;
    return in;
}


int main()
{
    TIME T;
    cout<<"Enter the time in HH:MM:SS formate"<<endl;
    cin>>T;
    cout<<T;
    return 0;
}