    #include <stdio.h>  
    #include <stdlib.h>  
    void push();  
    void pop();  
    void display();  
    struct node   
    {  
    int val;  
    struct node *next;  
    };  
    struct node *top;  
      
    void main ()  
    {  
        int choice=0;     
        printf("\n*********Stack operations using linked list*********\n");  
        printf("\n----------------------------------------------\n");  
        while(choice != 4)  
        {  
            printf("\n\nChose one from the below options...\n");  
            printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
            printf("\n Enter your choice \n");        
            scanf("%d",&choice);  
            switch(choice)  
            {  
                case 1:  
                {   
                    push();  
                    break;  
                }  
                case 2:  
                {  
                    pop();  
                    break;  
                }  
                case 3:  
                {  
                    display();  
                    break;  
                }  
                case 4:   
                {  
                    printf("Exiting....");  
                    break;   
                }  
                default:  
                {  
                    printf("Please Enter valid choice ");  
                }   
        }  
    }  
    }  
    void push ()  
    {  
        int val;  
        struct node *n = (struct node*)malloc(sizeof(struct node));   
        if(n == NULL)  
        {  
            printf("not able to push the element");   
        }  
        else   
        {  
            printf("Enter the value");  
            scanf("%d",&val);  
            if(top==NULL)  
            {         
                n->val = val;  
                n-> next = NULL;  
                top=n;  
            }   
            else   
            {  
                n->val = val;  
                n->next = top;  
                top=n;  
                   
            }  
            printf("Item pushed");  
              
        }  
    }  
      
    void pop()  
    {  
        int item;  
        struct node *ptr;  
        if (top == NULL)  
        {  
            printf("Underflow");  
        }  
        else  
        {  
            item = top->val;  
            ptr = top;  
            top = top->next;  
            free(ptr);  
            printf("Item popped");  
              
        }  
    }  
    void display()  
    {  
        int i;  
        struct node *temp;  
        temp=top;  
        if(top == NULL)  
        {  
            printf("Stack is empty\n");  
        }  
        else  
        {  
            printf("Printing Stack elements \n");  
            while(temp!=NULL)  
            {  
                printf("%d\n",temp->val);  
                temp = temp->next;  
            }  
        }  
    }  



