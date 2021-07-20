#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int N=nums.size();
    int left = 1;
    int right = 1;
    vector<int> result(N,1);
    for(int i=1; i<N;i++){
        result[i]=left*nums[i-1];
        left=left*nums[i-1];
    }
    for(int i=N-1;i>=0;i--){
        result[i]=result[i]*right;
        right*=nums[i];
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result;
    result = productExceptSelf(nums);
    cout<<"Result: ";
    for(int i=0;i<result.size();i++){
        cout<< result[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
