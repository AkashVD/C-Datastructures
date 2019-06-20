/*To understand the linked list and insert element at the beginning*/
#include<iostream>

using namespace std;

class ll
{
  struct Node // Defining a structure for a Node
   { 
     int data;
     Node* next;
   }*head;

 
public:  ll()
         {
           head = NULL;
         }
         
        /*To insert an element at the begining of list */
         void insert(int x)
        {
          Node* temp = new Node; //Creating a new Node using pointer variable temp
          temp->data = x;
          temp->next = NULL;
          if(head != NULL)   //If the list already has Node
          {
            temp->next = head;
          }
          head = temp;
        }
         
        /*To display the elements of the list*/ 
         void display()
        {
          Node* temp = head;
          
          while(temp != NULL) //Traversing the list using a pointer variable temp1
          {
            cout<<temp->data<<endl;
            temp = temp->next;
          }
        }
};

int main()
{
  ll a;
  int n,x;
 
  cout<<"Enter the number of elements you want to insert : ";
  cin>>n;
  
  for(int i=0; i<n; i++)
   {
    cout<<"Enter the element you want to insert : ";
    cin>>x;
    a.insert(x);
   }
   
   cout<<"List is having "<<n<<" elements\nThe elements are:\n";
   a.display();

  return 0;
}
