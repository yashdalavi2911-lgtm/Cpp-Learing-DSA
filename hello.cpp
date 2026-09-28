#include<iostream>
#include<vector>
//#include<bits/c++,h> alternate for vector (use vector only )
using namespace std;
/*
int main(){
    //Lecture - 2
    // cout<<"wassup \n"<<"my friend"<<endl;
    // float a=10.9;
    // int b=(int)a;
    // cout<<b<<endl;

    // int age;
    // cout<<"Enter smthing: ";
    // cin>>age;
    // cout<<age;

    //Lecture - 3
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // if (n%2==0){
    //     cout<<n<<" is even";
    // }
    // else if (n==0){
    //     cout<<n<<" is zero";
    // }
    // else{
    //     cout<<n<<" is odd";
    // }
    //IF ELSE ELIF
    // char ch;
    // cout<<"Enter Char: ";
    // cin>>ch;
    // if (ch>='a' && ch<='z'){
    //     cout<<ch<<" is lowercase";
    // }
    // else if (ch>='A' && ch<='Z'){ // ch>=65 && ch<=90
    //     cout<<ch<<" is uppercase";
    // }
    // else{
    //     cout<<ch<<" is not a character";
    // }


    //Ternanry Statement
    //syntax: condition?st1:st2; if condition true st1 get actiavte or if its false sr2 gets activate
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<(n>=0?"+ve":"-ve");
    
    //LOOPS
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // while (n>0){  //while (condition){ }
    //     cout<<n<<" ";
    //     n--;
    // }
    
    //for loop , for(initialisation;condition;updation){ }
    // int n=3;
    // for (int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // }

    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // for (int i=0;i<=n;i++){
    //     if (i%2!=0){
    //         cout<<i<<endl;
    //     }

    // }

    //do while do{ }while(condition)
    // do {
    //     cout<<"how tf is 3>5, oh its a do-while";
    // }while(3>5);
    //Prime Numbers
    // int n,i,flag=1;
    // cout<<"Enter a number: ";
    // cin>>n;

    // for(i=2;i*i<=n;i++){ //here we check if i< squareroot of n to reduce time complexity
    //     if(n%i==0){
    //         flag=0;
    //         cout<<n<<" is not a prime";
    //         break;
    //     }
    // }
    // if (flag==1) {
    //     cout<<n<<" is prime";
    // }

    //Lecture - 4 patterns / nested loops
    //  //SQUARE
    // int i,j,n=3;
    // for (i=0;i<=n-1;i++){ 
    //     for(j=0;j<=n-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int i,j,n=4;
    // for (i=0;i<n;i++){
    //     char ch='A';
    //     for(j=0;j<n;j++){
    //         cout<<ch;
    //         ch=ch+1; // 65+1 => 66 ->B
    //     }
    //     cout<<endl;
    // }


    // int i,j,n=4,num=1;
    // for (i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // int i,j,n=4;
    // char ch='A';
    // for (i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // TRIANGLE PATTERN
    // int i,j,n=4;
    // for (i=0;i<n;i++){
    //     for(j=0;j<i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int i,j,n=4;
    // for (i=0;i<n;i++){
    //     for(j=0;j<i+1;j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }

    // int i,j,n=4;
    // char ch='A';
    // for (i=0;i<n;i++){
    //     for(j=0;j<i+1;j++){
    //         cout<<char(ch+i);
    //     }
    //     cout<<endl;
    // }

    // int i,j,n=4;
    // for (i=0;i<n;i++){
    //     for(j=1;j<=i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //Reverse Triangle PAttern
    // int i,j,n=4;
    // for (i=0;i<n;i++){
    //     for(j=i+1;j>0;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //Floyd's Triangle Pattern
    // int i,j,n=4,num=1;
    // for (i=0;i<n;i++){
    //     for(j=1;j<=i+1;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    //Inverted Triangle Pattern
    // int i,j,n=4;
    // for(i=0;i<n;i++){
    //     for (j=0;j<i;j++){ //spaces
    //         cout<<" ";
    //     }
    //     for (j=0;j<n-i;j++){//nums
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }

    //Pyramid Pattern
    // int i,j,n=4;
    // for (i=0;i<n;i++){
    //     for(j=0;j<n-i-1;j++){//spaces
    //         cout<<" ";
    //     }
    //     for (j=1;j<=i+1;j++){//nums1
    //         cout<<j;
    //     }
    //     for (j=i;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //Hollow Diamond Pattern
    // int i,j,n=4;
    // for (i=0;i<n;i++){
    //     for (j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
        
    //     cout<<"*";
    //     if (i!=0){
    //         for (j=0;j<2*i-1;j++){
    //             cout<<" ";
    //     }
    //     cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for (i=0;i<n-1;i++){
    //     for (j=0;j<i+1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";

    //     if(i!=n-2){
    //         for (j=0;j<2*(n-i)-5;j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
*/
//LECTURE 5 - FUNCTIONS
// int printH(){
//     cout<<"Hello World\n";
//     return 3;
// }
// int sum(int a,int b){
//     int s = a+b;
//     return s;
// }
// int minof2(double a,double b){
//     return (a>b?b:a);
// }
int fact(int a){
    int fa=1;
    if (a<0) return -1;
    else if (a==0 || a==1) return 1; 
    else{
        while(a!=1){
            fa*=a;
            a--;
        }
        return fa;
    }
}
// int sumofDigits(int quo){
//     int rem,summ=0;
//     while (quo>0)
//     { 
//         rem=quo%10;
//         quo=quo/10;
//         summ+=rem;
//     }
//     return summ;
    
