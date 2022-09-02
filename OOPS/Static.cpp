// Online C++ compiler to run C++ program online
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
