#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=17;
  
 int arr[17] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
 int m = 7 ;
  sort(arr,arr+n);
  vector<int>brr;
  for(int i=0;i<=n-m;i++){
      brr.push_back(arr[m+i-1]-arr[i]);
  }
  
//   cout<<brr.size()<<endl;
  int temp=brr[0];
  int ans=0;
  for(int j=0;j<brr.size();j++){
      if(brr[j]<temp){
          temp=brr[j];
          
          ans=j;
      }
     
  }
 
  cout<<arr[m+ans-1]-arr[ans]<<endl;
 return 0;
}