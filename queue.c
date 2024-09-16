#include <stdio.h>
# define SIZE 4
int rear =-1;
int front =0;
int queue[SIZE];
void  enqueue();
void show();
void dequue();
int main() {
    while(1) {
        int choice;
        printf("chooce  your operation.\n");
        printf("1.enque element\n2.dequeue element\n 3.show element.");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequue();
                break;
            case 3:
                show();
                break;
        }
    }
}

void enqueue() {
    if(rear==SIZE-1) {
        printf("----------------queue  overflow-------------.\n");
    }
    else {
        int item;
        printf("enter your item to insert into queue.");
        scanf("%d", &item);
        rear++;
        queue[rear] =item;
    }
}

void show() {
    if(front>rear) {
        printf("----------------queue  underflow-------------.\n");
    }
    else {
        for(int i=front;i<=rear; i++) {
            printf("%5d", queue[i]);

        }
        printf("\n");

    }
}

void dequue() {
    if(front>rear) {
        printf("----------------queue  underflow-------------.\n");
    }
    else {
        int n;
        n = queue[front];
        front++;
        printf("delete item is:%d\n", n);

    }
}