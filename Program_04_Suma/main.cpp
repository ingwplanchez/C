#include <iostream>

using namespace std;
int suma,i,num,par;

main()
{
    while(i<10){

        cout<<"Dame el numero "<<i+1<<" "<<": " <<endl;
        cin>>num;
        par = num%2;
        if(par == 0){
            suma +=num;
        }
        i++;
    }
    cout<<" La suma de los numeros pares es "<<suma<<endl;
}
