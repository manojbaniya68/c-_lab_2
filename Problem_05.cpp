//  Create a 'STRING' class with char* and length as data member and
// overloads  ‘+’ ,’=’ and ‘ = = ‘  to perform respective operations. Use
// constructor and destructor whenever suitable

#include <iostream>
#include<string>
#include <cstring>
using namespace std;

class STRING
{
    char *string;
    int length;

public:
    STRING() : string(NULL), length(0) {} // default constructor

    STRING(const char str[])
    {
        length = strlen(str);
        string = new char[length + 1];
        strcpy(string, str);
    }

    STRING operator+(STRING &s)
    {
        STRING newString;
        newString.length = length + s.length;
        newString.string = new char[newString.length + 1];
        strcpy(newString.string, string);
        strcat(newString.string," ");
        strcat(newString.string, s.string);
        return newString;
    }

    bool operator ==(STRING &s)
    {
        return !strcmp(string,s.string);
    }

    // void operator =(STRING& s)
    // {
    //     strcpy(string,s.string);
    // }

    void showString()
    {
        cout << "Concatinated string is : " << string << endl;
    }
    ~STRING()
    {
        if(string == NULL)
        delete[] string;
    }
};

int main()
{
    STRING s1 = "Hello";
    STRING s2 = "world";
    STRING s3;
    s3 = s1 + s2;
    // s1 = s2;
    s3.showString();
    if(s1 == s2)
    {
        cout<<" Both are equal";
    }
    else
    {
        cout<<"Both are not equal";
    }
    return 0;
}