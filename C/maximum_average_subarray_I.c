int sum(int* nums, int n){
    int res = 0;
    for(int i = 0; i < n; i++) res += *(nums+i);
    return res;
}

double findMaxAverage(int* nums, int numsSize, int k){
    double s = 0, tmp = 0;
        
    for(int i = 0; i < numsSize-k; i++) {
        tmp += nums[i+k] - nums[i];
        if(tmp > s) s = tmp;
    }
            
    return ((double)sum(nums, k)+s) / k;
}
