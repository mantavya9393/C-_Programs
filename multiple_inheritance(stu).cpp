#include<iostream>
using namespace std;
class stu
{
	private:
		int no;
		char name[20];
	public:
		void setdata()
		{
			cout<<"\nEnter no:";
			cin>>no;
			
			fflush(stdin);
			cout<<"\nEnter name:";
			gets(name);
		}
		void printdata()
		{
			cout<<"\nNo=>"<<no<<"\tName=>"<<name;
		}
};

class marks
{
	protected:
		int eng,hin;
	public:
		void setmark()
		{
			cout<<"\nEnter marks of English:";
			cin>>eng;
			cout<<"\nEnter marks of Hindi:";
			cin>>hin;
		}
		void printmark()
		{
			cout<<"\tEnglish=>"<<eng;
			cout<<"\tHindi=>"<<hin;
		}
};

class result :public stu,public marks
{
	public:
		void printres()
		{
			cout<<"\tTotal=>"<<eng+hin;
		}
};

main()
{
	result r1;
	
	r1.setdata();
	r1.setmark();
	
	r1.printdata();
	r1.printmark();
	r1.printres();
	
}
