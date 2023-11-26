#include<bits/stdc++.h>

using namespace std;


void pat5(int n){

    for(int i =1; i<=n;i++){
        for(int j = 0; j<n-i+1;j++){
          
          cout << "x";
        }

        cout<<endl;
    }
}


int main(){

pat5(5);

}