#include<iostream>
#include"ll.cpp"

using namespace std;

class Que
{
 public:
 Node*end;
 Node*tail;
 Linkedlist l1;
 Que()
{
end=l1.head;
}


void Enqueue(int value)
{
l1.insertAt(1,value);
end=l1.head;


}

void Dequeue()
{int c=size();
l1.deleteAt(c);

}

bool isEmpty()
{
 
if(end==NULL)return true;
	return false;
	}

	int size(){
	return l1.countItems();

	}
void Display(){

	}
	void display()
{
l1.display();
}

};

int main()
{int i,c;
Que q1;
for(i=0;i<5;i++){
q1.Enqueue(i);}
q1.display();
q1.Dequeue();
q1.isEmpty();
cout<<q1.size()<<endl;
q1.display();
return 0;
}

