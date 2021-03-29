// https://app.codility.com/demo/results/trainingAJEZWK-3C3/

#include <unordered_set>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    unordered_set<int> s;
    for (int &i:A)
        s.insert(i);
    return s.size();
}