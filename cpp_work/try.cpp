// cpp code

#include<iostream>
using namespace std;
class A
{      
    public:
    A()
    {
      cout<<"hello world"<<endl;
    }
    ~A()
    {
        cout<<"A's destructor called"<<endl;
    }
};



int main()
{
   A  a;
    return 0;
}


