
//)Program to find the array is sorted or not.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the "<<n<<" elements of array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
      bool flag=true;
    for(int i=0;i<n-1;i++){ // Traversing the array
     if(v[i]>v[i+1]){  // comparing the elements
     flag=false;
     break;
     }
     }
     if(flag==true){
        cout<<"The given array is sorted and is: "<<endl;
        for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
     }
     }
     else {
        cout<<"Array is not sorted.";

     }
}
     
    

