#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        int temp;
        unordered_set <int> s;

        for(int i=0; i<nums.size(); i++){
            if(s.find(target - nums[i]) == s.end())
                s.insert(nums[i]);

            else{
                ans.push_back(i);
                temp = *s.find(target - nums[i]);
                break;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == temp){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};