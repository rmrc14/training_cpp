class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {


        std::unordered_map<int, int> index_of;           // value -> index

        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            int complement = target - nums[i];

            auto it = index_of.find(complement);
            if (it != index_of.end()) {
                // Found the earlier index that complements nums[i]
                return { it->second, i };
            }
            index_of[nums[i]] = i;   // store value's index
        }

        // If no solution exists (shouldn’t happen per constraints)
        throw std::invalid_argument("No two-sum solution");



        /* int size= nums.size();
         for(int i=0;i<size;i++)
         {
             for(int j=i+1;j<size;j++)
             {
                 if(nums[i] + nums[j] == target)
                  return {i,j};
             }
         }
  throw std::invalid_argument("No two-sum solution");*/

    }
};