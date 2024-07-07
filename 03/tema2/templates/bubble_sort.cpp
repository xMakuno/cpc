#include <bits/stdc++.h>
using namespace std;

const int maxn = 105;

int arr[maxn];

void Bubble_sort(int N){
    for(int i = 1; i <= N; i++){
        for(int j = 2; j <= N; j++){
            if(arr[j - 1] > arr[j]){
                swap(arr[j - 1], arr[j]);            
            }
        }
    }
    return;
}

int main()
{

    for(int i = 1; i <= 10; i++){
        arr[i] = random()%50;
    }

    Bubble_sort(10);

    for(int i = 1; i <= 10; i++){
        cout << arr[i] << "\n";
    }

    return 0;
}

