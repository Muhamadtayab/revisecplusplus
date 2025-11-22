#include<iostream>
using namespace std;

class person {
    public:
    string name, cnic, contact;

    void setname(string n){
     name = n;
      }
    void setCnic(string c){ 
    cnic = c; 
    }
    void setContact(string co){ 
    contact = co; 
    }

    string getname(){ 
    return name;
     }
    string getCnic(){ 
    return cnic;
     }
    string getContact(){ 
    return contact; 
    }
};

class employee : public person {
    public:
    string position, salary;

    void setPosition(string p){ 
    position = p; 
    }
    void setSalary(string s){
     salary = s; 
     }

    string getPosition(){ 
    return position; 
    }
    string getSalary(){ 
    return salary;
     }
};

int main(){
    string n, c, co, p, s;
    employee e1;

    cout<<"--add employee info--"<<endl;

    cout<<"Enter name: ";
    getline(cin, n);
    e1.setname(n);

    cout<<"Enter CNIC: ";
    getline(cin, c);
    e1.setCnic(c);

    cout<<"Contact: ";
    getline(cin, co);
    e1.setContact(co);

    cout<<"Position: ";
    getline(cin, p);
    e1.setPosition(p);

    cout<<"Salary: ";
    getline(cin, s);
    e1.setSalary(s);

    cout<<"-----display data-----"<<endl;
    cout<<"Name: "<<e1.getname()<<endl;
    cout<<"CNIC: "<<e1.getCnic()<<endl;
    cout<<"Contact: "<<e1.getContact()<<endl;
    cout<<"Position: "<<e1.getPosition()<<endl;
    cout<<"Salary: "<<e1.getSalary()<<endl;
}

