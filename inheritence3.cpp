#include<iostream>
using namespace std;

class person {
    public:
    string name, qualification, experience;

    void setname(string n){
     name = n;
      }
    void setQualification(string q){
     qualification = q; 
     }
    void setExperience(string e){ 
    experience = e;
     }

    string getname(){ 
    return name;
     }
    string getQualification(){ 
    return qualification;
     }
    string getExperience(){
     return experience;
      }
};

class teacher : public person {
    public:
    string subject, salary;

    void setSubject(string s){ subject = s; }
    void setSalary(string sal){ salary = sal; }

    string getSubject(){ return subject; }
    string getSalary(){ return salary; }
};

int main() {

    string n, q, exp, sub, sal;
    teacher t1;

    cout << "--add teacher info--" << endl;

    cout << "Enter name: ";
    getline(cin, n);
    t1.setname(n);

    cout << "Qualification: ";
    getline(cin, q);
    t1.setQualification(q);

    cout << "Experience: ";
    getline(cin, exp);
    t1.setExperience(exp);

    cout << "Subject: ";
    getline(cin, sub);
    t1.setSubject(sub);

    cout << "Salary: ";
    getline(cin, sal);
    t1.setSalary(sal);

    cout << "-----display data-----" << endl;
    cout << "Name: " << t1.getname() << endl;
    cout << "Qualification: " << t1.getQualification() << endl;
    cout << "Experience: " << t1.getExperience() << endl;
    cout << "Subject: " << t1.getSubject() << endl;
    cout << "Salary: " << t1.getSalary() << endl;
}

