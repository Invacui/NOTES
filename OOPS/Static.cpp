===============================================================================<NOTE>===============================================================================
<TELLS ABOUT HOW STATIC HAS ONLY ONE INSTANCE THROUGHT THE CLASS>
#include <iostream>
using namespace std;
class A{
    public :
    void func()
    {
        static int A1;
        cout << A1 << endl;
        A1++;
        
    }
};
int main() {
int i ;
class A obj;
for(i = 0;i<5;i++){
obj.func();
}
    return 0;
}

===============================================================================<NOTE>===============================================================================
#include <iostream>
using namespace std;
class A{
    public :
    static int A1 ; //This does not create memory It only says “Every Entity shares one integer called A1.”
    static void func()  //A Static Member Can't just access any non static Variable both need to be static 
    {
        static int A2;
        cout << A1 << endl;
    }
};
//It is necessary to Define your S var using Scope resolution method bc linker cant link withot=ut it ,its like we made an A1 variable inside a namespace called 'A'
/*
*@eg namespace apple{void print(){cout<<"as"<<endl;}}main(){apple::print(); or namespace a = apple; a::print(); or using namespace apple::.. or just apple this will import all child from that namespace
*@Ref Cherno Namespace and static
*/
int A::A1 = 10; //This Creates Memory its Like int A1 = rvalue ; [::] Is like Go inside this thing and get that member.”
          
int main() {
class A obj;
//A::A1;                //we can also assign value here but it'd be good to assign it Globaly;
obj.func();
A::func();              //does the same thing 
    return 0;
}
