// https://app.codility.com/demo/results/training8ZSDTG-RUE/

#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    for (uint i=2; i<A.size(); ++i)
    {
        long l = (long) A[i-2] + (long) A[i-1];
        if (l>(long) A[i])
            return 1;
    }

    return 0;
}