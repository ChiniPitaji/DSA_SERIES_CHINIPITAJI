// #include <iostream>

// // main block se program start hota hai
// int main()
// {
//     std::cout << "ChiniPitaji";
//     // or can use using namespace std outside the main block
//     cout << endl;

//     // cout->prints the data
//     //<<->to print into standard display
//     //"chinipitaji"->string
//     //;->terminator or to end the line
//     // endl->uses to complete the line and print the next info to the next line
//     // or can use \n to make it to the next line
//     int a;
//     cin >> a;
//     // cin->uses to take input from the user

//     // datatypes: used to tell the variables the type of data they can store. types: built-in/primitive: int,char,float,double.   Derived(is made up by using the primitive datatype): arrays,pointers,references.   User-Defined: structures,unions,classes, enumerations.

//     // variables:a memory location associated with some name in order to store some form of data and retrieve it when required
// // example: int a =10; here int is datatype and a is variable and 10 is the value that is stored in that variable.




//     return 0;
// }




// int main(){ }->returns output as interger type
// void main(){ }->returns nothing/void [kuch return nhi krta]

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch='a';
//     cout<<"value of ch is:"<<ch<<endl;
//     //in memory every char is associated with a ASCII value. 'a'->97 ; 'A'->65
//     bool flag = true;
//     cout<<"value of flag is: "<<flag<<endl;
//     //bool returns true and false value i.e:1 & 0.
//     return 0;
// }

//---->>Variable naming conventions[explore]

// int a = 10;
// cout<<sizeof(a)<<endl; -->it will print the size of the variable a. now try it for other datatypes as :float,double,long.char,bool.......

// how data is strored : positive and negative
// so data is stored in blocks in binary form then the first block is k/as MSB and last block is as LSB. if the MSB(first bit) is 0 then it is positive and if its 1 then means negative number is stored

// but how negative number's stored in memory??
// with the concept of 2's compliment

// 2's compliment => 1's compliment + 1
// meanwhile 1's compliment is fliping the bits.


//-----------------------------------
//TYPECASTING[or TYPE CONVERSION]:conversion of one datatype to another
// can done in two ways: automatically by the compiler and manually by the programmer or user

// Implicit : automatic type casting , compiler automatically converts , all data type is automaticallly upgraded to the largest type without losing any information, can only be apply if both variables are compatible with each other
// example: 
// char ch = 97;
// cout<<ch<<endl;
// output: a

// int num='b';
// cout<<num<<endl;
// output:98


// Explicit : manual type casting, manually done by the programmer or the user according to the requirement in the program , doesn't require checking the compatability, can upgrade or downgrade the datatype of one variable to another in a program, uses cast() operator to change the type of a variable.
//example:
// double d =5.7;
// int x =(int)d+2;
// cout<<"value of x :"<<x<<endl;
// output: value of x :7

//----------------------------------
//Operators:-

// ~Arithematic: %,+,-,*,/
// int a =5;
// int b=3;
// cout<<a+b<<endl; //8
// cout<<a-b<<endl; //2
// cout<<a*b<<endl; //15
// cout<<a%b<<endl; //2
// cout<<a/b<<endl; //1


// ~Relational: >,<,>=,<=,!=,==
// int a=5;
// int b=3;
// cout<<(a>b)<<endl;//1
// cout<<(a<b)<<endl;//0
// cout<<(a==b)<<endl;//0
// cout<<(a!=b)<<endl;//1
// cout<<(a>=b)<<endl;//1
// cout<<(a<=b)<<endl;//0

//~Assignment:int a= 5;
//~Logical : &&, ||, !
