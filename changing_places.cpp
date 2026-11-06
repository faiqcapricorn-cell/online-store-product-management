#include "initial.h"

void Inventory::moveLastToSecond(){
    if(head == NULL || head->next == NULL || head->next->next == NULL){
        cout<<"List is too short."<<endl;   // ✅ with 0, 1 or 2 nodes, nothing needs to move
        return;
    }

    Node * secondLast = head;
    while(secondLast->next->next != NULL){
        secondLast = secondLast->next;
    }
    Node * last = secondLast->next;
    secondLast->next = NULL;           
    tail = secondLast;      
    last->next = head->next;                
    head->next = last;           
}