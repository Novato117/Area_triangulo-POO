#include <iostream>
using namespace std;
class triangulo{
public:
    float base =2, altura=6;
    float area();
    void imprimeatributos();
};

float triangulo::area(){
return ((base*altura)/2);
}
void triangulo::imprimeatributos(){
cout<<" \n la base es:"<<base<<endl;
cout<<"\n la altura es :"<<altura<<endl;
}

int main(){
triangulo objtriang;
float area;
objtriang.imprimeatributos();
area=objtriang.area();
cout<<"\n EL area es :"<<area<<endl;
}
