/*
to find the minimun=m and maximun=m no. in array 
*/

#include<iostream>
using namespace std;
int getmax(int num[],int n){
    int maxI  = INT64_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,num[i]);
    }
    return maxi;

}
int getmin(int num[],int n){
    int mini  = INT64_MAX;
    for(int i=0;i<n;i++){
        mini = min(mini, num[i]);
    }
    return mini;        

}

int main()
{
    int size;
    cin>>size;
    int num[size];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];

          
    }

}



   