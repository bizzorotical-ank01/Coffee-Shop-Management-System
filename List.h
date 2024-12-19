#include "Node.h"
class List
{
private:
    Node *head, *tail;

public:
    List();
    bool create_node(string item_name, int in_stock);
    bool create_node(int item_no, string item_name, double price);
    bool create_node(string item_name, double price, double tax, double total);
    bool create_node(int feedback);
    void display();
    void billing();
};
