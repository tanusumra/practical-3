#include<iostream>
 using namespace std;
 class account
 {
 	private:
 		long int acc_no;
 		float acc_bal;
 		string branch_code;
 		
 		public:
 				
 			void getdata();
 			void displaydata();
 		
 };
 void account::getdata()
 {
 	cout<<"Enter account number::";
 	cin>>acc_no;
 	
 	cout<<"Enter account balance::";
 	cin>>acc_bal;
 	
 	cout<<"Enter branch  code::";
 	cin>>branch_code;
 }
 void account::displaydata()
 {
 	cout<<"Your account number is::"<<acc_no<<endl;
	cout<<"Your account balance is::"<<acc_bal<<endl;
	cout<<"Your branch code is::"<<branch_code<<endl;
 }
 int main()
 {
 	cout<<"sumra tanya"<<endl;
 	cout<<"220130318009"<<endl;
 	
    account a1;
 	
 	a1.getdata();
 	a1.displaydata();
 	
 	return 0;
 }
 	
