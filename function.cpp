// #include<iostream>
// using namespace std;
// void tringle(int x){
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";

//         }
//         cout<<endl;
//     }
// }
//     int main (){
//     tringle(3);
//     tringle(4);
//     } 



// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter n";
// cin>>n;
// int r;
// cout<<"enter a r";
// cin>>r;
// int nfact =1;
// for(int i=2; i<=n;i++){
//     nfact *=i;

// }   
// int rfact=1;
// for(int i=2;i<=r;i++){
//     rfact *=i;


// }
// int nrfact=1;
// for(int i=2;i<=n-r;i++){
//     rfact *=i;
// }
//     int ncr=nfact/(rfact*nrfact);
//     cout<<ncr;
// }




// #include<iostream>
// using namespace std;
// int fact (int x){
//     int f =1; 
//     for(int i=2;i<=x;i++){
//         f*=1;
//     }
//     return f;
// }
// int main(){
// int n;
// cout<<"enter n ";
// cin>>n;
// int r ;
// cout<<"enter r";
// cin>>r;
// int nfact =  fact(n);
// int rfact=fact(r);
// int nrfact=fact(n-r);
// int ncr =nfact/(rfact*nrfact);
// cout<<ncr;
// }

// #include<iostream>
// using namespace std;
// int fact (int x){
//     int f=1; 
//     for(int i=2;i<=x;i++){
//         f*=i;
//     }
//     return f;
// }
// int combination (int n,int r ){
//     int ncr=fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }

// permutation(int n ,int  r){
// int npr= fact(n)/fact(n-r);
// return npr;
// }
// int main (){
//     int n;
//     cout<<"enter n";
//     cin>>n;

//     int r;
//     cout<<"enter r ";
//     cin>>r;
//     int ncr= combination(n,r);
//     int npr =permutation(n,r);
//     cout<<ncr<<endl<<npr;
// }

 // pascial tringle
 //--------------------//

// #include<iostream>
// using namespace std;
// int fact (int x){

//      int f=1;
//     for(int i=2;i<=x;i++)
//     {
//         f*=i;
//     }
//     return f;
// }
    
//      int combination(int n, int r){
//         int ncr=fact (n)/(fact(r)*fact(n-r));
//         return ncr;
//      }
// int main (){
//     int n;
//     cin>>n;
//     for(int i=0; i<=n; i++){
//      for(int j=0;j<=i;j++){
//         cout<<combination(i,j);
//     }
//           cout<<endl;
// }

// }


// icj sortcu/t


// #include<iostream>
// using namespace std;
// int main (){
//     int n; 
//     cin>>n;
//     for(int i=0; i<=n;i++){
//         int curr=1;
//         for(int j=0;j<=i;j++){
//           cout<<curr<<" ";
//           curr=curr*(i-j)/(j+i);
//         }
//         cout<<endl;
//         }
// }

