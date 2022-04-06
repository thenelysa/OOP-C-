//WAP where user enter hours and minutes and seconds and the outputs is displayed in seconds.
#include <iostream>
using namespace std;
class Time
{
	int sec;
	int min;
	int hour;
	
	public:
		Time(int a, int b, int c)
		{
			hour= a;
			min=b;
			sec=c;
			
		}
		operator int()
		{
			return(hour*3600+min*60+sec);
		}

	
	
};
int main()
{
	int hr,m,s;
	int seconds;
	cout<<"Enter  hour ";
	cin>>hr;
	cout<<"enter min:";
	cin>>m;
	cout<<"enter seconds";
	cin>>s;
	Time t1(hr,m,s);
	
	seconds=t1;
	seconds=t1.operator int();
	cout<<"total seconds = "<<seconds;
	return 0;
	
	
}
