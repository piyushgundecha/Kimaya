#include<iostream>
#include<vector>
using namespace std;

int unique(vector<int> &vec){
    int ans = 0;
    for(int i = 0; i < vec.size(); i++){
        ans = ans ^ vec[i];
        }

        cout<<ans<<endl;
        return 0;
}

int main(){
    vector<int> vec = {4,1,2,1,2};
    unique(vec);
    return 0;
}