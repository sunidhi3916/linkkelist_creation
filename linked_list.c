 #include<stdio.h>
 #include<stdlib.h>

 struct node{
    int data;
    struct node *next;
 };

 struct node *head,*temp;

 void create()
 {
    int n;
    printf("press 1 to insert an element\n");
    scanf("%d",&n);
    head=NULL;
    while(n==1)
    {
        struct node *newnode;
        newnode=malloc(sizeof(struct node));
        newnode->next=NULL;
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=newnode;
            temp=head;

        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
         printf("press 1 to insert an element\n");
    scanf("%d",&n);

    }
 };
 void display()
 {
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
 };

 struct node *begin(struct node *head,int num)
 {
     struct node *newnode;
     newnode=malloc(sizeof(struct node));
     newnode->data=num;
     newnode->next=head;
     head=newnode;

     return head;

 };

 void main()
 {
    create();
    display();
     int num;
     printf("enter the element to insert\n");
     scanf("%d",&num);
     begin(head,num);
     display();
 }
 

