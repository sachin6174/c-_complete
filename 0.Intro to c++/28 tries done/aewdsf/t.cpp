// #ifndef sachin2
// #define sachin2



// #endif
#include<bits/stdc++.h>
using namespace std;
#include"Tr.cpp"
class T{
    Tr *root=new Tr('\0');
    public:
    void insert (string s,Tr *root){
        if(s.size()==0){
            root->isterminal=1;
            return ;
        }
        Tr* temp;
        if(root->children[s[0]-'a']!=NULL){
            temp=root->children[s[0]-'a'];
        }else{
            temp=new Tr(s[0]);
            root->children[s[0]-'a']=temp;
        }
        insert(s.substr(1),temp);
    }
    void insert( string s){
        insert(s,root);
    }



   bool find(string s,Tr* root){
        if(s.size()==0 ){
            if(root->isterminal==true){
                return true;
            }else{
                return  false;
            }
        }
        if(root->children[s[0]-'a']!=NULL){
            return find(s.substr(1),root->children[s[0]-'a']);
        }else{
            return false;
        }
    }
    bool find(string s){
        return find(s,root);
    }

    void remove(string s,Tr*root){

            if(s.size()==0){
               root->isterminal=false;
               bool isdeletable=true;
                for(int i=0;i<26;i++){
                    if(root->children[i]!=NULL){
                        isdeletable=false;
                    }
                }
               if(isdeletable){
                   delete root;
               }
               return ;

            }
            if(root->children[s[0]-'a']!=NULL){
                remove(s.substr(1),root->children[s[0]-'a']);
            }else{
                return ;
            }
            
    }
    void remove(string s){
        remove( s,root);
    }

};
