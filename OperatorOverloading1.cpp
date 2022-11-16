#include <iostream> 
#include <vector>
#define loop(i,a,n) for(int i=a;i<n;i++)
using namespace std; 

template <typename T> 
ostream& operator<<(ostream& os, const vector<T>& v) 
{ 
    os << "[";
    loop(i,0,v.size()) { 
        os << v[i]; 
        if (i != v.size() - 1) 
            os << ", "; 
    }
    os << "]\n";
    return os; 
}


int main(){

    vector<int> vt={1,2,3,4,5,6};
    cout<<vt<<endl;


    return 0;
}