/*
 * @Author: penetrick0
 * @URL: https://www.acmicpc.net/problem/1037
 */

#include <iostream>

using namespace std;

void sort(int *ptr, int count)
{
    int tmp = 0;

    for(int i = count - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(*(ptr + j) > *(ptr + i))
            {
                tmp = *(ptr + j);
                *(ptr + j) = *(ptr + i);
                *(ptr + i) = tmp;
            }
        }
    }
}

int main(void)
{
    int count;
    int *arr;

    cin >> count;
    arr = new int[count];

    for(int i = 0; i < count; i++)
        cin >> *(arr + i);
    
    sort(arr, count);

    cout << *(arr + 0) * *(arr + (count - 1)) << endl;

    delete[] arr;

    return 0;
}