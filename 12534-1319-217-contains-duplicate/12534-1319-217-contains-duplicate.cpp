class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Input 
        // array of nums 

        //what DS/Algo: Set

        unordered_set<int> mySet;


        for(int i = 0; i < nums.size(); i++) {
            if(mySet.count(nums[i])) {
                return true;
            } 
        
            mySet.insert(nums[i]);
            
        }

        return false; 


        //What do we do with the data?
        
    }
};