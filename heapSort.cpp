#include<iostream>
using namespace std;
#define loop(i,a,n) for(int i=a;i<n;i++)

void mySwap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}


void heapify(int arr[],int n,int ind){

    int bigger=ind;
    int left=2*ind +1;
    int right=2*ind +2;

    if(left<n && arr[left]>arr[bigger]){
        bigger=left;
    }
    if(right<n && arr[right]>arr[bigger]){
        bigger=right;
    }

    if(bigger != ind){
        mySwap(arr[bigger],arr[ind]);
        heapify(arr,n,bigger);
    }


}

void buildHeap(int arr[],int n){
    
    int startInd=(n/2)-1;

    for(int i=startInd;i>=0;i--){
        heapify(arr,n,i);
    }
}

void heapSort(int arr[],int n){

    for(int i=n-1;i>=0;i--){
        mySwap(arr[0],arr[i]);
        heapify(arr,i,0);
    }


}




int main(){

    cout<<"Number of elements: ";int n;cin>>n;
    cout<<"Give the elements: ";
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    buildHeap(arr,n);
    heapSort(arr,n);

    cout<<"Sorted Array:\n";
    loop(i,0,n){
        cout<<arr[i]<<" ";
    }cout<<endl;






    return 0;
}