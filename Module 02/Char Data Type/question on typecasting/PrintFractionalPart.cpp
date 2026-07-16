#include <iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    // -it doesn't take greatest integer function
    int y =(int)x;
    if(y<0) y=y-1;
    int z = (float)y;
    x = x-z;
    cout<<x;
}