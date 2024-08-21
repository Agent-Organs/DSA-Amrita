#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 5
struct stack{
    int s[size];
    int top;
};

struct stack st;

int stfull(){
    if(st.top>=size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int item){
    st.top++;
    st.s[st.top]=item;
}
int stempty(){
    if(st.top==1)
        return 1;
    else
        return 0;
}
int pop(){
    int item;
    item=st.s[st.top];
    st.top--;
    return(item);
}
void display(){
    int i;
    if(stempty())
    printf("\nStack empty");
    else
    for(i=st.top;i>=0;i--){
        printf("\n%d",st.s[i]);
    }
}

int main()
{  int choice;
int item;
int ans;
int stop = -1;
printf("\n\t\tImplementation of stack");
do{
   printf("\nMain menue");
   printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
   scanf("%d",&choice);
   switch(choice){
       case 1:
       printf("\nEnter the item to be pushed");
       scanf("%d",&item);
       if(stfull())
       printf("\nStack is full");
       else
       push(item);
       break;
       case 2:
       if(stempty())
       printf("/nEmpty stack underflow");
       else 
       {
           item=pop();
           printf("\n The popped element is:%d",item);
       }
        break;
       case 3:display();
        break;
       case 4:
        exit(0);
   }
   printf("/n Do you want to continue?1/0");
   scanf("%d",&ans);
}
   while(ans==1);
    return 0;
}
