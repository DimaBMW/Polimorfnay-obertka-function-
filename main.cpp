#include<iostream>
#include<vector>
using  namespace std;

void Foo(int a){
    if(a%2==0){
        cout<<"Foo"<<a<<endl;
    }
}
void Bac(int a){
    if(a%2!=0){
        cout<<"Bac"<<a<<endl;
    }
}
void DoWork(vector<int> &Myvector,vector<function<void(int)>> FuncVector){
    for(auto let:Myvector){
        for(auto &ar:FuncVector){
            ar(let);
        }
    }
    
}

int main(){
    vector<int> Myvector={12,67,89,54,34,55,23};
    vector<function<void(int)>> FVector;
    FVector.emplace_back(Foo);
    FVector.emplace_back(Bac);
    DoWork(Myvector, FVector);
}
