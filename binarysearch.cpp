#include <bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int>&arr , int n){


for(int  i = 0 ;i < n -1 ; i++){


    for(int j = 0 ; j <n -i -1; j++){



if(arr[j]>arr[j+1]){

    swap(arr[j], arr[j+1]);
}

    }
}

}
void print(vector<int> &arr) {
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}



void insertionSort(vector<int>&arr , int n){

for(int i = 1 ; i < n ; i++){

int key = arr[i] ;

int j  = i -1 ;


while(j >=0 && arr[j]> key){
arr[j+1] = arr[j];
j--;
}

arr[j+1] = key;

}





}



void selectionSort(vector<int>&arr , int n){

for(int i = 0 ; i< n -1 ; i++){

int minindex  = i ;


for(int j = i +1 ;j < n ; j++){



if(arr[j]< arr[minindex]){

    minindex = j;
}


} 

swap(arr[i], arr[minindex]);



}







}



// Merge function
void merge(vector<int>& arr, int s, int mid, int e) {
    int n1 = mid - s + 1;
    int n2 = e - mid;
    vector<int> leftArr(n1), rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[s + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = s;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    while (i < n1) {
        arr[k++] = leftArr[i++];
    }

    while (j < n2) {
        arr[k++] = rightArr[j++];
    }
}

// Merge sort function
void mergeSort(vector<int>& arr, int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;

        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);

        merge(arr, s, mid, e);
    }
}

// Print function
void print(const vector<int>& arr) {
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {9, 8, 7, 0};

    int n = arr.size();
    mergeSort(arr, 0, n - 1);

    print(arr);
    return 0;
}
