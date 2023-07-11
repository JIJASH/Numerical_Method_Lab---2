#include<iostream>
using namespace std;
	int main(){
		int i,j;
		double n,x,a[50],b[50],y,num,den;
		 
		 cout<<"Enter number of elements to be stored :";
		 cin>>n;
		 cout<<"Enter the elements for x : ";
		 	for(i=1;i<=n;i++){
		 		cin>>a[i];
			 }
		 cout<<"Enter elements for f(x) : ";
		 	for(i=1;i<=n;i++){
		 		cin>>b[i];
			 }
		cout<<"Enter value for x :";
		cin>>x;
		
			for(i=1;i<=n;i++){
				num=1;
				den=1;
					for(j=1;j<=n;j++){
						if(i!=j){
							num*=(x-a[j]);
							den*=(a[i]-a[j]);
						}
					}
				y+=(num/den)*b[i];
			}
			cout<<"f(x) = "<<y;
			return 0;
	}
