#include <iostream>
class Entity {
    private :
    int x ,
        z ,
        y;
    public :
    Entity(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Entity(Entity& e){
        x = e.x;
        y = e.y;
        z = e.z;
    }
    void print(){
        std::cout<<x<<","<<y<<","<<z<<std::endl;
    }
    
};
int main() {
    Entity e(5,46,2);
   
    Entity f(e);
    e.print();
    
    
    return 0;
}
/*=====================================================================================================================================================*/
#include <iostream>
class Entity {
    private :
    int x ,
        z ,
        y;
    public :
    Entity(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Entity(Entity *e){
        x = e->x;
        y = e->y;
        z = e->z;
    }
    void print(){
        std::cout<<x<<","<<y<<","<<z<<std::endl;
    }
    
};
int main() {
    Entity *e = new Entity(5,46,2); //Creating Object using new 
   
    Entity f(*e);                   //Passing object as args to copyconstructors;
    e->print();
    
    
    return 0;
}
/*=====================================================================================================================================================*/
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class const_pro{
    private:
    int c;
    int k;
    public:
    const_pro(int c, int k){
        this->c = c;
        this->k = k;
    }
    const_pro(const_pro *o1)
    {
     this->c = o1->c;
     this->k = o1->k;
    }
    void print(){
        std::cout<<c<<" "<<k<<"\n";
    }
    
};
int main() {
   const_pro *o1;
   o1 = new const_pro(5,55);
   const_pro o2(o1);
   o2.print();
   
   return 0;
}
