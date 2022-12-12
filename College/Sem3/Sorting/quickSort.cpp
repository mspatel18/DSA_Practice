#include<iostream>
using namespace std;
void print(int K[],int n){
    for(int i=0;i<n;i++){
        cout<<K[i]<<" ";
    }
    cout<<endl;
}
int partition(int K[],int lb,int ub){
    int pivot=K[lb];
    int i=lb;
    int j=ub;
    while(i<j){
        while(K[i]<=pivot){
            i++;
        }
        while(K[j]>pivot){
            j--;
        }
        if(i<j)
            swap(K[i],K[j]);
    }
    swap(K[lb],K[j]);
    print(K,ub);
    return j;
}
void QuickSort(int K[],int lb,int ub){
    if(lb<ub){
        int loc=partition(K,lb,ub);
        QuickSort(K,lb,loc-1);
        QuickSort(K,loc+1,ub);
    }
}
int main(){
    int arr[]={42,23,74,11,65,58,94,36,99,87};
    print(arr,9);
    QuickSort(arr,0,9);
    print(arr,9);
    return 0;
}