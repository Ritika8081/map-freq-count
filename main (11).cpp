/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int arr[5]={1,2,2,4,5};
    map<int,int>mp;
    for(int i=0;i<=5;i++){
        mp[arr[i]]++;
    }
    for(auto map:mp){
        cout<<"freq of"<<"is"<<map.first<<" "<<map.second<<endl;
        
    }

    return 0;
}