// https://app.codility.com/demo/results/trainingC8FH38-ZNY/

#include <cfloat>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    uint n = A.size();

    double min_avg {DBL_MAX};
    int min_index {0};

    for (uint i=0; i<n-2; ++i)
    {
        double avg2 = (A[i]+A[i+1])/2.0;
        double avg3 = (A[i]+A[i+1]+A[i+2])/3.0;
        double curr_min = min(avg2, avg3);

        if (curr_min<min_avg)
        {
            min_avg = curr_min;
            min_index = i;
        }
    }

    double avg2 = (A[n-2]+A[n-1])/2;
    if (avg2<min_avg)
        return n-2;

    return min_index;
}