#include<iostream>
#include"linkedlist1.cpp"
using namespace std;


class Stack
{
  public:
  Node*end;
  Linkedlist l1;
  Stack(){
	top=l1.head;
  }
 //Pushes on top
	void push(int value)
	{
	l1.insertAt(1,value);
	//top=new-head;
	top=l1.head;}

 //pops the top
	void pop(){
	l1.deleteAt(1);
	//top=new_head;
	top=l1.head;
 	}


	bool isEmpty(){
	if(top==NULL)return true;
	return false;
	}

	int size(){
	return l1.countItems();

	}

	void topDisplay(){

	}
	void display()
{
l1.display();
}
};



int main()
{
 Stack s1;
 for(int i=0;i<5;i++)
 s1.push(i);
 s1.display();
 s1.pop();
 s1.display();
 s1.pop();
 s1.size();
 s1.isEmpty();
 s1.display();
return 0;
}



