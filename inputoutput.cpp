#include <iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row , int col){
for (int rows = 0; rows < row; rows++)
{
for (int cols = 0; cols < col; cols++)
{
    if(arr[rows][cols]==target){
        return 1;
    }
}
}
return 0;


}
int main()
{
   
 int arr[3][4];   

   // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
 //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


//row waise input
for (int row = 0; row < 3; row++)
{
for (int col = 0; col < 4; col++)
{
    cin>>arr[row][col];
}
}

/* //input col waise
for (int col = 0; col < 4; col++)
{
for (int row = 0; row < 3; row++)
{
    cin>>arr[row][col];
}
} */

//print 2d array
for (int row = 0; row < 3; row++)
{
for (int col = 0; col < 4; col++)
{
    cout<<arr[row][col]<<" ";
}
cout<<endl;
}

//search in 2D array
int target;
cin>>target;
if(isPresent(arr,target,3,4)){
cout<<"Element Is Found";
}else{
    cout<<"Element Is Not Found";
}




    return 0;
}
