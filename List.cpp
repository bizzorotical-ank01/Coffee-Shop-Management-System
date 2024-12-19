#include "list.h"
List::List()
{
    head = tail = NULL;
}
bool List::create_node(int item_no, string item_name, double price)
{
    Node *temp = new Node();
    temp->item_name = item_name;
    temp->item_no = item_no;
    temp->price = price;
    temp->Next = NULL;
    if (!head)
    {
        head = tail = temp;
        temp = NULL;
        return true;
    }
    else
    {
        tail->Next = temp;
        tail = tail->Next;
        temp = NULL;
        return true;
    }
    return false;
}
bool List::create_node(int feedback)
{
    Node *fdbk = new Node();
    fdbk->feedback = feedback;
    fdbk->Next = NULL;
    if (!head)
    {
        head = tail = fdbk;
        fdbk = NULL;
        return true;
    }
    else
    {
        tail->Next = fdbk;
        tail = tail->Next;
        fdbk = NULL;
        return true;
    }
    return false;
}
bool List::create_node(string item_name, double price, double tax, double bill)
{
    Node *pay = new Node();
    pay->item_name = item_name;
    pay->price = price;
    pay->tax = tax;
    pay->Next = NULL;
    if (!head)
    {
        head = tail = pay;
        pay = NULL;
        return true;
    }
    else
    {
        tail->Next = pay;
        tail = tail->Next;
        pay = NULL;
        return true;
    }
    return false;
}
void List::billing()
{
    if (!head)
    {
        cout << "linked list is not exist" << endl;
    }
    else
    {
        int node = 1;
        Node *t = head;
        while (t != NULL)
        {
            cout << " " << t->item_name << " ";
            cout << t->price << " ";
            cout << t->tax;
            cout << " " << (t->tax + t->price);
            cout << endl;
            t = t->Next;
        }
        cout << "........................................................................................................................." << endl;
    }
}
void List::display()
{
    if (!head)
    {
        cout << "linked list is not exist" << endl;
    }
    else
    {
        int node = 1;
        Node *t = head;
        while (t != NULL)
        {
            cout << "........................................................................................................................." << endl;
            cout << " NODE NO." << node++ << endl;
            cout << " " << t->item_no << " ";
            cout << " " << t->item_name << " ";
            cout << " " << t->price << " ";
            cout << endl;
            t = t->Next;
        }
        cout << "........................................................................................................................." << endl;
    }
}