// }
int binomial_coefficient(int n,int r){
    //formula = n!/(r! * (n-r)!)
    int factn,factr,factnr;
    factn=fact(n);
    factr=fact(r);
    factnr=fact(n-r);
    return factn/(factr * factnr);

}
//LECTURE 9 - VECTORS
//vector functions: size, capacity,push_back(add ele in last index), pop_back, front, back, at
//at takes index value, vec[i] == vec.at(i) 
//vector dynamically allocates, like agar size 0 hai vector ka and we push 1 element toh vo ek space genrate krega, now abhi aur ek push kiya toh abhi vector ki size 1 hai toh uska x2 krega i.e 2 therefore size hogayi 2, now me aur ek push krta hu ele , toh abhi last size hai 2 toh 2x2 = 4, now vec use krrha hai 3 but capicty hai 4
//vector size-> no of ele, vector capacity -> no of space
//also dont leetcode no 136 single number using vector and bitwise


int main(){
    // int a =printH();
    // cout<<"Value returned is "<<a<<endl;
    // cout<<printH()<<endl;

    // cout<<"sum of 6 & 7 is "<<sum(6,7)<<endl;
    // cout<<"min of 6 & 7 is "<<minof2(6,7)<<endl;
    // cout<<"Enter a number : ";
    // int f;
    // cin>>f;
    // cout<<"Factorial of "<<f<<" is: "<<fact(f);
    // cout<<"Enter A number: ";
    // int x;
    // cin>>x;
    // cout<<"Sum of number of "<<x<<" is: "<<sumofDigits(x);
    // int n,r;
    // cout<<"--- To calulate nCr binomial coefficient ---"<<endl;
    // cout<<"Enter value for n: ";
    // cin>>n;
    // cout<<"Enter value for r: ";
    // cin>>r;
    // cout<<"nCr is: "<<binomial_coefficient(n,r);

    //vectors
    // vector<int> vec={1,2,3}; //vectors store same as array  
    // cout<<vec[0]<<endl;
    // //vector<int> vec(3,0); 
    // cout<<"sizze: "<<vec.size()<<endl;
    // for (int val : vec){ //for each loop, here val is the value not the index 
    //     cout<<val<<endl;

    // }
    vector<int> vec;
    cout<<"size before: "<<vec.size()<<endl;
    vec.push_back(67);
    vec.push_back(81);
    vec.push_back(69);
    cout<<"size after push_back: "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"size after pop_back: "<<vec.size()<<endl;
    cout<<"vec.front(): "<<vec.front()<<endl;
    cout<<"vec.back(): "<<vec.back()<<endl;
    cout<<"vec.at(0): "<<vec.at(0)<<endl;
    
    return 0;
}
