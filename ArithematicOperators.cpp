//Hello-There programmer. This is the second program using C++ of my Lab-Practicals.
/*In this declaration of variables and assigning some value int it is done and by using arithematic operators
 we will do the Addition, Subtraction, Multiplication , Division and Modulous..  
*/


#include<iostream>
using namespace std;

int main(){
	
	int x,y,z;// here three variables are declared
	//we will assign the values to the variable x & y, and will assign the answers in the variable z
	
	cout<<"Enter the First Number:";
	cin>>x;
	cout<<"Enter the Second Number:";
	cin>>y;
	
	cout<<endl<<"Here we consider X="<<x<<"& Y="<<y<<endl<<endl;
	
   // now we will print the result directly without saving it in the variable 'z'
   
   cout<<"Addition of"<<x<<"&"<<y<<",X+Y="<<x+y<<endl<<endl; // prints output for Addition
   cout<<"Subtraction of"<<x<<"&"<<y<<",X-Y="<<x-y<<endl<<endl; // prints output for Subtraction
   cout<<"Multiplication of"<<x<<"&"<<y<<",X*y="<<x*y<<endl<<endl; //prints output for <ultiplication
   cout<<"Division of"<<x<<","<<y<<",X/Y="<<x/y<<endl<<endl; //prints output for Division
   cout<<"Remainder of"<<x<<","<<y<<",X%Y="<<x%y<<endl<<endl; //prints output for Modulous
   
   //Now we will print the result by saving it into the third variable 'Z'
   cout<<"Now by using variable Z to show the output"<<endl<<endl;
   z=x+y;
   cout<<"Addition of"<<x<<"&"<<y<<",X+Y="<<z<<endl<<endl; // prints output for addition
   
   z=x-y;
   cout<<"Subtraction of"<<x<<"&"<<y<<",X-Y="<<z<<endl<<endl; // prints output for subtraction
   
   z=x*y;
   cout<<"Multiplication of"<<x<<"&"<<y<<",X*Y="<<z<<endl<<endl; // prints output for multiplication
   
   z=x/y;
   cout<<"Division of"<<x<<"&"<<y<<",X/Y="<<z<<endl<<endl; // prints output for division
   
   z=x%y;
   cout<<"Modulous of"<<x<<"&"<<y<<",X%Y="<<z<<endl<<endl; // prints output for modulous
   
   return 0;
}