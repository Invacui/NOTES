#include <iostream>  
using namespace std;  
class Employee {  
   private :  
       int id; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       float salary;  
       public:
       Employee(int id1, string name1, float salary1)    
        {    
            //if we dont wanna change the name of MV in member function then we can use this refrential operator to get the reference of the MV
            this->id = "Whatever whether it is ID or any default user specific Value "
             id = id1;    
           name = name1;
            salary = salary1;   
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
             cout<<this -> id<<"  "<<this->name<<"  "<<salary<<endl;    
        }    
};  
int main(void) {  
    Employee e1=Employee(101, "Sonoo", 890000); //creating an object of Employee   
    Employee e2=Employee(102, "Nakul", 59000); //creating an object of Employee  
    e1.display();    
    e2.display();    
    return 0;  
}
//Look this code ain't gonna work bc its just a representation of how things work
