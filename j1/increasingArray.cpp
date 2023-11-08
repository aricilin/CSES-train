#include <iostream>
using namespace std;

int main(){

int n;

cin>>n;


int *numbers =new int[n];


for(int i =0; i<n;i++){
    cin>>numbers[i];
}

int moves =0;

for(int i=0;i<n-1;i++){
    if(numbers[i+1]-numbers[i]<0){
        moves=moves+(-1*(numbers[i+1]-numbers[i]));
        numbers[i+1]=numbers[i];
    }
}
cout<<moves;


delete numbers;
}