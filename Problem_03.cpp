// operator overloading.complex number
#include<iostream>
#include<string>
using namespace std;
int i = 0;
class COMPLEX{
    float real,imaginary;

    public:
     string operation[5] = {"Addition","Subtraction","Multiplication","Division"};
    // char operation[6][30] = {"Addition","Subtraction","Multiplication","Division"};

      COMPLEX(float rel = 0,float img = 0)
      {
        real = rel;
        imaginary = img;
      }
      void getComplexNumber()
      {
        cout<<"Enter complex numbers: "<<endl;
        cin>>real>>imaginary;
      }
      void show()
      {
        if(imaginary >= 0)
        {
        cout<<operation[i] <<" of two complex numbers is : "<<real<<" + i"<<imaginary<<endl;          
        }
        if(imaginary<0)
        {
          cout<<operation[i] <<" of two complex numbers is : "<<real<<" - i"<<-imaginary<<endl;
        }
        i++;
      }

      COMPLEX operator +(COMPLEX c)
      {
        return COMPLEX( real + c.real,imaginary + c.imaginary);
      }

      COMPLEX operator -(COMPLEX c)
      {
          return COMPLEX( real - c.real,imaginary - c.imaginary);
      }

      COMPLEX operator *(COMPLEX c)
      {
        return COMPLEX((real * c.real) - (imaginary * c.imaginary), (real * c.imaginary) + (imaginary * c.real));
      }

      COMPLEX operator /(COMPLEX c)
      {
        return COMPLEX((real * c.real + imaginary * c.imaginary)/(c.imaginary * c.imaginary + c.real * c.real), (imaginary * c.real - real * c.imaginary)/(c.real * c.real + c.imaginary * c.imaginary));
      }

};

int main()
{
    COMPLEX c1,c2,add,sub,product,division;
    c1.getComplexNumber();
    c2.getComplexNumber();
    add = c1 + c2;
    sub = c1 - c2;
    product = c1 * c2;
    division = c1/c2;
    add.show();
    sub.show();
    product.show();
    division.show();
    return 0;
}