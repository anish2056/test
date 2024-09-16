#include <stdio.h>
#define SIZE 4
int top =-1;
int stack[SIZE]; // stack[4]
void push();
int main () {

    while(1){
        int choice;
        printf("choice your operations.\n");
        printf("1.push element:\n 2.pop element:\n 3.show the element:\n 4.peek the element:\n 5.exit:\n");
         printf("choice your operations:");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                push();
                break;
        }
    }
    
}

void push() {
    int item;
    if (top == SIZE-1) {
        printf("-----------------StackOver Flow----------------------");
    } else {
        printf("Enter your element for push in the stack:\n");
        scanf("%d", &item);
        top++;
        stack[top] = item;

    }
   
}