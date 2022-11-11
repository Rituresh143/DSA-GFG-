#include <bits/stdc++.h>
using namespace std;

int printS(int ind,int s,int sum,int arr[],int n){

   if(ind==n){
   	// conditon satisfied
   	if(s==sum)
   		return 1;
   
   	// condtion not satisfied
   	else return 0;
   }

  
   s += arr[ind];


   int l = printS(ind+1,s,sum,arr,n);

   s -= arr[ind];
  

   int r = printS(ind+1,s,sum,arr,n);

   return l+r;
}

int main(){

	int arr[] = {1,2,1};
	int n = 3;
	int sum = 2;
	cout<<printS(0,0,sum,arr,n);

	return 0;
}