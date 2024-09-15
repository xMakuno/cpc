#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;

int arr[maxn];
int temp[maxn];

void merge_function(int ini, int fin){
    int mit = (ini + fin) / 2;

    int i = ini, j = mit + 1, pos = i;

    while(i <= mit || j <= fin){
        if(i <= mit && j <= fin){
            if(arr[i] < arr[j]){
                temp[pos] = arr[i];
                i++;
            }else{
                temp[pos] = arr[j];
                j++;
            }
        }
        else{
            if(i <= mit){
                temp[pos] = arr[i];
                i++;
            }else{
                temp[pos] = arr[j];
                j++;
            }
        }
        pos++;
    }

    for(i = ini; i <= fin; i++){
        arr[i] = temp[i];
    }

    return;
}

void mergeSort(int ini, int fin){

    if(fin - ini > 2){
        int mit = (ini + fin) / 2;

        mergeSort(ini, mit);
        mergeSort(mit + 1, fin);
        merge_function(ini, fin);
    }
    else if(fin - ini == 2 && arr[ini] > arr[fin]){
        swap(arr[ini], arr[fin]);
    }
    return;
}

int main()
{

    for(int i = 1; i <= 8; i++){
        arr[i] = i;
    }
    int i = 1;
    do{
        i++;
        next_permutation(arr + 1, arr + 9);
    }while(i <= 10);

    mergeSort(1, 8);

    for(int i = 1; i <= 8; i++){
        cout << arr[i] << '\n';
    }

    return 0;
}
