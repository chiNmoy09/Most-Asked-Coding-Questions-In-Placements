#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i=a;i<n;i++)

struct Node{
    string s;
    int freq;
    Node* left;
    Node* right;

    Node(string s,int freq){
        left=NULL,right=NULL;
        this->s=s;
        this->freq=freq;
    }

};

struct comp{
    bool operator()(Node* l,Node* r){
    return l->freq > r->freq;
    }
};

void printCode(struct Node* node,string str){
    if(!node){
        return;
    }

    if(node->s != "#"){
        cout<<node->s<<": "<<str<<endl;
    }

    printCode(node->left,str+"0");
    printCode(node->right,str+"1");

}


void huffmanCode(string data[],int freq[],int n){

    priority_queue<Node*,vector<Node*>,comp> minHeap;
    loop(i,0,n){
        minHeap.push(new Node(data[i],freq[i]));
    }

    struct Node *left,*right,*top;
    while(minHeap.size() !=1){

        left=minHeap.top();
        minHeap.pop();

        right=minHeap.top();
        minHeap.pop();

        top=new Node("#",left->freq + right->freq);
        top->left=left;
        top->right=right;

        minHeap.push(top);

    }


    printCode(minHeap.top(),"");
}





int main(){

    cout<<"Number of data: ";int n;cin>>n;
    cout<<"Input(data):\n";
    string data[n];
    int freq[n];
    loop(i,0,n){
        cout<<"Data(Character,Frequency)-"<<i+1<<" : ";
        cin>>data[i]>>freq[i];
    }   

    huffmanCode(data,freq,n);


    return 0;
}