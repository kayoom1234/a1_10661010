# a1_10661010
identify prime numbers
#nclude <iostream>
using namespace std;
int main(){
int i,n;
int prime=0;
cout <<"enter number"<<endl;
cin>>n;
for(i=2; i<=n/2; ++i){
if (i%n==0){
prime+=1;
}
}
if(prime==1){
cout<<"prime";
}
else{
cout<<"not prime";
}
return 0;
}
