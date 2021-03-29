// https://app.codility.com/demo/results/trainingEDDKY9-GDX/

#include <algorithm>

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> result (N, 0);

    int min_value {0};
    int max_value {0};

    for (uint64_t i=0; i<A.size(); ++i)
    {
        if (A[i]<=N)
        {
            uint64_t id = A[i]-1;
            result[id] = max(result[id], min_value);
            ++result[id];
            max_value = max(result[id], max_value);
        }
        else 
        {
            min_value = max_value;
        }
    }

    for (uint64_t i=0; i<result.size(); ++i)
        result[i] = max(result[i], min_value);

    return result;
}