/*
 * URL: https://codeforces.com/problemset/problem/10/A
 * Author: CHOKRI Faysal
 * Date: 08/2025
 * License: MIT
 * */

#include <stdio.h>

int main() 
{
    int n, p1, p2, p3, t1, t2;
    scanf("%d %d %d %d %d %d", &n, &p1, &p2, &p3, &t1, &t2);

    int total = 0;
    int prev_r = 0;

    for (int i = 0; i < n; ++i) 
    {
        int l, r;
        scanf("%d %d", &l, &r);

        total += (r - l) * p1;

        if (i) 
        {
            int gap = l - prev_r;

            if (gap >= t1 + t2) 
            {
                total += t1 * p1 + t2 * p2 + (gap - t1 - t2) * p3;
            } else if (gap >= t1) 
            {
                total += t1 * p1 + (gap - t1) * p2;
            } else 
            {
                total += gap * p1;
            }
        }

        prev_r = r;
    }

    printf("%d\n", total);
    return 0;
}
