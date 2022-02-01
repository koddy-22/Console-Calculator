#include<iostream> 
#include<math.h> 
using namespace std; 
 
int main () 
{
    bool valid = false;
    double a,b; 
    int d,e;
    char c; 

   do
   {
      do
      {
            
          cout << "*---------------------*" << endl;
          cout << "|                     |" << endl;
          cout << "|      Calculator     |" << endl;
          cout << "|                     |" << endl;
          cout << "*---------------------*" << endl;
          cout <<endl; 
          cout << "[1] Addition" <<endl; 
          cout << "[2] Substraction" <<endl;
          cout << "[3] Multiplication" <<endl;
          cout << "[4] Division" <<endl;	
          cout << "[5] Modulus" <<endl; 
          cout << "[6] Exponentiation" <<endl; 
          cout << "[7] Square root" <<endl;
          cout << "[0] Exit" << endl;
          cout << endl;
          cout << "Enter the function to be performed: \n--> "; 
          cin >> c;
          if ( c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '0' )
          {
             valid = true;
          }
          else
          {
             cout << "Error! invalid input" << endl; 
             valid = false;
          }
      }
      while ( !valid );

      if ( c == '0' )
      {
         break;
      }
      else
      {
         if ( c == '6' || c == '7' )
         {
            switch (c)
            {
               case '6':
                  cout << "Enter the number --> ";
                  cin >> a;
                  cout << "Enter its power --> ";
                  cin >> b;
                  cout << "Exponentation = " << pow(a,b) << endl;
                  break;
                case '7':
                  cout << "Enter the number --> ";
                  cin >> a;
                  cout << "Its square root = " << sqrt(a) << endl;
                  break;
            }
         }
         else
         {
            cout << "Enter the first number --> ";
            if ( c == '5' )
            {
               cin >> d;
            }
            else
            {
               cin >> a; 
            }
            cout << "Enter the second number --> ";
            if ( c == '5' )
            {
               cin >> e;
            }
            else
            {
               cin >> b; 
            }
            switch (c)
            {
               case '1':
                  cout << "Addition = " << a+b << endl;
                  break;
               case '2':
		  cout << "Substraction = " << a-b << endl;
                  break;
               case '3':
                  cout << "Multiplication = " << a*b << endl;
                  break;
               case '4':
		  cout << "Division = " << a/b << endl;                  
                  break;
               case '5':
                  cout << "Modulus = " << d%e << endl;
                  break;
            }
         }
      }
      do
      {
         cout << "Calculate something else?\n[1] Yes\n[2] No\n--> " ;
         cin >> c ; 
      }
      while ( c != '1' && c != '2');

   }
   while ( c == '1');

   cout<< "Thanks for using the program :) ";

   return 0;
}