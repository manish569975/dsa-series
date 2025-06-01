#include<stdio.h>
void traversal(int arr[100],int n){
 for(int i=0;i<n;i++)
{
    printf("enter a element :%d\n",arr[i]);

}
}void deletion_array(int arr[100],int index,int size){

for(int i=index; i<size; i++)
{
    arr[i]=arr[i+1];
}

}
int main(){
int arr[100]={12,45,65,78};
int size=5,element=98,index=3;

traversal(arr,size);
deletion_array(arr,index,size);
size -=1;
traversal(arr,size);

return 0;
}
   