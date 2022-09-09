// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int mat1[3][3] = {5,0,0,0,5,0,0,0,5};
    int mat2[3][3] = {6,1,0,2,9,0,2,0,10}; 
    int res[3][3];
    int *m1,*m2,*re;
    re = &res[0][0];
    m1 = &mat1[0][0];
    m2 = &mat2[0][0];
    for(m1 ; m1 <=&mat1[2][2] ; m1++ )
    {
        *re = *m1 + *m2;
        re++;
        m2++;
    }
    
        for(re = &res[0][0] ; re <=&res[2][2] ; re++ )
    {
        int index = {re - (&res[0][0])};
            cout<<"INDEX ::"<< index <<"==> "<<*re<<" \n";
    }
    
    return 0;
}
