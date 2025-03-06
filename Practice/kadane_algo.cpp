#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int max_sub_sum(vector<int> &vec){
   int max_sum = INT_MIN;
   int curr_sum = 0;
   for(int val:vec){
      curr_sum+=val;
      max_sum = max(curr_sum,max_sum);

      if(curr_sum<0){
         curr_sum = 0;
      }
   }
   return max_sum;

}
int main(){
   vector<int> vec = {-4,-3,5,-2,9,-1,8};
   cout<<"Maximum Subarray Sum is "<<max_sub_sum(vec)<<endl;

   return 0;
    
}