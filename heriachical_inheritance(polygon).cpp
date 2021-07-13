#include<iostream>
using namespace std;
class polygon
{
	protected:
		float h,w;
	public:
		void setdata()
		{
			cout<<"\nEnter Height:";
			cin>>h;
			
			cout<<"\nEnter Width:";
			cin>>w;
		}
		void printdata()
		{
			cout<<"\nHeight=>"<<h<<"\tWidth=>"<<w;
		}
};

class triangle: public polygon
{
	private:
		float area;
	public:
		void printAoT()
		{
			area=h*w*0.5;
			cout<<"\tArea of Triangle=>"<<area;
		}
};

class rectangle: public polygon
{
	private:
		float area;
	public:
		void printAoR()
		{
			area=2*(h+w);
			cout<<"\tArea of Rectangle>"<<area;
		}
};

main()
{

	triangle t1;
	rectangle r1;
	
	t1.setdata();
	r1.setdata();
	
	t1.printdata();
	r1.printdata();
	
	t1.printAoT();
	r1.printAoR();
	
	
}
