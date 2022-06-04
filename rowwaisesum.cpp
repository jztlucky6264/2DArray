#include <iostream>
using namespace std;

//row waise sum
void RowwaiseSum(int arr[][4]){
    for (int row = 0; row < 3; row++)
{
    int sum=0;
for (int col = 0; col < 4; col++)
{
    sum=sum+arr[row][col];
}
cout<<sum<<endl;
}
}

//largest sum of the row
int maxi=INT_MIN;
int rowIndex=-1;
void PrintLargestSum(int arr[][4]){
    for (int row = 0; row < 3; row++)
{
    int sum=0;
for (int col = 0; col < 4; col++)
{
    sum=sum+arr[row][col];
}
if(maxi<sum){
    maxi=sum;
    rowIndex=row;
}
}
cout<<maxi<<endl;
cout<<"index of the largest sum row "<<endl;
cout<<rowIndex<<endl;

}

//col waise sum
void ColwaiseSum(int arr[][4]){
    for (int col = 0; col < 4; col++)
{
    int sum=0;
for (int row = 0; row < 3; row++)
{
    sum=sum+arr[row][col];
}
cout<<sum<<endl;
}
}
int main() {

int arr[3][4];

//taking input row waise
cout<<"Enter the Element of the array"<<endl;
for (int row = 0; row < 3; row++)
{
for (int col = 0; col < 4; col++)
{
    cin>>arr[row][col];   
}
}

//print the array
cout<<"Printing the array"<<endl;
for (int row = 0; row < 3; row++)
{

for (int col = 0; col < 4; col++)
{
    cout<<arr[row][col]<<" ";
   
}
cout<<endl;
}

//call the function of row waise sum
cout<<"Row waise Sum"<<endl;
RowwaiseSum(arr);
cout<<"Col waise Sum"<<endl;
ColwaiseSum(arr);
cout<<"Print largest sum row"<<endl;
PrintLargestSum(arr);
    return 0;
}




