/*
 * URL: https://codeforces.com/problemset/problem/1/A
 * Author: CHOKRI Faysal
 * Date: 08/2025
 * License: MIT
 * */

#include <stdio.h>
int main()
{
    long long n, m, a;
    if (scanf("%lld %lld %lld", &n, &m, &a) != 3) return 0;

    long long x = (n + a - 1) / a;
    long long y = (m + a - 1) / a;

    printf("%lld\n", x * y);
    return 0;
}
