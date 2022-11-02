// Online C++ compiler to run C++ program online
//MIL(Member Initilizer List)
#include <iostream>
#include <string>
class framework{
    public :
    framework(){ std::cout<<"\nDefault contructors\n"; }                        //Def Construct
    
    framework(const std::string& name)
    { std::cout<<"\nParametrized constructors with parameter: "<<name<<"\n"; }  //Par Construct
};

class Entity{
  private :
  std::string m_name;       //declaration of str var
  framework E2;             //initializing object of framework entity, its its a Const it will get auto Invoked;
  public:
 
  Entity(const std::string name)            //Par Construct
  : E2(name)                                //Member Initializer List
  {
     // framework  E2(name);                //Its gonna call Parameterized Con
      m_name = name;
      std::cout<<"Entity ==>"<<" "<<m_name<<"\n";

  }
};

int main() {
    // Write C++ code here
    Entity A("Ashu");
    return 0;
}
