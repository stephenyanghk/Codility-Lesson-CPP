// https://app.codility.com/demo/results/trainingYJDREC-4ME/

#include <unordered_set>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    unordered_set<int> s;

    for (int &i:A)
    {
        if (i>(int) A.size() || s.find(i)!=s.end())
            return 0;
        s.insert(i);
    }

    return 1;
}