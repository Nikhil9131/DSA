#include<iostream>
using namespace std;
int mnain() {
    int n;
    cin>> n;
    if (n>=300 && n<=460){
        cout<<"you won a Macbook"<<endl;
        if(n>=300 && n<=380){
        cout<<"Model: M1 Macbook"<<endl;
    }else {
        cout<<"Model: M2 Macbook"<<endl;
    }

    } 
    else if ( n>=200 && n<=280){
        cout<<"you won a pack of Kurkure"<<endl;
        if(n>=200 && n<=240){
        cout<<"Flavour:chili kurkure"<<endl;
    }
    else {
        cout<<"Flavour: onion kurkure"<<endl;
    }
    } 

    else if (n>=1100 && n<=1500){
        cout<<"you won a cycle"<<endl;
        if(n>=1100 && n<=1300){
        cout<<"Brand: Avon cycle"<<endl;
    }
    else {
        cout<<"Brand: Hero Cycle"<<endl;
    }
    } 
    else if (n>=50 && n<=80){
        cout<<"you won a Bike"<<endl;
        if(n>=50 && n<=65){
        cout<<"Model: Bullet"<<endl;
    }
    else {
        cout<<"Model: Rajdoot"<<endl;
    }
    } 
    else{
        cout<<"Better luck next time"<<endl;
    }
    return 0;
}