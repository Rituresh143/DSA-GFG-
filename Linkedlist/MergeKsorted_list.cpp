

Node* sMerge(Node* a,Node* b){
	Node* result = NULL;
	if(a==NULL) return (b);
	else if(b==NULL) return (a);
	if(a->data<=b->data){
		result = a;
		result->next = sMerge(a->next,b);
	}
	else{
		result=b;
		result->next=sMerge(a,b->next);
	}

	return result;
}


Node* merge(Node* arr[],int k){
	int i=0;
    int last = k-1;
    int j;
    while(last!=0){
    	i=0;
    	j=last;
    	while(i<j){
    		arr[i]=sMerge(arr[i],arr[j]);
    		i++;
    		j--;
    		if(i>=j){
    			last=j;
    		}
    	}
    }

    return arr[0];
}