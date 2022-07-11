// iostream standard header

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#pragma once
#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <yvals_core.h>
#if _STL_COMPILER_PREPROCESSOR
#include <istream>

#pragma pack(push, _CRT_PACKING)
#pragma warning(push, _STL_WARNING_LEVEL)
#pragma warning(disable : _STL_DISABLED_WARNINGS)
_STL_DISABLE_CLANG_WARNINGS
#pragma push_macro("new")
#undef new
_STD_BEGIN
#ifdef _M_CEE_PURE
__PURE_APPDOMAIN_GLOBAL extern istream cin;
__PURE_APPDOMAIN_GLOBAL extern ostream cout;
__PURE_APPDOMAIN_GLOBAL extern ostream cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream clog;
__PURE_APPDOMAIN_GLOBAL extern istream* _Ptr_cin;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_cout;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_clog;

__PURE_APPDOMAIN_GLOBAL extern wistream wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream wclog;
__PURE_APPDOMAIN_GLOBAL extern wistream* _Ptr_wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wclog;
#else // _M_CEE_PURE
      // OBJECTS
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT istream cin;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream cout;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream cerr;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream clog;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT istream* _Ptr_cin;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream* _Ptr_cout;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream* _Ptr_cerr;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT ostream* _Ptr_clog;

__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wistream wcin;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream wcout;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream wcerr;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream wclog;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wistream* _Ptr_wcin;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream* _Ptr_wcout;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream* _Ptr_wcerr;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2_IMPORT wostream* _Ptr_wclog;

// CLASS _Winit
class _CRTIMP2_PURE_IMPORT _Winit {
public:
    __thiscall _Winit();
    __thiscall ~_Winit() noexcept;

private:
    __PURE_APPDOMAIN_GLOBAL static int _Init_cnt;
};
#endif // _M_CEE_PURE
_STD_END
#pragma pop_macro("new")
_STL_RESTORE_CLANG_WARNINGS
#pragma warning(pop)
#pragma pack(pop)
#endif // _STL_COMPILER_PREPROCESSOR
#endif // _IOSTREAM_

// #include<stdio.h>
//compile://g++ test_code.cpp
//run://a.exe < input.txt > output.txt
// #include<bits/stdc++.h>
#define ll  long long
#define vec vector  
#define ar array  
//just Throw hash map
//Pick the global decleration
//delete the dynamic allocation
//os_base::sync_with_stdio(0); 
//cin.tie(0);  
using namespace std;

void my_machine(){

    
}

int binarySearch(int *input, int n, int val)
{
    //Write your code here
    
    int s=0,e=n-1,mid;
    while(s<=e){
        mid=s+((e-s)/2);
        if(input[mid]==val){
            // cout<<mid<<' ';
            return mid;
        }else if(mid<val){
            s=mid+1;
        }else{
            e=mid-1;
        }
        
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int input[]={1 ,3 ,7 ,9 ,10 ,13};
    cout<<binarySearch(input,6,45);

    /*
6
1 3 7 9 10 13
1
9
    */
    
    return 0;
}