class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result = {}; //用于存放返回结果
        for(auto i = nums.begin(); i != nums.end(); i++)
        {
            // 从容器中的第一个元素开始遍历，计算它和后面每一个元素的和，并与target值相比较
            for(auto j = i+1; j != nums.end(); j++)
            {
                if (*i + *j == target)
                {
                    // 向resul中添加符合条件的值 到容器第一个元素的距离
                    result.push_back(i - nums.begin()); 
                    result.push_back(j - nums.begin());
                    // 返回结果
                    return result;
                }
            }
        }
        cout << "Solution doesn't exit" << endl;
        return result;
    }
};

/******************************************
* 时间复杂度分析：假设nums中有n个元素，从第一个元素开始遍历，依次计算它和后面每一个元素的和。
* 计算次数为 (n-1) + (n-2) + ... + 1 = O(n^2) 
******************************************/
