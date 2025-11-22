#include<iostream>
using namespace std;
class person{
	public:
	string name,father_name,Gender;
	void setname(string n){
		name=n;
	}
	void setf_name(string f_n){
		father_name=f_n;
	}
	void setGender(string g){
		Gender=g;
	}
	string getname(){
		return name;
	}
	string getf_name(){
		return father_name;
	}
	string getGender(){
		return Gender;
	}
};
class student:public person{
	public:
	string department,semester;
	void setdept(string dep){
		department=dep;
	}
	void setSem(string sem){
		semester=sem;
	}
	string getdept(){
		return department;
		
	}
	string getSem(){
		return semester;
	}
};
int main(){
	string n,f_name,gen,dep,sem;
cout<<"--addd student info--"<<endl;
student s1;
cout<<"Enter name:";
getline(cin,n);
s1.setname(n);
cout<<"Enter father name:";
getline(cin,f_name);
s1.setf_name(f_name);
cout<<"Gender:";
getline(cin,gen);
s1.setGender(gen);
cout<<"department:";
getline(cin,dep);
s1.setdept(dep);
cout<<"semester:";
getline(cin,sem);
s1.setSem(sem);
cout<<"-----display data-----"<<endl;
cout<<"Name is:"<<s1.getname()<<endl;
cout<<"Father name is:"<<s1.getf_name()<<endl;
cout<<"Gender is:"<<s1.getGender()<<endl;
cout<<"department is:"<<s1.getdept()<<endl;
cout<<"semester is:"<<s1.getSem()<<endl;

}
