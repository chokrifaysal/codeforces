/*
 * URL: https://codeforces.com/problemset/problem/22/A
 * Author: CHOKRI Faysal
 * Date: 08/2025
 * License: MIT
 * */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[100];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    int min = 101;
    for (int i = 0; i < n; ++i)
        if (a[i] < min) min = a[i];

    int second = 101;
    for (int i = 0; i < n; ++i)
        if (a[i] > min && a[i] < second) second = a[i];

    if (second == 101) puts("NO");
    else printf("%d\n", second);
}
