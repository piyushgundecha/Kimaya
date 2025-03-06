#include<iostream>
using namespace std;
#include<vector>


//brute force


// int pair_sum(vector<int> &vec,int target){
//     int sum = 0;
//     for(int i = 0;i<vec.size();i++){
//         for(int j = i;j<vec.size();j++){
//             if(i!=j && vec[i]+vec[j]==target){
//                 cout<<vec[i]<<" "<<vec[j]<<endl;
//             }
//         }
//     }
//     return 0;
//     }



void pair_sum(vector<int> &vec,int n,int target){
    int st = 0,end=n-1,curr_sum;
    vector<int> ans;
    while(st<end){
        curr_sum = vec[st]+vec[end];

        if(curr_sum==target){
            cout<<vec[st]<<vec[end];
            ans.push_back(vec[st]);
            ans.push_back(vec[end]);
            st++;
            end--;

        }

        else if(curr_sum<target){
            st++;
        }
        else{
            end--;
        }

    }
    

}
int main(){

    vector <int> vec = {2,3,4,5,6,7,11,15};
    pair_sum(vec,8,9);
}