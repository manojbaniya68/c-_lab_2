//  To write a C++ program to overload all relational operators to compare
// US currency with Nepalese currency. Use conversion rate $1=NRs
// 101.36(Note: make two classes to represent each currency)

#include <iostream>
using namespace std;

class npCurrency;
class usCurrency
{
    float USD;
    friend bool operator >(usCurrency, npCurrency);
    friend bool operator <(usCurrency, npCurrency);
    friend bool operator <= (usCurrency, npCurrency);
    friend bool operator >=(usCurrency, npCurrency);
    friend bool operator ==(usCurrency, npCurrency);
    friend bool operator !=(usCurrency, npCurrency);



public:
    void getCurrency()
    {
        cout << "Enter the US currency : " << endl;
        cin >> USD;
    }
    float getUsCurrency()
    {
        return USD * 133.6;
    }

};

class npCurrency
{
    float NP;
    friend bool operator >(npCurrency,usCurrency);
    friend bool operator <(npCurrency,usCurrency);
    friend bool operator <= (npCurrency,usCurrency);
    friend bool operator >=(npCurrency,usCurrency);
    friend bool operator ==(npCurrency,usCurrency);
    friend bool operator !=(npCurrency,usCurrency);

public:
    void getCurrency()
    {
        cout << "Enter the NP currency : " << endl;
        cin >> NP;
    }
    float getNpCurrency()
    {
        return NP;
    }
};

bool operator >(usCurrency u, npCurrency n)
{
    return u.getUsCurrency() > n.getNpCurrency();
}
bool operator <(usCurrency u, npCurrency n)
{
    return u.getUsCurrency() < n.getNpCurrency();
}
bool operator >=(usCurrency u, npCurrency n)
{
    return u.getUsCurrency() >= n.getNpCurrency();
}
bool operator <=(usCurrency u, npCurrency n)
{
    return u.getUsCurrency() <= n.getNpCurrency();
}
bool operator ==(usCurrency u, npCurrency n)
{
    return u.getUsCurrency() == n.getNpCurrency();
}
bool operator !=(usCurrency u, npCurrency n)
{
    return u.getUsCurrency() != n.getNpCurrency();
}


bool operator >(npCurrency n,usCurrency u)
{
    return n.getNpCurrency() > u.getUsCurrency();
}
bool operator <(npCurrency n,usCurrency u)
{
    return n.getNpCurrency() < u.getUsCurrency();
}
bool operator >=(npCurrency n,usCurrency u)
{
    return n.getNpCurrency() >= u.getUsCurrency();
}
bool operator <= (npCurrency n,usCurrency u)
{
    return n.getNpCurrency() <=  u.getUsCurrency();
}
bool operator == (npCurrency n,usCurrency u)
{
    return n.getNpCurrency() == u.getUsCurrency();
}
bool operator != (npCurrency n,usCurrency u)
{
    return n.getNpCurrency() !=  u.getUsCurrency();
}

int main()
{
    usCurrency u;
    npCurrency n;
    u.getCurrency();
    n.getCurrency();
    if (n>u)
        cout << "Nepalese Rupees is greater than US dollor";
    else if(n == u)
        cout << "Both are equal";
    else
     cout<<"US dollor is greater than Nepalese Rupees.";    
    return 0;
}