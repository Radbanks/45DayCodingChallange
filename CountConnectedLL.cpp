/********************************************************

    Following is the class structure of the Node class:
    
    class Node
    {
    	public:
    	    int data;
    	    Node *next;
    	    Node(int data)
    	    {
    	        this->data = data;
    	        this->next = NULL;
    	    }
    };

********************************************************/

int countConnected(Node *head, vector<int> &arr, int m) {
	// Write your code here.
	Node *temp=head;
	int conn=0;
	int count=0;
	unordered_map <int,int> hash;

	for (int i=0; i<m ; i++)
	{
		hash[arr[i]]++;
	} 

	while ( temp != NULL ){
		if(hash[temp->data] == 1)
			conn++;
		else{
			if(conn > 0)
				count++;
			conn = 0;
		}
		temp=temp->next;
	}
	if(conn > 0)
		count++;
	return count;
}







