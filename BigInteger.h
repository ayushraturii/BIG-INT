#ifndef BIGINTEGER_H
#define BIGINTEGER_H

struct node
{
    int data;
    int carry;
    struct node* next;
    struct node* prev;
};

struct BigInteger
{
    struct node* head;
    int length;
};

int len(struct BigInteger a); 
struct BigInteger initialize(char *s);
int compare(struct BigInteger a, struct BigInteger b);
struct BigInteger add(struct BigInteger a, struct BigInteger b);
struct BigInteger sub(struct BigInteger a, struct BigInteger b);
struct BigInteger mul(struct BigInteger a, struct BigInteger b);
struct BigInteger div1(struct BigInteger a, struct BigInteger b);
struct BigInteger mod(struct BigInteger a, struct BigInteger b);
struct node *reverse(struct node *c);
void display(struct BigInteger a);

#endif