#include<iostream>
#include<vector>
using namespace std;


// int swap(vector<int> &vec){
//     int st = 0;
//     int end = vec.size()-1;
//     while(st<end){
//         swap(vec[st],vec[end]);
//         st++;
//         end--;
//     }

//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }


int swap1(vector <int> &vec){
    int vec_min = 0;
    int vec_max = 0;

    for(int i = 0;i<vec.size();i++){
        if(vec[i]<vec[vec_min]){
            vec_min = i;
            
        }
        if(vec[i]>vec[vec_max]){
            vec_max = i;
            
        }
    }
    swap(vec[vec_min],vec[vec_max]);
    for(int i = 0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}

int main(){
    vector<int> vec = {2,4,7,0,9,-1};
    swap1(vec);
}


// swap min & max in array

