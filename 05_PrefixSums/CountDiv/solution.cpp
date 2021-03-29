// https://app.codility.com/demo/results/trainingMKS8EC-TEV/

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int result = B/K - A/K;
    return A%K==0?result+1:result;
}