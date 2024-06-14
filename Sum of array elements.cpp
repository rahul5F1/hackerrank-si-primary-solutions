/*
Given an array of integers, find the sum of the elements of the given array.
Note: Try to solve this without declaring/storing the array elements.

Input Format:
First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array and second line contains the elements of the array.

Constraints:
1 <= T <= 100
1 <= N <= 1000
1 <= ar[i] <= 1015

Output Format:
For each test case, print the sum of the elements of the array, separated by new line.

Sample Input:
2
3
5 15 3 
2
70 100 

Sample Output:
23
170
*/

//program
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;                                     //no. of test cases
    while(t--){
        int n;
        cin>>n;                                 //no. of array elements
        long long elem;                         //declaring a variable instead of array that stores array elements in each iteration
        long long sum=0;                        //initially sum will be 0
        for(int i=0;i<n;i++){
            cin>>elem;                          // storing array elements one by one
            sum=sum+elem;                       //summing up the array elements
        }
        cout<<sum<<endl;                       //printing the output
    }
    return 0;
}
