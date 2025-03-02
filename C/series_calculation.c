#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// calculate (nPr)
long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

// calculate (nCr)
long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// calculate nPr + nPr+1 + ... + nPp
long long sum_permutations(int n, int r, int p) {
    long long sum = 0;
    for (int i = r; i <= p; i++) {
        sum += permutation(n, i);
    }
    return sum;
}

// calculate nCr + nCr+1 + ... + nCp
long long sum_combinations(int n, int r, int p) {
    long long sum = 0;
    for (int i = r; i <= p; i++) {
        sum += combination(n, i);
    }
    return sum;
}

// ∑ (nCr+i * mCs−i) from i=1 to p
long long sum_combination_product(int n, int r, int p, int m, int s) {
    long long sum = 0;
    for (int i = 1; i <= p; i++) {
        sum += combination(n, r + i) * combination(m, s - i);
    }
    return sum;
}

int main()
{
    int n, r, p, m, s;

    printf("Enter values for n, r, and p (0 ≤ r ≤ p ≤ n): ");
    scanf("%d %d %d", &n, &r, &p);

    printf("nPr + nPr+1 + ... + nPp = %lld\n", sum_permutations(n, r, p));
    printf("nCr + nCr+1 + ... + nCp = %lld\n", sum_combinations(n, r, p));

    printf("Enter values for m and s ( 0 ≤ r ≤ n - p and p ≤ s ≤ m): ");
    scanf("%d %d", &m, &s);

    printf("∑ (nCr+i * mCs-i) = %lld\n", sum_combination_product(n, r, p, m, s));

    return 0;
}