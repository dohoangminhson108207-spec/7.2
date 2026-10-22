#include<bits/stdc++.h>
using namespace std;
class person{
    protected:
    string name,birth,address;
    public:
    person(){
        name="";
        birth="";
        address="";
    }
    void nhap(){
        cout<<"Nhap ten: "; getline(cin,name);
        cout<<"Nhap ngay sinh: "; getline(cin,birth);
        cout<<"Nhap dia chi: "; getline(cin,address);
    }
    void xuat(){
        cout<<"Ten: "<<name<<endl;
        cout<<"Ngay sinh: "<<birth<<endl;
        cout<<"Dia chi: "<<address<<endl;
    }
    person(string n,string b,string a){
        name=n;
        birth=b;
        address=a;
    }
};
class school{
    string name_s,date;
    friend class Faculty;
};
class Faculty{
    protected:
    string name_f,date;
    school x;
    public:
    void nhap(){
        cout<<"Nhap ten khoa: "; getline(cin,name_f);
        cout<<"Nhap ngay thanh lap: "; getline(cin,date);
        cout <<"Nhap ten truong: "; getline(cin,x.name_s);
        cout <<"Nhap ngay thanh lap truong: "; getline(cin,x.date);
    }
    void xuat(){
        cout<<"Ten khoa: "<<name_f<<endl;
        cout<<"Ngay thanh lap: "<<date<<endl;
        cout <<"Ten truong: "<<x.name_s<<endl;
        cout <<"Ngay thanh lap truong: "<<x.date<<endl;
    }
};
class student:public person{
    protected:
    Faculty y;
    string Class;
    float score;
    public:
    student(){
        Class="";
        score=0;
    }
    student(string n,string b,string a,string c,float s):person(n,b,a){
        Class=c;
        score=s;
    }
    void nhap(){
        y.nhap();
        person::nhap();
        cout<<"Nhap lop: "; getline(cin,Class);
        cout<<"Nhap diem: "; cin>>score;
    }
    void xuat(){
        y.xuat();
        person::xuat();
        cout<<"Lop: "<<Class<<endl;
        cout<<"Diem: "<<score<<endl;
    }
};
int main(){
    student a;
    a.nhap();
    a.xuat();
}