// using Aarray
#include<iostream>
using namespace std;
template<typename T>
class stack{
    T * data ;
    int next_index;
    int total_size;

    public:
    stack(){
        total_size=1;
        data=new T [total_size];
        next_index=0;
    }
    // return the number of elemnt present in stack
    int size(){
        return next_index;
    }
    bool isempty(){
        if(next_index==0){
            return true;
        }else{
            return false;
        }
        //return !next_index;
    }
    void push (T element ){
        if(next_index== total_size){
            // cout<<"size full"<<endl;

            T *newarray=new T [2*total_size];
            total_size=2*total_size;
            for(int i=0;i<next_index;i++){
                newarray[i]=data[i];
            }
            delete[](data);
            data=newarray;
            // data[next_index++]=element;

            // return;
        }
        data[next_index++]=element;
    }
    void pop(){
        if(!isempty()){
            next_index--;
        }else{
            cout<<"empty"<<endl;
        }
        

    }
    T top(){
        if(!isempty()){
             return data[next_index-1];
        }else{
            cout<<"empty"<<endl;
             return 0;
        }
        
    }
};

int main(){
    stack<int>s;
    s.push(10);
    s.push(10);
    s.push(10); 
    s.push(30);
    s.push(20);
    s.push(10);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<< s.size()<<" "<<s.isempty()<<endl;

}