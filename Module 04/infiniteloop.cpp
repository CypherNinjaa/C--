#include<iostream>
using namespace std;
int main(){
    // while ('a'<'b')
    // {
    //     cout<<"Vikash ";
    // }
    int x = 4,y=0,z;
    while (x>=0)
    {
        x--;
        y++;
        if (x==y)
        {
            continue;
        }else{
            cout<<x<<" "<<y<<endl; 
        }
        
    }
    
    
}