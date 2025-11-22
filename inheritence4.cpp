#include<iostream>
using namespace std;

class person {
    public:
    string name, phone, address;

    void setname(string n){
     name = n;
      }
    void setPhone(string p){ 
    phone = p; 
    }
    void setAddress(string a){ 
    address = a;
     }

    string getname(){ 
    return name;
     }
    string getPhone(){
     return phone;
      }
    string getAddress(){
     return address;
      }
};

class customer : public person {
    public:
    string product, price;

    void setProduct(string p){
     product = p;
      }
    void setPrice(string pr){
     price = pr; 
     }

    string getProduct(){ 
    return product; 
    }
    string getPrice(){
     return price;
      }
};

int main(){
    string n, ph, ad, pr, p;
    customer c1;

    cout<<"--add customer info--"<<endl;

    cout<<"Enter name: ";
    getline(cin, n);
    c1.setname(n);

    cout<<"Phone: ";
    getline(cin, ph);
    c1.setPhone(ph);

    cout<<"Address: ";
    getline(cin, ad);
    c1.setAddress(ad);

    cout<<"Product: ";
    getline(cin, pr);
    c1.setProduct(pr);

    cout<<"Price: ";
    getline(cin, p);
    c1.setPrice(p);

    cout<<"-----display data-----"<<endl;
    cout<<"Name: "<<c1.getname()<<endl;
    cout<<"Phone: "<<c1.getPhone()<<endl;
    cout<<"Address: "<<c1.getAddress()<<endl;
    cout<<"Product: "<<c1.getProduct()<<endl;
    cout<<"Price: "<<c1.getPrice()<<endl;
}

