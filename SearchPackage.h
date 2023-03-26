#include"departmentPackage.h"

void searchIDByLinearSearch(DepartmentList& departmentList){
    cin.ignore();
    cout<<"| Enter ID need searching: ";
    string id; getline(cin, id);
    for(Node*i = departmentList.Head; i!=NULL; i=i->pnext){
        if(i->department.ID==id){
            i->department.showInfo();
        }
    }
}

void searchNameByLinearSearch(DepartmentList& departmentList){
    cin.ignore();
    cout<<"| Enter name need searching: ";
    string name; getline(cin, name);
    for(Node*i = departmentList.Head; i!=NULL; i=i->pnext){
        if(i->department.name==name){
            i->department.showInfo();
        }
    }
}

void searchYearByLinearSearch(DepartmentList& departmentList){
    cin.ignore();
    cout<<"| Enter year need searching: ";
    int year; cin>>year;
    for(Node*i = departmentList.Head; i!=NULL; i=i->pnext){
        if(i->department.foundedYear==year){
            i->department.showInfo();
        }
    }
}

void searchDeanByLinearSearch(DepartmentList& departmentList){
    cin.ignore();
    cout<<"| Enter dean\'s name need searching: ";
    string name; getline(cin, name);
    for(Node*i = departmentList.Head; i!=NULL; i=i->pnext){
        if(i->department.dean==name){
            i->department.showInfo();
        }
    }
}