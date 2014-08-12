//
//  main.cpp
//  pro1
//
//  Created by el1ven on 14-6-6.
//  Copyright (c) 2014年 el1ven. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>


using namespace std;

void insertSort(int *arr, int n){
    for(int i = 1; i < n; i++){//默认第一个元素是有顺序的,所以插入n-1次即可
        int temp = arr[i];//准备比较,默认当前元素前段为有序，后端为无序，
        int j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];//大的元素向后移位，给新元素留空间插入
            j--;
        }
        arr[j+1] = temp;//找到位置后，把新的元素插入即可
    }
}

int main(){
    int n = 0;//记录输入元素个数
    while(cin>>n){
        int arr[100] = {0};
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        insertSort(arr,n);
        for(int j = 0; j < n; j++){
            cout<<arr[j]<<".";
        }
    
    }
    return 0;
}
























