 #include<iostream>
 using namespace std;
 class student
 {
 	private:
 		string name;
 		int age;
 	public:
 		void get_details()
 		{
 			cout<<"Enter your good name::";
 			cin>>name;
 			
 			cout<<"Enter your age::";
 			cin>>age;
		 }
		 void display_details()
		 {
		 	cout<<"Your name is::"<<endl;
		 	cout<<"Your age is::"<<endl;
		 }
 };
 int main()
 {
 	cout<<"sumra tanya"<<endl;
 	cout<<"220130318009"<<endl;
 	student s1;
 	
 	s1.get_details();
 	s1.display_details();
 	
 	return 0;
 }
