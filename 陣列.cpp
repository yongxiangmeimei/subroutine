#include<iostream>
using namespace std;
class node {
	public:
	int data;
	node* next;
	node(int value):data(value),next(NULL) {}
}; 
class array {
	private:
		node* head;
		
	public:
		array():head(NULL) {}
		
	void create(int value) {
		node* new_node=new node(value);
		new_node->next=head;
		head=new_node;
	}
	
	int get(int x) {
		node*c=head;
		for(int i=1;i<amount()-x;i++)
			c=c->next;
		return c->data;
	}
	
	void set(int x,int value) {
		node*c=head;
		for(int i=1;i<amount()-x;i++)
			c=c->next;
		c->data=value;
	}
	
	int amount() {
		node*c=head;
		int i;
		for(i=0;c!=NULL;i++)
			c=c->next;
		return i;
	}
	
	int getlast() {
		node*c=head;
		return c->data;
	}
	
	int getfrist() {
		node*c=head;
		for(int i=1;i<amount();i++)
			c=c->next;
		return c->data;
	}
};
