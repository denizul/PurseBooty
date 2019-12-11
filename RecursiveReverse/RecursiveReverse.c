void recursiveReverse(struct node **headRef)
{
    struct node *nxt, *tail;

    //Handle two base cases, at the last node and
    //the next iteration after last node
    if (!headref || !(*headRef)->next) return;

    //Save addr of current node and tail
    //This is needed as we return 'back up' the recursion
    nxt = (*headRef);
    tail = (*headRef)->next;

    //Recursive call to end
    recursiveReverse(&tail);

    //Connect each node to the addr saved in the parent caller
    //The head pointer is fixed as we go back up, this is a bit
    //difficult to grasp
    nxt->next->next = *headRef;
    nxt->next = NULL;
    *headRef = tail;
    
}
