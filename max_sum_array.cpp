int Solution::maxSubArray(const vector<int> &A) {
    int j = 1;
    int run_sum = A[0];
    int max_sum = A[0];
    
    while(j < A.size())
    {   
        if(run_sum + A[j] <= A[j]) run_sum = A[j];
        
        else run_sum += A[j];    
        
        if(max_sum < run_sum) max_sum = run_sum;
        j++;
    }
    return max_sum;
}
