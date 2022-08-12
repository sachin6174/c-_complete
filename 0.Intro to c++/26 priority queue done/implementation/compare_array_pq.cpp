#include<bits/stdc++.h>
using namespace std;
# include <iostream>

template<typename T>

class elem{
    public:

    T data;
    int priority;
    elem( T d,int p){
        this->data=d;
        this->priority=p;
    }
};
bool compare(elem<string>* e1,elem<string> *e2){
    return e1->priority<e2->priority;
}

int main(){
    elem <string>e1("sachin",4);
    elem <string>e2("Raju",2);
    elem <string>e3("bunty",3);
    vector<elem<string>*>v;
    v.push_back(&e1);
    v.push_back(&e2);
    v.push_back(&e3);
    sort(v.begin(),v.end(),compare);

    vector<elem<string>*>::iterator it=(v.begin());
    while(it!=v.end()){
        cout<<(*it)->data<<" "<<endl;
        it++;
    }
    // cout<<v[v.size()-1].data;
    // v.pop_back();
    // cout<<endl;
    // vector<elem<string>>::iterator it=v.begin();
    // while(it!=v.end()){
    //     cout<<it->data<<" "<<endl;
    //     it++;
    // }
}
