Node* RemoveDuplicates(Node *head)
{   
    struct Node *temp = head, *next_n;
    
    if(temp == NULL)
        return 0;
    
    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            next_n = temp->next->next;
            free(temp->next);
            temp->next = next_n;  
        }
        else
            temp = temp->next;
    }
    
    return head;
}
