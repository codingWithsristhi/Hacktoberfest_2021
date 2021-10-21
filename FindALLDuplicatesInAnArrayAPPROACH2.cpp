#include<iostream>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {

    int hash[nums.size()+1]={0,};
    vector<int> ans;
    int i=0;
    while(i<nums.size()){
        hash[nums[i]]++;
        if(hash[nums[i]]>=2){
            ans.push_back(nums[i]);
        }
        i++;
    }
    return ans;
}
int main(){

    vector<int> v{4,3,2,7,8,2,3,1};
    for(auto x: findDuplicates(v)){
        cout<<x<<endl;
    }

    return 0;
}