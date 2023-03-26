#pragma once
#include<iostream>
#include"fractionPackage.h"
using namespace std;  

typedef struct{
    string ID;
    string name;
    string dean;
    int foundedYear;
    int numberOfStudents;
    int numberOfLectures;
    Fraction rate;

    void enterInfo(){
        cout<<"| Enter department\'s ID: ";
        getline(cin,ID);
        cout<<"| Enter department\'s name: ";
        getline(cin, name);
        cout<<"| Enter dean\'s name: ";
        getline(cin, dean);
        cout<<"| Enter founded year: ";
        cin>>foundedYear;
        cout<<"| Enter number of students: ";
        cin>>numberOfStudents;
        cout<<"| Enter number of lectures: ";
        cin>>numberOfLectures;
        cin.ignore();
        rate.numerator = numberOfStudents;
        rate.denominator = numberOfLectures;
    }

    void showInfo(){
        cout<<"| Department\'s ID: "<<ID<<"\n";
        cout<<"| Department\'s name: "<<name<<"\n";
        cout<<"| Dean\'s name: "<<dean<<"\n";
        cout<<"| Founded year: "<<foundedYear<<"\n";
        cout<<"| Number of students: "<<numberOfStudents<<"\n";
        cout<<"| Number of lectures: "<<numberOfLectures<<"\n";
        cout<<"| Student to faculty ratio: "; rate.show(); cout<<"\n";
    }
    
}Department;

typedef struct node{
    Department department;
    node* pnext = NULL;
    node* pprev = NULL;
}Node;

typedef struct depatmentList{
    Node* Head = NULL;
    Node *Tail = NULL;
}DepartmentList;

Node *makeNode(Department data){
    Node* newNode = new Node;
    if(newNode==NULL){
        cout<<"Khong du bo nho de cap phat!!";
        return NULL;
    }
    else{
        newNode->department = data;
        return newNode;
    }   
}

bool isEmpty(DepartmentList list){
    return (list.Head==NULL && list.Tail == NULL);
}

void addEmptyList(depatmentList& list,Department data){
    Node* newNode = makeNode(data);
    list.Head = newNode;
    list.Tail = newNode;
}

void addFrontList(DepartmentList& list, Department data){
    if(isEmpty(list)){
        addEmptyList(list, data);
    }
    else{
        Node* newNode = makeNode(data);
        newNode->pnext = list.Head;
        list.Head->pprev = newNode;
        list.Head = newNode;
    }
}

void addBehindList(DepartmentList& list, Department data){
    if(isEmpty(list)){
        addEmptyList(list, data);
    }
    else{
        Node* newNode = makeNode(data);
        list.Tail->pnext = newNode;
        newNode->pprev = list.Tail;
        list.Tail = newNode;
    }
}