int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int d {Y-X};
    return d%D==0?d/D:(d/D)+1;
}