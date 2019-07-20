ListNode* Solution::mergeKLists(vector<ListNode*> &A) 
{
    map<int, int> myMap;
    //Value-> Number of times the value is present in all the lists
    //1. Inserting all the elements that are present
    //Traversing through all the lists
    for(int i = 0; i < A.size(); i++)
    {
        //Present node of ith list
        ListNode* curr = A[i];
        while(curr)//Traversing the ith list
        {
            int temp = curr->val;
            if(myMap.find(temp) != myMap.end()){
                myMap[temp]++;
            }
            else{
                myMap[temp] = 1;
            }
            curr = curr->next;
        }
    }
    
    auto it = myMap.begin();
    
    //Step 2. Traversing through the hash and appending the values in a new list
    
    ListNode* head = NULL;
    ListNode* curr = NULL;
    
    while(it != myMap.end())
    {
        while(it->second != 0)//If a particular value exists in the hash
        {
            ListNode* list = new ListNode(it->first);
            if(head == NULL)
            {
                head = list;
                curr = list;
            }
            else
            {
                curr->next = list;
                curr = curr->next;
            }
            it->second--;
        }
        it++;
    }
    
    return head;}
