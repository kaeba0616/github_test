o(1), O(N)

int containsLoop(node *head){
    node *slowptr=head, *fastptr=head;
    while(fastptr&&fastptr->next){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(fastptr==slowptr)
            return 1;
    }
    return 0;
}

int findLoopPoint(node *head){
    node *slowptr=head, *fastptr=head;
    int loop=0;
    while(fastptr&&fastptr->next){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(fastptr==slowptr){
            loop=1;
            break;
        }
    }
    if(loop){
        slowptr = head;
        while(slowptr!=fastptr){
            fastptr = fastptr->next;
            slowptr = slowptr->next;
        }
        return fastptr->data;
    }
    return 0;
}