class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        //What DS/Algo/Tech: Prefix and Suffix Product Arrays Technique

        // First create two arrays-to store all the elements visited
        // Create 1 array for the left side visited
        // Create 1 array for the right side visited

        // Loop through our given array
            // Create both the left and the right side arrays
            // Create a formula to take the index of each element
            // Store them in their respective arrays
            // Multiply both the right and left side arrrays we created for the output array
            
            
        int right = 1;
        int left = 1;

        vector<int> output(nums.size());
        
        output[0] = 1;
        for(int i = 1; i < nums.size(); i++) {
            output[i] = left * nums[i - 1];
            left *= nums[i - 1];
        }

        
        for(int i = output.size() - 2; i >= 0; i --) {
            output[i] *= right * nums[i + 1];
            right *= nums[i + 1];

        }


        return output;


    }
};