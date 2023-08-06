#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void printF(int ind,int sum,int arr[],vector<int>&ds,int n){
    
   if(ind == n){
       
       cout <<  sum <<" ";
       cout << endl;
       return;
   }
   printF(ind+1,sum+arr[ind],arr,ds,n);
   
   printF(ind+1,sum,arr,ds,n);
}

int main()
{
    int arr[]={1,2,3};
    int n= 3;
    vector<int>ds;
    printF(0,0,arr,ds,n);
    return 0;
}
