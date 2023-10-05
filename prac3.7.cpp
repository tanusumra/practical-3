#include<iostream>
 using namespace std;
 class employee
 {
 	private:
 		string emp_name;
 		long long int emp_id;
 		string emp_dep;
 		string emp_joindate;
 		string emp_bod;
 		float emp_salary;
 	public:
 		void get_details()
 		{
 			cout<<"Enter the employee name::";
 			cin>>emp_name;
 			
 			cout<<"Enter the employee id::";
 			cin>>emp_id;
 			
 			cout<<"Enter the employee department::";
 			cin>>emp_dep;
 			
 			cout<<"Enter the employee join date::";
 			cin>>emp_joindate;
 			
 			cout<<"Enter the employee birthday::";
 			cin>>emp_bod;
 			
 			cout<<"Enter the employee salary::";
 			cin>>emp_salary;
		 }
		 void display_details()
		 {
		 	cout<<"Employee name is::"<<emp_name<<endl;
		 	cout<<"Employee id is::"<<emp_id<<endl;
		 	cout<<"Employee department is::"<<emp_dep<<endl;
		 	cout<<"Employee join date is::"<<emp_joindate<<endl;
		 	cout<<"Employee birthday is::"<<emp_bod<<endl;
		 	cout<<"Employee salary is::"<<emp_salary<<endl;
		 	
		 }
	};
	int main()
	{
		employee E1;
		E1.get_details();
		E1.display_details();
	}
	
 	
 	
 

		 
