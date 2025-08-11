/*
 * URL:  https://codeforces.com/problemset/problem/11/A
 * Author: CHOKRI Faysal
 * Date: 08/2025
 * License: MIT
 * */

#include <stdio.h>
int main() 
{
    int n, d;
    scanf("%d %d", &n, &d);

    long long moves = 0;
    int prev; 
    scanf("%d", &prev);

    for (int i = 1; i < n; ++i)
    {
        int cur;
        scanf("%d", &cur);

        if (cur <= prev)
        {
            long long need = prev - cur + 1;
            long long k = (need + d - 1) / d;

            moves += k;
            cur += k * d;
        }
        prev = cur;
    }
    printf("%lld\n", moves);
    return 0;
}
