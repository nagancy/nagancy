#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> TwoSums(vector<int> &arr, int target) {
    vector<int> result;
    map<int, int> record;
    for(int i=0;i<arr.size();i++) {
        if(record.find(target-arr[i])!=record.end()) {
            result.push_back(i);
            result.push_back(record[target-arr[i]]);
        } else {
            record.insert(pair<int,int>(arr[i],i));
        }
    }
    
    // for(int i=0;i<result.size();i++) {
    //     cout<<result[i]<<endl;
    // }
    return result;
}

int main()
{
    vector<int> q = {10, 15, 3, 7};
    int target = 17;
    vector<int> result = TwoSums(q, target);
    for(int i=0;i<result.size();i++){
        cout<<"index: "<<result[i]<<endl;
    }
    return 0;
}
