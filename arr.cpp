
//                             // insertion in arrray


// #include<stdio.h>
// void traversal(int arr[100],int n){
//  for(int i=0;i<n;i++)
// {
//     printf("enter a element :%d\n",arr[i]);

// }
// }int insertion_array(int arr[100],int element,int index,int capacity,int size){
// if(size>=capacity){
//     return-1;

// }
// for(int i=size-1; i>=index; i--)
// {
//     arr[i+1]=arr[i];
// }
// arr[index]=element;
// return 1;
// }
// int main(){
// int arr[100]={12,45,65,78};
// int size=5,element=98,index=3;

// traversal(arr,size);
// insertion_array(arr,element, index,100,size);
// size +=1;
// traversal(arr,size);

// return 0;
// }
   

// /
// //                                             //  deletion inan array

// #include<stdio.h>
// void main()
// {
//     int arr[50],i,j,n,temp;


// printf("enter the sizee of array");
//     scanf("the sze is %d",&n);

//     printf("enter the elelmant of an array ");
//     for(i=1; i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=1;i<n; i++){
//         int temp=arr[i];
//         int j=i-1;
//         for(j>0;j--)
//         {
//             if(arr[j]>temp){
//                 arr(j+1)=arr[i];
//             }
//             else{
//                 break;
//             }
//         }
//         arr(j+1)=temp;
//     }
//     getch()
// }
   
// //    given a arraay of marks tudert if the mark of studentn is less then 35

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//  cout<<"enter a no ";
//     cin>>n;
//  int mark[n];
//  cout<<"enter a mark";

//  for (int i=0; i<=n-1; i++){
//  cin>>mark[i];
//  }
//  for (int i=0; i<=n-1;i++){
//     if(mark[i]<35)
//      cout<< i<< " ";
//     }
// }




//  find the number iws presentr or not

//  #include<iostream>
//  using namespace std;
//  int main(){
//    int n;
//    cout<<"enter a no ";
//    cin>>n;
//    int arr[n];
//    cout<<"enter a element ";
//    for(int i=0;i<=n-1; i++){
//       cin>>arr[i];

//    }
//    int x;
//    cout<<"emter a element you want to find ";
//    cin>>x;
//    bool flag=false;
//    for(int i=0;i<=n-1;i++){
//       if (arr[i]==x) flag =true;

//    }
//    if(flag==true) 
//    cout<<"the enter  number ius preent";
//    else cout<<"enter no is not presrnt";
//  }




//  assingment question
//  calculate the product in given __ARRAY_OPERA





// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter a no ";
//    cin>>n;
   
   
//    int arr[n];
//    cout<<"enter a element";
//    for(int i=0;i<=n-1;i++){
//       cin>>arr[i];
//    }
      
   
//    int pdt=1;
//    for(int i=0;i<=n-1;i++){
//    pdt=pdt*arr[i];


//    }
//    cout<<pdt;
// }


#include<iostream>
using namespace std;
int main (){
    int arr[]={4,5,7,6,8};
    int* ptr=arr;//giving address
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;// ptr is pointing to 1t elemennt
    // cout<<endl;
    
    // for(int i=0;i<=4;i++){
      //  cout<<ptr[i]<<" ";
   // }

    *ptr=8;  //or ptr[0]=8
    ptr++;//ptr is pointing  to second 2 element 
    ptr=9;
    ptr--;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
        ptr++;
    }
    ptr =arr;
}