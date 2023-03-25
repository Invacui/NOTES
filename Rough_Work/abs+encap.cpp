// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class cost {
    private:
    int cost1;
    std::string type;
    public:
    cost();
    void setter(int , const std::string&);
    void getter();
    void print();
    int getx();
    std::string getss();
};
cost :: cost()
{
    this->cost1 = 0;
    this->type = "NIL";
}
void cost :: setter(int x,const std::string& s){
    this->cost1 = x;
    this->type = s;
}
void cost :: print(){
    std::cout<<"The value of x is :"<<getx()<<"\tThe value of  string is :"<<getss();
} 
int cost :: getx(){return cost1;}
string cost :: getss(){return type;}
int main() {
    cost obj1;
    std::cout<<"Before assigning the values::"<<std::endl;
    obj1.print();
    obj1.setter(5,"Ashu");
    std::cout<<"\nAfter assigning the values::"<<std::endl;
    obj1.print();
    return 0;
}
