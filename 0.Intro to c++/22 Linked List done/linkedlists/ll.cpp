#include <iostream>
#include <climits>
#include <vector>
#include<algorithm>
#include <utility> //contains the pair stl
#define endl '\n'// this is opposite of typedef
using namespace std;
typedef long long ll;// are used for data types
typedef vector<int> vi;
typedef pair<int,int> pi;
#include <stdint.h>
// macros
#define F first
#define S second
#define PB push_back
#define MP make_pair

template<typename T>
class node{
    public:
    T data<int>;
    node<T>*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    node(int data ,node<T>*next){
        this->data=data;
        this->next=next;
    }

    node<T>* input(){
        //using 2nd constructor
        return NULL;
    }

};

    void print(node<int>*head){
        if(head==NULL){
            return ;
        }
        cout<<head->data<<" ";
        print(head->next);
    }
//  template<typename T>
    node<int>* input(){
        //using 1st constructor
        int dat;
        cin>>dat;
        node<int>*head=NULL;
        node<int>*tail=NULL;
        while(dat!=-1){
            node<int>* p=new node<int> (dat);
            if(head==NULL){
                head=p;
                tail=p;
            }else{
               tail->next=p;
               tail=p;
               //or tail=tal->next;
            }
            cin>>dat;
        }
        return head;
    }

    node<int>* add(node<int>*head,int i,int data){
        int isize=-1;
        node<int>* temp=head;
        while (temp!=NULL){
            temp=temp->next;
            isize++;
        }
        //  cout<<isize<<endl;
        if(i<0){
            return head;
        }
        if(isize+1<i){
            return head;
        }

        if(i==0){
            node<int>*newnode=new node<int>(data);
            newnode->next=head;
           return newnode;
            // return head;
        }
        if(i==isize+1){
            node<int>*newnode=new node<int>(data);
            node<int>* temp=head;
            while (temp->next!=NULL){
            temp=temp->next;
            }  
            temp->next=newnode;
            return head;
        }
        if(1<=i && i<=isize){
            node<int>*newnode=new node<int>(data);
            int k=0;
            node<int>* temp=head;
            while (k==i-1)
            {
               temp=temp->next; 
                k++;
            }
            node<int>* i_minus_1=temp;
            node<int>* iplus1=temp->next;
            i_minus_1->next=newnode;
            newnode->next=iplus1;
            return head;   

        }
        
    }

// take input o(n^2)
    node<int>*input2(){
        node<int>*head=NULL;
        int dat;
        cin>>dat;
        while(dat!=-1){
            node<int>* newnode=new node<int>(dat);
            if(head==NULL){
                head=newnode;
            }
            else{
                node <int>*temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newnode;
            }
            cin>>dat;
        }
        return head;
    }
 node<int>* partition(node<int>*head,int x ){
    node<int>*fs=NULL;
    node<int>*se=NULL;
    node<int>*ss=NULL;
    node<int>* p=new node(head->data);
    while(head!=NULL){
        if(s==NULL){
            if(head->data<x){
            fs=p;
            fe=p;
            }else{
                fs=p;
                fe=p;
            }
        }else{
            if(head->data<x){
            fe->next=p;
            fe=p;
            }
        }
        
    }
 }

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // node<int>* head=input();
    node<int>* head2=input2();
    print(head2);
    cout<<endl;
   head2=add(head2,2,15);
    print(head2);


    return 0;
}