/*WAP to take 10 employee details and calculate the highest salasry using calss and object concept
(use friend function)*/

#include<iostream>

using namespace std;

class Emp{
	public:
	char name[30];
	int id;
	int salary;
	void getData()
	{
		cout<<"Enter Name : ";
		cin.get(name,30);
		fflush(stdin);
		cout<<"Enter Id: ";
		cin>>id;
		fflush(stdin);
		cout<<"Enter Salary : ";
		cin>>salary;
		fflush(stdin);
	}
	void putData()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Salary: "<<salary<<endl;
		
	}
	friend Emp calc(Emp obj[10]);
	
};
Emp calc(Emp obj[10])
{
	int i,j;
	Emp temp;
	for(i=0;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			if(obj[i].salary < obj[j].salary)
			{
				temp=obj[i];
				obj[i]=obj[j];
				obj[j]=temp;	
			}
		}
	}
	temp =obj[0];
	return(temp);  	
}
int main()
{
	Emp obj[10],temp;
	int i;
	for(i=0;i<3;i++){
		cout <<endl<< "Enter " << i+1 << " Detail : " << endl;
		obj[i].getData();
	}
	temp=calc(obj);
	temp.putData();
	return 0;
}
