#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(){
			data=0;
			next=NULL;
			
		}
};
main(){
	Node* newNode1=new Node;
	newNode1->data=10;
	
	Node* newNode2=new Node;
	newNode2->data=20;
	
	Node* newNode3=new Node;
	newNode3->data=30;
	
	newNode1->next=newNode2;
	newNode2->next=newNode3;
	
	cout<<"data1"<<newNode1->data<<"self address1"<<newNode1<<"next address"<<newNode1->next<<endl;
	cout<<"data2"<<newNode2->data<<"self address2"<<newNode2<<"next address"<<newNode2->next<<endl;
	cout<<"data3"<<newNode3->data<<"self address3"<<newNode3<<"next address"<<newNode3->next<<endl;
	
	cout<<endl;
	cout<<"PRinting through loop"<<endl;
	cout<<endl;
	Node* temp=newNode1;
	while(temp!=NULL){
		cout<<"data"<<temp->data<<"self address1"<<temp<<"next address"<<temp->next<<endl;
		temp=temp->next;
	}
	return 0;
	}

