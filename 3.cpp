#include <iostream>
using namespace std;
class node{
public:
int data;
node*next;

node(){
 next = NULL;
 }
};

class cll{
public:
node*head;

cll(){
 head =NULL;
 }
void insert(int value){
node*temp = new node;
temp->data = value;
if (head ==NULL){
    head=temp;
  }
else{
   node*current= head;
   while(current->next!= head)
       current=current->next;
       current->next = temp;
        }
      temp->next = head;
    }
 void insertAt(int pos, int value){
        // Reach the place before the pos
        node * current = head;
        int i =1;
        while(i < pos-1){
            i++;
            current = current->next;
            
        }

        // we have to make a new node that will at last gets inserted between two circles
        node * temp = new node;
        temp -> data = value;
        temp->next = current->next;
        current->next = temp;
       

    }

  void display(){
        node * current = head;
        if(current == NULL) {
            cout << "No elements " << endl;
            return;
        }
        while(current->next != head){ 
            cout << current -> data << "->";
            current = current -> next;
        }
        cout << current -> data ;
        cout << endl;
    }
void delet(){
       node*last;
        node * current = head;
        while(current->next->next!=head){
            current = current->next;
        }
        last=current->next;
        current->next = head; 
        
         delete last;
    }
int countitems()
{	if(head!=NULL)
	{	int count=1;
		 node* current=head;
		while(current->next!=head)
		{count++;current=current->next;}
		
	
   cout<<"countitems"<<count<<endl;
    return 0;
    }
	 
	return 0;


}
  };
int main(){
     cll cll1;
    for(int i= 1; i < 11; i++){
       cll1.insert(i);
       
    }
    cll1.insertAt(2,3);
    cll1.display();
    cll1.delet();
    cll1.display();  
    cll1.countitems(); 
     return 0;
}
