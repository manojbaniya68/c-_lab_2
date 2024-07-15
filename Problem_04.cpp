//  Create a class called 'TIME' that has- three integer data members for hours, minutes and seconds
//  - constructor to initialize the object to zero
//  - constructor to initialize the object to some constant value
//  - overload +,- to add and subtract two TIME objects
//  - overload > function to compare two time
//  -  member function to display time in HH:MM:SS format

#include<iostream>
using namespace std;

class TIME{
    
    public:
      int hours,minutes,seconds;
        void getTime()
        {
            cout<<"Enter time in HH:MM:SS formate"<<endl;
            cin>>hours>>minutes>>seconds;
        }

        // constructor to initialize the object to zero.
        TIME():hours(0),minutes(0),seconds(0)
        {}  
        // constructor to initialize the object to some constant value.
        TIME(int h,int m,int s):hours(h),minutes(m),seconds(s)
        {}

        TIME operator +(TIME t)
        {
            int totalSeconds = (hours + t.hours) * 3600 + (minutes + t.minutes)*60 + seconds + t.seconds;
            return TIME(totalSeconds/3600 ,totalSeconds%3600/60 , totalSeconds%3600%60); 
        }
        TIME operator -(TIME t)
        {
            int totalDifference = (hours*3600 + minutes*60 + seconds) - (t.hours*3600 + t.minutes*60 + t.seconds);
            if(totalDifference < 0)
            {
                totalDifference = -totalDifference;
            }
            return TIME(totalDifference/3600 ,totalDifference%3600/60 , totalDifference%3600%60); 
        }
        
        bool operator >(TIME t)
        {
            int  totalDifference= (hours*3600 + minutes*60 + seconds) - (t.hours*3600 + t.minutes*60 + t.seconds);
            if(totalDifference < 0)
            {
               return false;
            }
            else
            {
                return true;
            }
        }


        void displayTime()
        {
            cout<<hours << ":" <<minutes << ":" <<seconds;
        }
};

int main()
{
    TIME t1,t2,sum,difference;
    t1.getTime();
    t2.getTime();
    sum = t1 + t2;
    difference = t1 - t2;
    cout<<"Sum is : ";
    sum.displayTime();
    cout<<endl;
    cout<<"Difference is : ";
    difference.displayTime();  
    cout<<endl;

    if(t1>t2)
    {
        t1.displayTime();
        cout<<" is greater than ";
        t2.displayTime();
    }  
    else
    {
        t1.displayTime();
        cout<<" is smaller than ";
        t2.displayTime();
    }
    return 0;
}