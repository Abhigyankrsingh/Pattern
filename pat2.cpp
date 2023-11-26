#include<bits/stdc++.h>


using namespace std;


void pat2(int n){
    for(int i =0; i<n;i++){
       for(int j = 0; j<=i;j++){
        cout<< "* ";
       }

       cout<< endl;
    }
}



int main(){


int n =4;

pat2(n);
}