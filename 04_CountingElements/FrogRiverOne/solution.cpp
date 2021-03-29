// https://app.codility.com/demo/results/training6FTU24-7ZB/

#include <unordered_set>

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    unordered_set<int> s;

    for (int i=1; i<=X; ++i)
        s.insert(i);

    for (uint64_t i=0; i<A.size(); ++i)
    {
        s.erase(A[i]);
        if (s.size()==0)
            return i;
    }

    return -1;        
}