//LINKED LIST
//library
#include<iostream>
using namespace std;

class Node //class for circle
{
	public://making acessable
	  int data;//data

	  Node*next;//pointer to next Node
	Node()//default function
	{
	  next=NULL;//pointer always points to NULL
	}
};

class Linkedlist
{
	public:
	//head+Circles inside linked with each other
 	//Head -> Circle type pointer
	Node*head;
	Node*tail;

	Linkedlist(){
	head=NULL;//initial value
	tail=NULL;}
	
	void insert(int value){	//function for insering new node
	Node*temp=new Node;	//new circle is created with adress storreed  in temp 
	temp->data=value;	//assign value
	
	 Node**curr=&head;
	
	while((*curr)!=NULL){
	curr=&((*curr)->next);}
	  
		*curr=temp;

/*	if(head==NULL){	//linking head and tail to first circle
	head=temp;	
	tail=temp;}	

	else{		//linking other circles
	tail->next=temp;//next poner pointing to new circle
	tail=temp;}}	//new Node is the tail
	
	*/
	int countItems(){	  	//function to find he number of items
	Node*current=head;int i=0;	//pointer which moves in each circle			
	while(current!=NULL){
	i++;				//counting
	current=current->next;}
	return (i);}			//return value

	void insertAt(int pos,int value){//inserting new nde in a position
	Node*current=head;		 //moving the pointer just before the function

	if(pos==1){			 //if positionn is 1
	Node*temp=new Node;		 //forming new node
		head=temp;		 //linking the new node with head
	temp->data=value;		 //giving value
	temp->next=current;}		 //linking the new node with the rest of circle


	else{				//for inserting in other positions
	
	int i=2;	


	while(i<pos){			//getting udress of the circle in the position
	
	current=current->next;
i=i+1;}
	
	Node*temp=new Node;		//forming new circle
	temp->data=value;		//giving value
	temp->next=current->next;	//liinking new node with the pos-1 circle
	current->next=temp;}		//linking with the rest of the circles
	}
	
	

	void display(){		//function for display
	Node *current=head;	//pointing to current circle

	while(current!=NULL){	//counting till NULL
	cout<<current->data<<"->";
	current=current->next;}
	cout<<"NULL"<<endl;}

	void delet(){		//function for deleting
	Node*temp=tail;		//store the tail in temp
	Node*current=head;
	while(current->next!=tail){
	 current=current->next;}
	current->next=NULL;	//before tail has to point to null
	tail=current;
	delete temp;}

	void deleteAt(int pos){		//delete at a perticular position
	Node *current=head;		//pointer to current circle
	int i=2;
	while(i<=pos){			//storing the adress of the next circle
	current=current->next;
	i++;}
	Node* temp=current->next;
	current->next=NULL;		//pointing the circle to NULL 
	Node* cur=head;
	int j=2;
	while(j!=pos){			//pointing to the next circle
	cur=cur->next;
	j++;}
	Node*tem=cur->next;
	cur->next=temp;
	delete tem;}			//deleting thr node from heap


	void revDisplay()
	{
	  revDislay2(head);
	  cout<<endl;
	}
	void revDisplay2(Node*current){
	//Move to next(till available)
	if(current==NULL)return;
	else
	{
	revDisplay2(current->next);
	cout<>current->data<<"->";
	}
	//print while back
	}

	void revLL(){
	Node*temp=head;
	revLL2(head);
	//tail=temp
	  temp->next=NULL;
	}
	/*void revLL2(node*current){
	//condition for emplt LL
	  if(current==NULL) return;
	//condition for 1 element
	  if(current->next=NULL)
	{
	head=current;
	return;
	}
	//Reverse for rest
	else{
	  revLL2(current->next);
	    current->next->next=current;*/
	
};

/*int main(){		//main function
int a,b,c;		//declaring variables
Linkedlist l1;		//inserting circles
l1.insert(1);
l1.insert(2);
l1.insert(3);
l1.insert(4);
l1.insert(5);
l1.insert(5);
l1.insert(10);
cout<<"The linkedlist is";
l1.display();		//displaying list
cout<<"enter the position and the the value to be inserted"<<endl;
cin>>a;
cin>>b;

c=l1.countItems();
if(a<=c){

l1.insertAt(a,b);}	//call for the function to insert
else{
cout<<"Linked List does not have that many elements"<<endl;}

l1.display();

cout<<"The number of elements in the linked list "<<l1.countItems()<<endl;
l1.delet();		//call for the function to deleete
cout<<"the elements after deleting last:";
l1.display();
c=l1.countItems();
if(b<=c){
l1.deleteAt(b);		//call for the funtion for deleting at a position
cout<<"the elements after deleted form position "<<b<<":";
l1.display();}
else
cout<<"Linked List does not have that many elements"<<endl;

l1.revDisplay();
return 0;		//execution stops
}*/
	

	
	
	
	
