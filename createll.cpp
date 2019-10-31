#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;

    node(int data)
    {
    this->data=data;
    next = NULL;
    }
    };
void create(node * &head,int n)
{
	if(n==0)
	{
		head = NULL;
		return;
	}
	int data;
	cin>>data;
	head = new node(data);
	node * trav = head;
	n--;
	while(n--)
	{
		//cout<<"***"<<endl;
		int data;
		cin>>data;
		trav->next = new node(data);
		trav = trav->next;
	}

}

void print(node* &head)
{
	node * trav = head;
	while(trav!=NULL)
	{
		cout<<trav->data<<" ";
		trav =  trav->next;
	}
	cout<<endl;
 }
 int main(){
     int n;
     cin>>n;
     node * head = NULL;
     create(head,n);
 }
