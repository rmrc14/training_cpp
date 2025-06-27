#include <iostream>
#include<cstring>
#include<array>

using namespace std;

class Node{
    char Fruit_name[20];
    int value;
    Node* next;
   public: 
    Node(const char ch[],int val)
    {
       strcpy( Fruit_name,ch);
        value=val;
        next=nullptr;
    }
   
   char* getName(){return Fruit_name;}
   int getValue(){return value;}
   Node* getNext(){return next;}
   void setNext(Node* n)
   {
       next=n;
   }
    
};
class HashTable{
    private:
     static const int tableSize=5;
    array<Node*,tableSize> bucket; // size 5
  
   int hashFunction(const char n[])
   {
       int sum=0;
       for(int i=0;n[i]!='\0';i++)
       {
           sum+=n[i];
       }
       
       return sum%tableSize;
       
   }

    public:
    HashTable(){
        for(int i=0;i<tableSize;i++)
            bucket[i]=nullptr;
    }
    
    void insert(const char key[],int value)
    {
        Node* nn= new Node(key,value);
        int index= hashFunction(key);
        
        if(bucket[index]==nullptr)
        {
            bucket[index]=nn;
        }
        else
        {
            Node* temp=bucket[index];
            while(temp->getNext()!=nullptr)
            {
                temp=temp->getNext();
            }
            temp->setNext(nn);
        }
        
        
    }
    void display()
    {
        for(int i=0;i<tableSize;i++)
        {
            cout<<"================="<<endl;
            cout<<"bucket: "<<i<<endl;
           Node* temp= bucket[i];
          if(!temp)
           cout<<"NULL"<<endl;
          else
          { while(temp!=nullptr)
            {
                cout<<temp->getName()<<":"<<temp->getValue()<<" | ";
                 temp=temp->getNext();
            }
            cout<<"NULL"<<endl;
          }
            
        }
    }
    
    void search(const char n[] )
    {
        int index=hashFunction(n);
        Node* temp=bucket[index];
        while(temp!=nullptr)
        {
            if(strcmp(temp->getName(),n)==0)
            {
                cout<<"found: \n"<<temp->getName()
                <<" : "<<temp->getValue();
            }
            
            temp=temp->getNext();
        }
    }
    
};




int main() {
 
 HashTable ht;
    ht.insert("Apple", 10);
    ht.insert("Banana", 15);
    ht.insert("Orange", 8);
    ht.insert("Grape", 20);
    ht.insert("Kiwi", 12);
    ht.insert("pineapple", 8);
    ht.insert("guava", 20);
    ht.insert("mango", 12);
    
    ht.display();
    
    cout<<endl;
    ht.search("mango");


    return 0;
}
