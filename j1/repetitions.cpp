#include <iostream>
using namespace std;
#include <string>

int main(){

string DNA;
//single char is a repetition

int maxRep=1;

cin>>DNA;
//single char is a repetition
int numRep=1;

for(int i=0;i<DNA.size()-1;i++){
    if(DNA[i]==DNA[i+1]){
        numRep++;
        if(numRep>maxRep){
            maxRep=numRep;
        }
    }else{
        numRep=1;
    }
}
cout<<maxRep;

}
