#include <bits/stdc++.h>

int reverse(int x)
{
    int sum = 0;
    while (x > 0)
    {
        int last_digits = x % 10;
        sum = sum * 10 + last_digits;
        x = x / 10;
    }
    return sum;
}

int main()
{
    std::cout << reverse(123);

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int); // Size of array in terms of elements
    std::cout<<size;
}
