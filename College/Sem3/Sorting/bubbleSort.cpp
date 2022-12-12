//Algorithm
/*
    begin Bubble sort
    for all array elements
        if arr[i]>arr[i+1]
            swap(arr[i],arr[i+1])
        end if
    end for
    return arr
    end Bubble sort
*/
#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

void BubbleSort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int size=7;
    int arr[size]={4,5,2,6,7,3,3};
    print(arr,size);
    BubbleSort(arr,size);
    print(arr,size);
    return 0;
}