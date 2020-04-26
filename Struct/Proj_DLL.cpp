#include <bits/stdc++.h>
using namespace std;
struct EMP {
	string emp_name;
	int emp_id;

	EMP *next, *prev;
};
EMP *head=NULL; EMP *tail=NULL;
int addNode() {

	struct EMP current;
	cout<<"Enter name: "; cin>>current.emp_name;
	cout<<"Enter id: "; cin>>current.emp_id;
	*tail = current;
	if( head==NULL ) {
		*head = current;
		return 1;
	}
	else
		return 2;
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