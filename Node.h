#include <iostream>
#include <string>
using namespace std;
struct Node
{
    string item_name, feedback;
    int item_no;
    double price, bill, tax;
    Node *Next;
};