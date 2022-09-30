#include <iostream>
#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    
    string word;
        char ch;

        Solution(string word,char ch){
            this->word=word;
            this->ch=ch;

        }
    string reversePrefix(string word, char ch) {
        
        int index1 = word.find(ch);
    int n=index1+1;
     string r=word.substr(index1+1);
       string tempword;
        for(int i=n-1;i>=0;i--)
      tempword.push_back(word[i]);
     tempword=tempword+r;
   
        
        return  tempword;
        
        
        
    }
};

int main()
{
    string word;
    cin>>word;
    char ch;
    cin>>ch;
    Solution a(word,ch);

    cout<<a.reversePrefix(a.word,  a.ch);

    return 0;
}



