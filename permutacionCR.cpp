#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void permutacionCR(string aux,string *items,int n,int r){
    string resp=aux;
    if(r>0){
        for(int x=0; x<n; x++){
            permutacionCR(aux+items[x],items,n,r-1);
        }
    }else{
        cout<<"\n "<<resp;
    }
}



int main(){
    string items[]={"0","1","c","d","e","f","g","h","i","j"};
    int n,r;
    cout<<"\n N:";
    cin>>n;
    cout<<"\n R:";
    cin>>r;
    cout<<"\n Lista de elementos:\n ";
    for(int x=0; x<n; x++){
        cout<<items[x]<<",";
    }

    cout<<"\n\n Numero de permutaciones con repeticion: "<<pow(n,r);
    cout<<"\n\n Lista de permutaciones con repeticion:\n ";

    permutacionCR("",items,n,r);


    return 0;
}
