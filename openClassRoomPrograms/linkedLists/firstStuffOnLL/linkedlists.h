
typedef struct Element Element;
struct Element
{
    int number;
    Element *next;
};


// creating the head of the linked list
typedef struct Liste Liste;
struct Liste
{
    Element *head;
};

Liste *initialization();
void addElementToHead(Liste *liste ,int newNumber);
void deleteElementFromHead(Liste *liste);
void showList(Liste *liste);
void addElementInMiddle( Liste *Liste,int newNumber,int numberToAddNextTo);
