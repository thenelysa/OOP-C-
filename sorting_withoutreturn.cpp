//wap to sort n number in ascending using function template
#include<iostream>
using namespace std;

template <typename T> 
void sort(T num)
 {
 	 T getData[30];
 	 T temp=0;
 	 int i=0,j=0;
 	 for(i=0;i<num;i++)
 	{
 	 	cin>>getData[i];
	}
 	 for(i=0;i<=num;i++)
 	   {
 	   	 for(j=i+1;j<=num;j++)
 	   	   {
 	   	   	    if(getData[i]>getData[j])
 	   	   	    {
 	   	   	      	  temp=getData[i];
 	   	   	      	  getData[i]=getData[j];
 	   	   	      	  getData[j]=temp;
				 }      
		   }
		}
		cout<<"Ascending order of given input is :";
		for(i=0;i<num;i++)
		{
		  cout<<getData[i]<<endl;		
		}		
 }
 int main()
 {
    int n;
    cout<<"Enter how many number you wanna sort"<<endl;
    cin>>n;
    sort<int>(n);
 	return 0;
 }
