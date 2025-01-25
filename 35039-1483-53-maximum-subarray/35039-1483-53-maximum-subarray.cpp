class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        

        //Problem: Maximum Subarray

        // What DS/Algo/Technique: Kadane’s Algorithm
        // Initialize a current max number
        // Initialize a global max number, initial index of the given array




        // What to do with the data
        /* 
            We are going to scane through the array
                Create a subarray
                to find the maximum sum of a subarray

                What we do is set a redeclaration of current_max to globalMax while we are going through the for loop


        */

        int currentMax = nums[0];
        int globalMax = nums[0];

        for(int i = 1; i < nums.size(); i ++){
            currentMax = max(nums[i], currentMax + nums[i]);
            cout << "The current Max is... " << currentMax << endl;

            if(currentMax > globalMax) {
                globalMax = currentMax;
            }

        }

        return globalMax; 








    }
};