#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

// brute approach
// int maj(vector<int> &vec){
//     for(int i = 0;i<vec.size();i++){
//         int freq = 1;
//         for(int j =i+1;j<vec.size();j++){
//             if(vec[i]==vec[j]){
//                 freq++;
//                 }
            
//         }
//         if(freq>vec.size()/2){
//             cout<<vec[i];
//             break;
//         }
//     }
//     return 0;
// }

int maj(vector<int> vec){
    sort(vec.begin(),vec.end());
    int ans = vec[0];
    int freq = 1;

    for(int i = 0;i<vec.size();i++){
        
        if(vec[i]==vec[i+1]){
            freq++;
            cout<<"loop1";
        }
        else if(vec[i]!=vec[i+1]){
            
            freq = 1;
            cout<<"loop2";
        }
        if(freq>vec.size()/2){
            ans = vec[i+1];
            cout<<ans;
            cout<<"loop3";
        }
    }
   
    return 0;
}
int main(){
    vector <int> vec = {9};
    maj(vec);
}

// morre left