class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> myhashmap;
        for (int i = 0; i < nums.size(); ++i)
        {
            myhashmap[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            auto finder = myhashmap.find(target - nums[i]);
            if (finder != myhashmap.end()&&finder->second!=i)
                return {finder->second, i};
        }
        return {};
    }
};