#include <iostream>
using namespace std;

struct student
{
	int std;
	float per;
	string name;
};
int main()
{
	struct student s1;
	
	cout<<"sumra tanya A."<<endl;
	cout<<"220130318009"<<endl;
	
	cout<<"enter your good name  ::";
	cin>>s1.name;
	
	cout<<"enter your standerd  ::";
	cin>>s1.std;
	
	cout<<"enter your percentage  ::";
	cin>>s1.per;
	
	cout<<"your good name is ::"<<s1.name<<endl;
	cout<<"your standerd is ::"<<s1.std<<endl;
	cout<<"your persentage is ::"<<s1.per<<endl;
	
	return 0;
	
}
