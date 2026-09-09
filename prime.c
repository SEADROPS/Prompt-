int main() {
    int n = 29;
    int isPrime = 1;

    if (n <= 1)
        isPrime = 0;
    else if (n == 2)
        isPrime = 1;
    else if (n % 2 == 0)
        isPrime = 0;
    else {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is prime", n);
    else
        printf("%d is NOT prime", n);

    return 0;
}