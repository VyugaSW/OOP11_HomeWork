
#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>

template <typename T>
T FindMax(T* arr, int s){
    if (is_same<T, char>::value) {
        char* max = new char[50];
        for (int i = 1; i < s; i++) {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }
    else {
        int max = arr[0];
        for (int i = 1; i < s; i++) {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }
}
template <typename T>
T FindMin(T* arr, int s) {
    if (is_same<T, char>::value) {
        char* min = new char[50];
        for (int i = 1; i < s; i++) {
            if (arr[i] < min)
                min = arr[i];
        }
        return min;
    }
    else {
        int min = arr[0];
        for (int i = 1; i < s; i++) {
            if (arr[i] < min)
                min = arr[i];
        }
        return min;
    }
}
template <typename T>
void SortArr(T* arr, int s) {
    for (int i = 0; i < s; i++) {
        for (int j = i; j < s; j++) {
            if (arr[i] > arr[j])
                std::swap(arr[i], arr[j]);
        }
    }
}
template <typename T>
void ReplaceEl(T* arr,int s, T el, T value) {
    for (int i = 0; i < s; i++) {
        if (arr[i] == el) {
            arr[i] = value;
            break;
        }
    }
}
template <typename T>
int BinaryFinding(T* arr, int s, int usKey) {
    bool flag = false;
    int left = 0;
    int right = s - 1;
    while ((l <= r) && (!flag)) {
        average = (l + r) / 2;
        if (arr[average] == usKey)
            flag = true;
        if (arr[average] > usKey)
            r = mid - 1;
        else
            l = mid + 1;
    }
    if (flag)
        return average;
    else
        return -9999999;
}


int main()
{
    int* arr = new int[10]{ 1,5,8,7,10,12,84,-1,0 };
    
}

