#include <bits/stdc++.h>
using namespace std;
struct EMP {
	string emp_name;
	int emp_id;

	EMP *next, *prev;
};
EMP *head=NULL;
EMP *tail=NULL;
int addNode() {
	if( head==NULL ) {
		head = new EMP;
		cout<<"Enter name: "; cin>>head->emp_name;
		cout<<"Enter id: "; cin>>head->emp_id;
		head->next = NULL;
		head->prev = NULL;
		tail = head;
		return 1;
	}
	else{
		struct EMP current;
		while(head->next != NULL){
			current = head->next;
		}
		return 2;
	}
}

int main(){
	int choice;
	cout<<"=================="<<endl;
	cout<<"*** Main Menu ***"<<endl;
	cout<<"=================="<<endl;
	cout<<"1. Add Node\n2. Delete Node\n3. Search Node\n4. Display List\n5. Cleanup\n6. EXIT"<<endl;
	cout<<"Enter option (1-6): ";cin>>choice;

	switch( choice ) {
		case 1:{
			int result = addNode();
			result==1 ? cout<<"This node is head"<<endl : cout<<"This node isn\'t head"<<endl;
			break;
		}
		case 6:
			return 0;
	}
	return 0;
}