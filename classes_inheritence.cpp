#include<iostream>
#include<fstream>
using namespace std;
class person{
	public:
		string name,f_name,Gender;
		void setname(string n){
			name=n;
		}
		void setf_name(string f_n){
			f_name=f_n;
		}
		void setgender(string gen){
			Gender=gen;
		}
		string getname(){
			return name;
		}
		string getf_name(){
			return f_name;
		}
		string getgender(){
			return Gender;
		}
};  
class student:public person{
	public:
	string department;
	int semester;
	void setdept(string dept){
		department=dept;
	}
	void setsem(int sem){
	semester=sem;	
	}
	string getdept(){
		return department;
	}
	int getsem(){
		return semester;
	}
};
class teacher:public person{
	public:
	string subject;
	int Grade;
	void setgrade(int grade){
		Grade=grade;
	}
	void setsubject(string sub){
		subject=sub;
	}
	int getgrade(){
	return Grade;	
	}
	string getsubject(){
		return subject;
	}
};



void addstudent(){
	student s1;
	
	string n,f_n,g,dept;
	int sem;
	cout<<"enter your name:";
	getline(cin,n);
	s1.setname(n);
	cout<<"enter father name:";
	getline(cin,f_n);
	s1.setf_name(f_n);
	cout<<"Gender:";
	getline(cin,g);
	s1.setgender(g);
	cout<<"semester:";
	cin>>sem;
	s1.setsem(sem);
	cin.ignore();
	cout<<"department:";
	getline(cin,dept);
        s1.setdept(dept);
        
        ofstream outfile("student.txt",ios::app);
        outfile<<s1.getname()<<" "<<s1.getf_name()<<" "<<s1.getgender()<<" "<<s1.getsem()<<" "<<s1.getdept()<<endl;
        outfile.close();
	cout<<"data added succesfully";
}
void addteacher(){
	teacher t1;
string n,f_n,g,sub;
	int grade;
	cout<<"enter your name:";
	getline(cin,n);
	t1.setname(n);
	cout<<"enter father name:";
	getline(cin,f_n);
	t1.setf_name(f_n);
	cout<<"Gender:";
	getline(cin,g);
	t1.setgender(g);
	cout<<"Grade:";
	cin>>grade;
	t1.setgrade(grade);
	cin.ignore();
	cout<<"subject:";
	getline(cin,sub);
	t1.setsubject(sub);
	
	ofstream outfile("teacher.txt",ios::app);
        outfile<<t1.getname()<<" "<<t1.getf_name()<<" "<<t1.getgender()<<" "<<t1.getgrade()<<" "<<t1.getsubject()<<endl;
        outfile.close();
	cout<<"data added succesfully";
}
void displaystudent(){
	
	string name,f_name,gender,department;
	int semester;
	
	ifstream infile("student.txt");
	while(infile>>name>>f_name>>gender>>semester>>department){
	
		cout<<"Name is:"<<name<<endl;
		cout<<"father name is:"<<f_name<<endl;
		cout<<"Gender:"<<gender<<endl;
		cout<<"semester:"<<semester<<endl;
		cout<<"department:"<<department<<endl;
	}}
	void displayteacher(){
	
	string name,f_name,gender,subject;
	int grade;
	
	ifstream infile("teacher.txt");
	while(infile>>name>>f_name>>gender>>grade>>subject){
	
		cout<<"Name is:"<<name<<endl;
		cout<<"father name is:"<<f_name<<endl;
		cout<<"Gender:"<<gender<<endl;
		cout<<"Grade:"<<grade<<endl;
		cout<<"subject:"<<subject<<endl;
	}
	
	

}
int main(){
	int choice;
	cout<<"---Main menu---"<<endl;
	cout<<"press 1 for student info:"<<endl;
	cout<<"press 2 for teacher info:"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	cin.ignore();
	system("cls");
	if(choice==1){
		int choices;
		cout<<"---student info---"<<endl;
		cout<<"press 1 for Add student data:"<<endl;
	        cout<<"press 2 for Display student data:"<<endl;
	        cout<<"enter your choice:";
 	         cin>>choices;
 	         cin.ignore();
 	         cout<<endl;
 	         if(choices==1){  
 	         addstudent();  
		  }else if(choices==2){
		  displaystudent();	
		  }
	}
	else if(choice==2){
			int choices;
		cout<<"---teacher info---"<<endl;
		cout<<"press 1 for Add teacher data:"<<endl;
	        cout<<"press 2 for Display teacher data:"<<endl;
	        cout<<"enter your choice:";
 	         cin>>choices;
 	         cin.ignore();
 	         cout<<endl;
 	         if(choices==1){  
 	         addteacher();
		  }else if(choices==2){
		  displayteacher();	
		  }
	}
}
