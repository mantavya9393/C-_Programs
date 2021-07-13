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

class marks: public stu
{
	protected:
		int eng,hin;
	public:
		void setdata()
		{
			stu::setdata();
			cout<<"\nEnter marks of English:";
			cin>>eng;
			cout<<"\nEnter marks of Hindi:";
			cin>>hin;
		}
		void printdata()
		{
			stu::printdata();
			cout<<"\tEnglish=>"<<eng;
			cout<<"\tHindi=>"<<hin;
		}
};

class result :public marks
{
	public:
		void printdata()
		{
			marks::printdata();
			cout<<"\tTotal=>"<<eng+hin;
		}
};

main()
{
	result r1;
	
	r1.setdata();
	
	
	r1.printdata();
	
}
