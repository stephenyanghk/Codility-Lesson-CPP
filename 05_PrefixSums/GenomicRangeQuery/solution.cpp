// https://app.codility.com/demo/results/training4YUB7F-CY2/

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> result (P.size());

    uint n = S.length();
    vector<int> A (n+1);
    vector<int> C (n+1);
    vector<int> G (n+1);
    vector<int> T (n+1);

    for (uint i=0; i<S.length(); ++i)
    {
        switch (S[i])
        {
            case 'A':
                A[i+1] = A[i]+1;
                C[i+1] = C[i];
                G[i+1] = G[i];
                T[i+1] = T[i];
                break;

            case 'C':
                A[i+1] = A[i];
                C[i+1] = C[i]+1;
                G[i+1] = G[i];
                T[i+1] = T[i];
                break;

            case 'G':
                A[i+1] = A[i];
                C[i+1] = C[i];
                G[i+1] = G[i]+1;
                T[i+1] = T[i];
                break;

            case 'T':
                A[i+1] = A[i];
                C[i+1] = C[i];
                G[i+1] = G[i];
                T[i+1] = T[i]+1;
                break;
        }
    }

    for (uint i=0; i<P.size(); ++i)
    {
        int start = P[i];
        int end = Q[i];

        if (A[end+1] - A[start] > 0)
            result[i] = 1;
        else if (C[end+1] - C[start] > 0)
            result[i] = 2;
        else if (G[end+1] - G[start] > 0)
            result[i] = 3;
        else 
            result[i] = 4;
    }

    return result;
}