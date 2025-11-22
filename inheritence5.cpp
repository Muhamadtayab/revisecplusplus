#include<iostream>
using namespace std;

class vehicleInfo {
    public:
    string owner_name, model, reg_no;

    void setOwner(string n){
        owner_name = n;
    }
    void setModel(string m){
        model = m;
    }
    void setReg(string r){
        reg_no = r;
    }

    string getOwner(){
        return owner_name;
    }
    string getModel(){
        return model;
    }
    string getReg(){
        return reg_no;
    }
};

class vehicle : public vehicleInfo {
    public:
    string color, engine_capacity;

    void setColor(string c){
        color = c;
    }
    void setEngine(string e){
        engine_capacity = e;
    }

    string getColor(){
        return color;
    }
    string getEngine(){
        return engine_capacity;
    }
};

int main(){
    string own, mod, reg, col, eng;
    vehicle v1;

    cout << "--add vehicle info--" << endl;

    cout << "Enter owner name: ";
    getline(cin, own);
    v1.setOwner(own);

    cout << "Enter vehicle model: ";
    getline(cin, mod);
    v1.setModel(mod);

    cout << "Registration number: ";
    getline(cin, reg);
    v1.setReg(reg);

    cout << "Color: ";
    getline(cin, col);
    v1.setColor(col);

    cout << "Engine capacity: ";
    getline(cin, eng);
    v1.setEngine(eng);

    cout << "-----display data-----" << endl;
    cout << "Owner Name: " << v1.getOwner() << endl;
    cout << "Model: " << v1.getModel() << endl;
    cout << "Registration No: " << v1.getReg() << endl;
    cout << "Color: " << v1.getColor() << endl;
    cout << "Engine Capacity: " << v1.getEngine() << endl;

}

