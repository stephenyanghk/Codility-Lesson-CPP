// https://app.codility.com/demo/results/trainingMSG7RC-G3U/

#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end(), greater<int>());
    int a = A[0]*A[1]*A[2];
    int b = A[0]*A[A.size()-1]*A[A.size()-2];
    return max(a, b);
}