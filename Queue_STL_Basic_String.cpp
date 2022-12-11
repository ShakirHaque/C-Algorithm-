#include<iostream>
#include<queue>
using namespace std;


int main(){

queue<string> q;

q.push("Richard");
q.push("Aaron");
q.push("Florence");


while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
}



return 0;
}
