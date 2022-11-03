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
