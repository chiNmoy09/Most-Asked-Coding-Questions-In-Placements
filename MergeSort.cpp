#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,n) for(int i=a;i<n;i++)

void code_init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

}

void merge(int a[],int left,int mid,int right,int n){
    int n1=mid-left+1;
    int n2=right-mid;
    int b[n1],c[n2];

    loop(i,0,n1){
        b[i]=a[left+i];
    }
    loop(i,0,n2){
        c[i]=a[mid+1+i];
    }

    int i=0,j=0,k=left;

    while(i<n1 && j<n2){
        if(b[i]<=c[j]){
            a[k]=b[i];
            k++,i++;
        }else{
            a[k]=c[j];
            k++,j++;
        }
    }

    while(i<n1){
        a[k]=b[i];
        k++,i++;
    }
    while(j<n2){
        a[k]=c[j];
        k++,j++;
    }

}





void mergeSort(int a[],int left,int right,int n){
    if(left<right){
        int mid=(left+right)>>1;//(a+b)>>1 is equal to (a+b)/2;
        mergeSort(a,left,mid,n);
        mergeSort(a,mid+1,right,n);
        merge(a,left,mid,right,n);
    }
}






int main(){
    code_init();

    //Number of test cases
    int t;cin>>t;
    while(t--){
        //Array Size
        int n;cin>>n;
        int a[n];
        //Array Elements
        loop(i,0,n){
            cin>>a[i];
        }

        mergeSort(a,0,n-1,n);

        //Print the Array
        loop(i,0,n){
            cout<<a[i]<<" ";
        }cout<<endl;


    }

return 0;
}