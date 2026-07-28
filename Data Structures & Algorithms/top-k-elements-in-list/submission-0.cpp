class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(auto num : nums){
            mp[num]++;
        }
        vector<int> freq;
        for(auto a : mp){
            freq.push_back(a.first);
        }

        sort(freq.begin(), freq.end(), [&](auto int a, int b){
            return mp[a] > mp[b];
        });

        vector<int>ans;
        for(int i=0; i<k; i++){
            ans.push_back(freq[i]);
        }

        return ans;
    }
};
