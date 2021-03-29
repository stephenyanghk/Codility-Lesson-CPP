// https://app.codility.com/demo/results/training7XQSZ2-7DD/

#include <vector>
using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    uint64_t n = A.size();
    uint64_t calculated_sum = (1+n+1)*(n+1)/2;
    uint64_t curr_sum = 0;

    for (int i:A)
        curr_sum += i;

    return calculated_sum-curr_sum;
}
