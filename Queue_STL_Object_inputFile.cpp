#include<iostream>
#include<queue>
using namespace std;


class student{
private:
    int id;
    string name;
    double cgpa;
public:
    student(){

    }
    student(int id, string name, double cgpa){
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;
    }

    int getId(){
        return id;
    }
    string getName(){
        return name;
    }

    double getCgpa(){
        return cgpa;
    }

};

int main(){

queue<student> studentQueue;

freopen("cgpa.txt","r",stdin);

int idd;
string nname;
double ccgpa;

for(int i=0;i<3;i++){
    cin>>idd>>nname>>ccgpa;

    student s(idd,nname,ccgpa);
    studentQueue.push(s);

}


while(!studentQueue.empty()){
        student s = studentQueue.front();
    cout<<s.getId()<<" "<<s.getName()<<" "<<s.getCgpa()<<endl;
    studentQueue.pop();
}



return 0;
}
