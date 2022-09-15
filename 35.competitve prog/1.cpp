


// go to  tools->build system ->new system->paste content below

/*

{
"cmd": ["g++.exe","-std=c++14", "${file}", "-o", "${file_base_name}.exe", "&&" , "${file_base_name}.exe<inputf.in>outputf.in"],
"selector":"source.cpp",
"shell":true,
"working_dir":"$file_path"
}
//save it with name c++14 

*/

// then got to ->tools->build system ->select c++14



//alt+shift+3  for 3 windows
//ctrl+shift+b -> to run

// save first window as inputf.in
//save second window as outputf.in
// if program run infinite times then no output will be shown 
// and you have to kill program through task manager

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	cout<<s;
} 