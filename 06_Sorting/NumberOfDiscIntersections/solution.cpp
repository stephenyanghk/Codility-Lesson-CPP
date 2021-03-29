// https://app.codility.com/demo/results/training5TFHYY-6T7/

#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<long> lower (A.size());
    vector<long> upper (A.size());

    for (uint i=0; i<A.size(); ++i)
    {
        lower[i] = i - (long) A[i];
        upper[i] = i + (long) A[i];
    }

    sort(lower.begin(), lower.end());
    sort(upper.begin(), upper.end());
    
    long intersection {0};

    uint j {0};
    for (uint i=0; i<A.size(); ++i)
    {
        while (j<A.size() && upper[i]>=lower[j])
        {
            intersection += j;
            intersection -= i;
            ++j;
        }
    }

    return intersection>10000000?-1:intersection;
}