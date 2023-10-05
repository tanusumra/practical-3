 #include<iostream>
 using namespace std;
 class distance
 {
 	private:
 		int feet;
 		float inches;
 	public:
 		void get_details;
 		{
 			cout<<"Enter the value of feet::"
 			cin>>feet;
 			cout<<"Enter the value of inches::"
 			cin>>inches;
		 }
		 void display_details()
		 {
		 	cout<<"the value of feet is::"<<feet<<endl;
		 	cout<<"the value of inches is::"<<inches<<endl;
			}
};
int main()
{
	distance d1;
	cout<<"sumra tanya"<<endl;
 	cout<<"220130318009"<<endl;
 	
 	d1.get_details();
 	d1.display_details();
 	
 	return 0;
 }
}
