#include <iostream>
#include <vector>

using namespace std;

int main()
{
/*    char seleccion{};
    do{
        cout<<"\n-----------"<<endl;
        cout<<"1. Haz esto\n2. Haz eso\n3. Haz otra cosa\nQ.Salir\nIngresa una seleccion"<<endl;
        cin>>seleccion;
        switch(seleccion)
        {
            case '1':
                cout<<"Haciendo esto"<<endl;
                break;
            case '2':
                cout<<"Haciendo eso"<<endl;
                break;
            case '3':
                cout<<"Haciendo otra cosa"<<endl;
                break;
            default:
                cout<<"Seleccion invalida\n"<<endl;
        }
    }while(seleccion!='q' && seleccion!='Q');*/
    
    
    
    vector <char> vec {};
    char vowel{'x'};
    long long unsigned int i{0};
    
    if(vec.size()!=0)
    {
        do{
        if(vec.at(i)=='a' || vec.at(i)=='e' || vec.at(i)=='i' || vec.at(i)=='o' || vec.at(i)=='u')
        {
            vowel = vec.at(i);
            cout<<"Vowel found: "<<vowel;
        }
        i++;   
    }while(vowel=='x' && i<vec.size());   
    }
    if(vowel=='x')
    {
        cout<<"No vowel was found";
    }
    
}
