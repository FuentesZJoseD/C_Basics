#include <iostream>

using namespace std;

int main()
{
/*    int num{};
    cout<<"Ingresa un entero positivo - inicia la cuenta regresiva: ";
    cin>>num;
    
    while(num>0)
    {
        cout<<num<<endl;
        num--;
    }
    cout<<"KBoom"<<endl;*/
    
/*    int num{};
    cout<<"Ingresa un numero menor a 100: ";
    cin>>num;
    
    while(num>=100)
    {
        cout<<"Ingresa un numero menor a 100: ";
        cin>>num;
    }
    cout<<"Gracias!"<<endl;*/
    
/*    bool listo{false};
    int num{0};
    
    while(!listo)
    {
        cout<<"Ingresa un numero entre 1 y 5: ";
        cin>>num;
        if(num<=1||num>=5)
        {
            cout<<"Fuera de rango. Intente de nuevo"<<endl;
        }else{
            cout<<"Gracias"<<endl;
            listo = true;
        }
    }*/
    
    const vector <int> vec{1,2,3,5};
    long long unsigned int count{0};
    bool done{false};

    while(!done)
    {
        if(count<vec.size())
        {
            if(vec.at(count)!=-99){
                count++;
            }else{
                cout<<"Hay "<<count<<" elementos antes del -99"<<endl;
                done = true;
            }   
        }else
        {
            cout<<"No hay -99 en el vector"<<endl;
            done = true;
        }
    }
    
    return 0;
}
