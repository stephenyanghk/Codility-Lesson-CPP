// https://app.codility.com/demo/results/trainingFCQ6MR-45W/

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    uint64_t n = A.size();
    vector<int> result (n);

    for (uint64_t i=0; i<n; ++i)
        result[(i+K)%n] = A[i];

    return result;
}