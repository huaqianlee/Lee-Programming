/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int v1 = 0, v2 = 0, result = 0;
    struct ListNode * result_list, *return_list;
    return_list = result_list = (struct ListNode*)malloc(sizeof(struct ListNode));
    /* Solve "member access within misaligned address 0x000000000031 for type 'struct ListNode', which requires 8 byte alignment" error. */
    result_list->next = NULL;
    
    while (true){
        v1 = (l1 != NULL) ? l1->val : 0;
        v2 = (l2 != NULL) ? l2->val : 0;
        result += v1 + v2;
        
        result_list->val = result % 10;
        result = result / 10;        
        //printf("val = %d\n", result_list->val);
    
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
        
        if (NULL == l1 && NULL == l2)
        //if((NULL == l1->next) && (NULL == l2->next))
           break;
        result_list = result_list->next = malloc(sizeof(struct ListNode));
        result_list->next = NULL;
        // if (NULL == l1 && NULL == l2)
        //    break;
    }
    
    //printf("result = %d\n",result);
    if (result > 0){
        result_list = result_list->next = malloc(sizeof(struct ListNode));
        result_list->next = NULL;
        result_list->val = result;        
    }

    
    return return_list;
    
    
}

