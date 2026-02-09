#include<iostream>
#include<climits>
using namespace std;
int main(){
  //  int arr[5]={8,13,-12,48,33};
    //int max = arr[0];
    //int s =sizeof(arr)/sizeof(int);
    //for(int i=1; i<s; i++){
        //if(arr[i]>max){
        //    max =arr[i];
      //  }
    //}
   // cout<<max;
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int ans=INT_MIN;
for(int i=0;i<n;i++){
    if(ans<arr[i]){
        ans=arr[i];
    }
}
cout<<ans<<endl;
return 0;
}

