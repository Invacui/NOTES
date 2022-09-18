#include <iostream>
using namespace std;
//enum declaration
class poly{
    public:
   virtual void hell(){
        cout<<"ME"<<endl;
    }
};
    class der : public poly
    {
        public:
        void hell()
        {
             cout<<"you"<<endl;
        }
        
    };
int main()
{
    class poly *A ;
    class der D;
    A =  &D;
    A->hell();
    //Creating a Derived class object using Base class Reference
    class poly *DD = new der();
    DD->hell();
    return 0;
}
