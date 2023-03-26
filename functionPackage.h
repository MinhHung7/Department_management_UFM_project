//#pragma once
#include<iostream>
#include"departmentPackage.h"

void enterDepartment(DepartmentList& departmentlist){
    cout<<"+----------------------------------+\n";
    cout<<"| Enter number of departments: ";
    int numberOfDepartments; cin>>numberOfDepartments;
    cin.ignore();
    for(int i=0;i<numberOfDepartments;++i){
        cout<<"+----------------------------------+\n";
        cout<<"|           Department: "<<i+1<<"          |\n";
        Department* data = new Department;
        data->enterInfo();
        addBehindList(departmentlist, *data);
        delete data;
    }
}

void showDepartment(DepartmentList& departmentList){
    int x = 1;
    for(Node*i=departmentList.Head;i!=NULL;i = i->pnext){
        cout<<"+-------------------------------+\n";
        cout<<"|           Department: "<<x<<"          |\n";
        i->department.showInfo();
    }
}
