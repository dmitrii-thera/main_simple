bool IsPrime(int n) {
    if (n == 1) return false;
    // n = 3
    for (int k = 2; k < n; ++k) {
        // if (3 % 2 == 0) -> != 0
        if (n % k == 0)
            return false;
    }
    return true;
}

bool IsPrime2(int n) {
    // from 1 to sqrt(n)
    // if n = k*x, than k > sqrt(n); x < sqrt(n);
    if ( n == 1) return false;
    // k <= sqrt(n)
    // k*k <= n
    // for (int k = 2; k <= sqrt(n); ++k)
    for (int k = 2; (k * k) <= n; ++k) {
        if (n % k == 0) return false;
    }
    return true;

}