// https://app.codility.com/demo/results/training4XHNY8-GEF/

#include <algorithm>
#include <numeric>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    int min_diff = INT32_MAX;
    int left_sum = 0;
    int right_sum = accumulate(A.begin(), A.end(), 0);

    for (uint64_t i=0; i<A.size()-1; ++i)
    {
        left_sum += A[i];
        right_sum -= A[i];
        
        min_diff = min(min_diff, abs(left_sum-right_sum));
    }

    return min_diff;
}