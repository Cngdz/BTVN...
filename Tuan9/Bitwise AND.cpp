int bitwiseAnd(int N, int K) {
     int max_value = 0;
    for (int A = 1; A <= N; ++A) {
        for (int B = A + 1; B <= N; ++B) {
            int bitwise_and = A & B;
            if (bitwise_and < K && bitwise_and > max_value) {
                max_value = bitwise_and;
            }
        }
    }
    return max_value;
}
