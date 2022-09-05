
 
#include <iostream>
#include<string>
using namespace std;
//function for menu
void menu()
{ cout<<"ARRAY OPERATIONS WITH C++ \n";
cout<<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n";
cout<<"      **********MENU**********  \n ";
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% \n";
 cout<<"What operation do you want to perform? \n";
        cout<<" 1.Traversing \n";
        cout<<" 2.Inserting \n";
        cout<<" 3.Deleting \n";
}


//function for option 1 traversing
void Traversing()
{
cout<< "you selected traversing : \n";
int array[50], i, arrSize;
    cout<<"Enter the Size for Array: \n";
    cin>>arrSize;
    cout<<"Enter "<<arrSize<<" Array Elements: \n";
    for(i=0; i<arrSize; i++)
        cin>>array[i];
        
      //traversing array 
      cout<<"The traversed array is: \n";
        for (int i = 0; i < arrSize; i++)    
        {    
            cout<<array[i]<<",";   
            cout<<endl;
        }    
}


 
void specificposition()
{
    int i, element, position, arrSize;
    cout<<"Enter the Size for Array: \n";
    cin>>arrSize;
    int array[arrSize];
    cout<<"Enter "<<arrSize<<" Array Elements: \n";
    for(i=0; i<arrSize; i++)
        cin>>array[i];
    cout<<"Enter Element to Insert: \n";
    cin>>element;
    cout<<"At What Position ? \n";
    cin>>position;
    for(i=arrSize; i>=position; i--)
        array[i] = array[i-1];
    array[i] = element;
    arrSize++;
    cout<<"The New Array is: \n";
    for(i=0; i<arrSize; i++)
        cout<<array[i]<<"  ";
    cout<<endl;
}

void endposition()
{
    int arraysize, i, element ;
    cout<<"Enter the Size for Array: \n";
    cin>>arraysize;
    int array[arraysize];
    cout<<"Enter "<<arraysize<<" Array Elements: \n";
    for(i=0; i<arraysize; i++)
        cin>>array[i];
    cout<<"Enter Element to Insert: \n";
    cin>>element;
    array[i ] = element;
    cout<<"\nThe New Array is: \n";
    for(i=0; i<arraysize+1; i++)
        cout<<array[i]<<"  ";
    cout<<endl;
}


//delete startpoint
void Deleting()
{
int x[30],y[30];
	int i,j,k,l;
	
	cout<<"Enter the size of array you want to create"<<endl;
	cin>>k;
	
	cout<<"\nEnter elements of array\n"; 
    for(i=0,j=0; i<k; ++i) 
    cin>>x[i]; 
	
	
	cout<<"\nEnter the element(s) for deletion\n"<<endl;
	cin>>l;
	

	for (i=0,j=0; i<k; ++i)
       {
	  if (x[i]!=l)
	     y[j++]=x[i];
	}
	
	if(j==k)
	{
		cout<<"\nERROR !!! Element not found in Arraay";
		exit(0);
	}
	
	else
	{
		cout<<"\nArray after deletion is:";
		for(i=0; i<j; i++)
		   cout<<y[i]<<" ";
	}
	
	
	


    cout<<endl;
    //nnnnnnnnnnnnnnnnnnnnnnnn
}

int main()
{ 
 


 
//function to display Menu to enter choice
 
menu(); 
int choice;
string confirm;



//do loop
do
{ cout<<"Enter an option 1-3: \n";
cin>>choice;
//switch statement to implement options
switch (choice)
{
case 1: Traversing(); break;
case 2: 
int insertPositin;
cout<< "you have selected inserting \n";
cout<< "Where do you want to insert the element? \n";
cout<<" 1.At a Specific Position \n";
        cout<<" 2.At the End \n";
        cin>>insertPositin;
        if (insertPositin==1){
            specificposition();
        }
		
		else if (insertPositin==2){
            endposition();
        }
break;
case 3: Deleting(); break;
default: cout<<"invalid";
cout<<endl;break;
}
cout<<"Enter Y/y to perform another operation? \n";


cin>>confirm;

} while (confirm == "y" || confirm == "Y" );



return 0;
}
