#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size){
    int hold = 0;
    size-=1;
    
    for(int k = 0;k < size;k++){
        for(int l = 0;l < size-k;l++)
         if(arr[l]>arr[l+1]) {
             hold=arr[l];
             arr[l]=arr[l+1];
             arr[l+1]=hold;
         }
    }
}
int main() {
    int N;
    cin >> N;

    int array[N];
    for(int i= 0; i < N;i++) {
        cin >> array[i];
    }

    bubble_sort(array, N);

    cout << "Setelah :\n";

    for(int j= 0; j < N; j++) {
        cout << array[j] << "\n";
    }
}