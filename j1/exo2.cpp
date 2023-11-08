#include <iostream>
using namespace std;


int main(){

int som,size,nombre,Total;

cin>>size;
Total=(size*(size+1))/2;

for (int i = 0; i <size-1; i++)
{
    cin>>nombre;
    som=som+nombre;
}

cout<<"Missing number is "<<Total-som;

return 0;
}