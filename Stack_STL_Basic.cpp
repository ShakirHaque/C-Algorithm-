#include<iostream>
#include<stack>
using namespace std;


int main(){

stack<string> nameStack;

nameStack.push("Richard");
nameStack.push("Aaron");
nameStack.push("Florence");


while(!nameStack.empty()){
        cout<<nameStack.top()<<endl;
        nameStack.pop();
}



return 0;
}
