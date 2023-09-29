#include<iostream>
using namespace std;
int main(){
    // int i;
    // for(i=101;i<=200;i++){
    //     cout<<i;
    // }
//  for(char name='a';name<='z';name++){
//     cout<<name<<" ";
//}
// int n;
//  cout<<"enter the number ";
//  cin>>n;
//  for(int i=n;i>=1;i=i-1)
//    cout<<i<<" ";


// int i;
// for(i=1;i<=100;i=i+3)
//   cout<<i<<" ";

// int i,n;
// cout<<"Enter the table ";
// cin>>n;
// for(i=1;i<=10;i++){
//     cout<<n<<"*"<<n<<"="<<n*i<<endl;

// int n;
// cin>>n;
// for(int i=n; i<=10*n;i=i+n)
//     cout<<n*i<<endl;
// int n,i;
// cout<<"enter the number ";
// cin>>n;
// cout<<"enter the power ";
// cin>>i;
// int m=n;
// for(int k=1;k<i;k++)
//   n=n*m;
// cout<<n;

//  int n;
//   cout<<"enter the number  ";
//   cin>>n;
//   int k=0;
// //   for(int i=1;i<=n;i++)
// //     k=k+i;
// // cout<<k;
//    cout<<(n*(n+1))/2;
// int n;
// cout<<"enter the number ";
// cin>>n;
// int y=1;
// for(int i=1;i<=n;i=i+1){
//       y=y*i;
// }
// cout<<y;
 int n;
 cout<<"enter the number ";
 cin>>n;
 if(n<2)
  {
  cout<<"not prime";
  return 0;
  }
  else
  {  for(int i=2;i<n;i++){
    if(n%i==0)
    {
        cout<<"not prime";
        return 0;
    }
  }

  }
  cout<<"prime";
  return 0;

}






