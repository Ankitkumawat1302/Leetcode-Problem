class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<int> arr(10000,0) ;
    int n = nums.size();

    for(int i = 0; i < n; i++){
        int number = nums[i];
        arr[number]++;
    }

    int maxCount = 0;
    int mode = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > maxCount){
            maxCount = arr[i];
            mode = i;
        }
    }  
    return mode;
    } 
    
};
