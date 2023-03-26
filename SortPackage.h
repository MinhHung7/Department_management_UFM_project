#include"departmentPackage.h"

void sortNameDepartmentByInterchangeSort(DepartmentList& departmentList){ 
    for(Node* i = departmentList.Head; i->pnext!=NULL; i= i->pnext){
        for(Node*j = i->pnext; j!=NULL; j = j->pnext){
            if(i->department.name > j->department.name){
                swap(i->department, j->department);
            }
        }
    }
}

void sortNameDepartmentByBubbleSort(DepartmentList& departmentList){
    for(Node* i = departmentList.Head; i!=NULL; i= i->pnext){
        for(Node*j = departmentList.Head; j->pnext!=NULL; j = j->pnext){
            if(j->department.name > j->pnext->department.name){
                swap(j->department, j->department);
            }
        }
    }
}   

void sortNameDepartmentByInsertionSort(DepartmentList& departmentList){
    Node*i = departmentList.Head->pnext;
    for(;i!=NULL; i=i->pnext){
        if(i->department.name > i->pprev->department.name){
            Node* j = i->pprev;
            while(j->pprev!=NULL && j->department.name > j->pnext->department.name){
                swap(j->department.name, j->pnext->department.name);
                j = j->pprev;
            }
        }
    }
}

void sortYearDepartmentByInterchangeSort(DepartmentList& departmentList){ 
    for(Node* i = departmentList.Head; i->pnext!=NULL; i= i->pnext){
        for(Node*j = i->pnext; j!=NULL; j = j->pnext){
            if(i->department.foundedYear > j->department.foundedYear){
                swap(i->department, j->department);
            }
        }
    }
}

void sortYearDepartmentByBubbleSort(DepartmentList& departmentList){
    for(Node* i = departmentList.Head; i!=NULL; i= i->pnext){
        for(Node*j = departmentList.Head; j->pnext!=NULL; j = j->pnext){
            if(j->department.foundedYear > j->pnext->department.foundedYear){
                swap(j->department, j->department);
            }
        }
    }
}   

void sortYearDepartmentByInsertionSort(DepartmentList& departmentList){
    Node*i = departmentList.Head->pnext;
    for(;i!=NULL; i=i->pnext){
        if(i->department.foundedYear > i->pprev->department.foundedYear){
            Node* j = i->pprev;
            while(j->pprev!=NULL && j->department.foundedYear > j->pnext->department.foundedYear){
                swap(j->department.foundedYear, j->pnext->department.foundedYear);
                j = j->pprev;
            }
        }
    }
}


