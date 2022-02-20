 #include <iostream>
using namespace std;

template <class T>

class Array
 {
   public:
   T *Arr;
   int size = 0;
   
   Array(int Length);
   ~Array();
   void Accept();
   void Display(); 
   T Maximum();  
 };
 
 template <class T>
 T Array <T> :: Maximum()
  {
    T Max = Arr[0];
    int i = 0;
    
    for(i = 0; i < size; i++)
      {
        if(Arr[i] > Max)
          {
             Max = Arr[i];
          }
      }
    return Max;
  }
 
 template <class T>
 
 Array <T> :: Array(int Length)
     {
       size = Length;
       Arr = new T[size];
     }
     
     
 template <class T>
     
 Array <T> :: ~Array()
     {
       delete []Arr;
     } 
     
  template <class T> 
    
  void Array <T>  :: Accept()
     {
       int i = 0;
       cout<<"Enter the Elements\n";
       for(i = 0; i < size; i++ )
         {
            cin>>Arr[i];
         }
     }  
   
   
   template <class T>  
   
   void Array <T> :: Display()
     {
       int i = 0;
       cout<<"Enter the Elements\n";
       for(i = 0; i < size; i++ )
         {
            cout<<Arr[i]<<"\n";
         }
     }     

int main()
 { 
    Array <int> obj(5);
   
   obj.Accept();
   obj.Display();
   int iRet = obj.Maximum();
   
   cout<<"Max is : "<<iRet<<"\n";
   
   Array <char> obj2(4);
   
   obj2.Accept();
   obj2.Display();
   
   return 0;
 }