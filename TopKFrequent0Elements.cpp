class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>> p;
        for(auto x:freq){
            p.push({x.second,x.first});
        }
        for(int i=0;i<k;i++){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};
