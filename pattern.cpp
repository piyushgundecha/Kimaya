#include<iostream>
using namespace std;

int main(){

    cout<< "Enter the number";
    int n;
    cin>>n;
    cout<< endl;


    for(int i = 1;i<=n/2;i++){
        for(int j = 0;j<(n/2-i);j++){
            cout<<" ";
        }

        for (int j = 1; j <(i*2); j++)
        {
            cout << "*";
        }


        cout << endl;
    }

    for(int i = n/2;i>=1;i--){

        for(int j = 0;j<(n/2-i);j++){
            cout<<" ";
        }

        
        for (int j = 1; j <(i*2); j++)
        {
            cout << "*";
        }



        cout << endl;
    }





    cout<< endl;
}