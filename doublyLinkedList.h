#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct Node
{
    char data;
    bool isRevealed;
    Node *next;
    Node *prev;
};
Node *head;
Node *tail;
Node* createNode(int ele)
{
    Node *temp = new Node();
    temp->data = ele;
    temp->next = NULL;
    temp->next = NULL;
    return temp;
}
void insertBegin(int ele)
{
    Node * temp = createNode(ele);
    if(head==NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertEnd(int ele)
{
    Node *temp = createNode(ele);
    Node *p = head;
    if(head==NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }

}
void insertPos(int ele, int pos)
{
    bool b = true;
    if(pos<=0)
        cout<<"\nThere is no such position."<<endl;
    else
    {
        if(head==NULL)
            cout<<"\nThe linked list has no elements yet. Try adding at start or end first."<<endl;
        else
        {
            Node *temp = createNode(ele);
            Node *p = head;
            if(pos==1)
                insertBegin(ele);
            else
            {
                while(pos>2)
                {
                    if(p->next == NULL)
                    {
                        cout<<"\nThere is no such position. The linked list is too short."<<endl;
                        b = false;
                        break;
                    }
                    p = p->next;
                    pos--;
                }

                if(p->next == NULL && b)
                {
                    insertEnd(ele);
                }
                else if (b)
                {
                    Node* pp = p->next;
                    temp->next = pp;
                    pp->prev = temp;
                    p->next = temp;
                    temp->prev = p;
                }
            }
        }
    }
    cout<<endl;
}
void deleteBegin()
{
    Node *p = head->next;
    p->prev = NULL;
    head = p;

}
void deleteEnd()
{
    Node *p = tail->prev;
    p->next = NULL;
    tail = p;
}
void deleteList()
{
    head = NULL;
    tail = NULL;
}
void deletePos(int pos)
{
    bool b = true;
    if(pos<=0)
        cout<<"\nThere is no such position."<<endl;
    else
    {
        if(head==NULL)
            cout<<"\nThe linked list has no elements yet. Try adding at start or end first."<<endl;
        else
        {
            Node *pp;
            Node *p = head;
            if(pos==1)
                head = head->next;
            else
            {
                while(pos>=2)
                {
                    if(p->next == NULL)
                    {
                        cout<<"\nThere is no such position. The linked list is too short."<<endl;
                        b = false;
                        break;
                    }
                    pp = p;
                    p = p->next;
                    pos--;
                }

                if(p->next == NULL && b)
                    deleteEnd();
                else if (b)
                {
                    Node *ppp = p->next;
                    pp->next = ppp;
                    ppp->prev = pp;
                }
            }

        }
    }
    cout<<endl;
}
void print(int length)
{
    for(int i = 0; i < length; i++)
    {
        cout << "  " << i+1<<" ";
        if(i<9)
            cout<<" ";
    }
    Node *p = head;
    cout << endl;
    while(p != NULL){
        cout << "| ";
        if(p->isRevealed){
            cout << p->data << " |";
        }
        else{
            cout << "? |";
        }
        p = p->next;
    }
    cout << endl;
}
void display()
{
    if(head==NULL)
    {
        cout<<"\nNo elements in the linked list"<<endl;
    }
    else
    {
        Node *p = head;
        cout<<"\nLinked list = "<<endl;
        while(p!=NULL)
        {
            cout<<p->data<<"-->";
            p = p->next;
        }
        cout<<endl;
        cout<<endl;
    }
}
void search(int check)
{
    int c = 1;
    string s = "";
    Node *p = head;
    while(p!=NULL)
    {
        if(p->data == check)
        {
            cout<<"\nThere is "<<s<<"a "<<check<<" at position "<<c<<endl;
            s = "also ";
        }
        c++;
        p = p->next;
    }
    cout<<endl;
}