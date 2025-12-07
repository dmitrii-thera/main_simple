int Fibonacci2(int n) {
    if (n == 0) return 1;

    int prev = 1; // F(0)
    int current = 1; // F(1)
    for (int i{2}; i <= n /* n == 2*/; ++i) {
        // F(2) = F(1) + F(0)
        int temp = current; // save F(1)
        current = current + prev;
        prev = temp; // F(3) = current(F(2)) + prev(F(1))
    }
    return current;
}


// inf Fibonacci1(int n) {
//     if (n == 0 || n == 1) return 1;
//     return Fibonacci1(n - 1) + Fibonacci1(n - 2);
// }