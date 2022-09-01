// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
class Abs{
    protected :
    int x;
    
    public :
   
      void printVal(int num){
        x = num;
    }
    void printVal(){
        cout<<"\n Ans is :"<<total_percentage()<<endl;
    }
     virtual int total_percentage() = 0;
};
class y : public Abs
{
    public:
    int fin;
    int total_percentage(){
      return  x*100;
        
    }
};
int main() {
  y obj;
  obj.printVal(55);
  obj.total_percentage();
  obj.printVal();
  
return 0; 
}
