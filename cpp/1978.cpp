/*
 * @Author: penetrick0
 * @URL: https://www.acmicpc.net/problem/1978
 */

#include <iostream>

using namespace std;

int prime(int num)
{
    if(num == 1)
        return 0;

    for(int j = 2; j < num; j++)
        if(num % j == 0)
            return 0;
    
    return 1;
}

int main(void)
{
    int n, count = 0;
    int *arr;

    cin >> n;
    arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cin >> *(arr + i);

        if(prime(*(arr + i)) == 1)
            count++;
    }
    
    cout << count << endl;

    delete[] arr;
    
    return 0;
}
