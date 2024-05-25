class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>frequency;
        int result=0;

        for(int num:nums)
        {
            frequency[num]++;
        }

        for(const auto&entry : frequency)
        {
            if(entry.second==2)
            {
                result ^=entry.first;
            }
        }

        return result;
        
    }
};