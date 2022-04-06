#include<iostream>
using namespace std;
class father
{
	public:
		int x;
		void input(int p)
		{
			y=p;
			cout<<"The protected data type is : "<<y<<endl;
		}
		protected:
			int y;
};
class child : protected father
{
	public:
		int p;
		public:
			void output(){
				x=5;
				cout<<"Value of x is : "<<x<<endl;
			}
};
int main()
{
	int num;
	num=300;
	father dad;
	dad.input(num);
	dad.x=100;
	child son;
//	son.x=200;
	son.output();
	cout<<"Value of father is: "<<dad.x;
//	cout<<"Value of son is:"<<son.x;
}
