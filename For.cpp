#include <iostream>

using namespace std;

int main(){
/*    for(int i{1}; i <= 10; i++)
    {
        cout<<i<<endl;
    }*/
    
/*    for(int i{1}; i <= 10; i+=2)
    {
        cout<<i<<endl;
    }*/

/*    for(int i{10}; i > 0; i--)
    {
        cout<<i<<endl;
    }
    */
/*    for(int i{10}; i <= 100; i+=10)
    {
        cout<<i<<endl;
    }*/
    
    for(int i{1}; i <= 100; i++)
    {
        cout<<i;
        (i % 10 == 0)? cout<<"\n" : cout<<"\t";
    }

    return 0;
}
