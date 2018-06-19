int Solution::maxSubArray(const vector<int> &A) {
    int i = 1;
    int j;
    int k;
    int run_sum = A[0];//running sum
    int max_sum = run_sum;
    int upto_sum = run_sum;//sum upto index value k;
    
    for(j = 1; j<A.size(); j++)
    {   
        k = i;
        run_sum = A[k-1];
        while(k <= j)
        {
            if(run_sum + A[k] < A[k])
            {
                i++;
                run_sum = A[k];
            }
            else
            {
                run_sum += A[k];
            }
            k++;
        }
        if(run_sum > max_sum) max_sum = run_sum;
    }
    return max_sum;
}