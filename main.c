//*****************************************************************************

//Welcome to GDB Online.
 // GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
 // C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
 // Code, Compile, Run and Debug online from anywhere in world.

//*****************************************************************************

//========== C programming=========

// c was devloped by "Dennis" Ritchie  in 1972 at bell laborataries (USA).............

//======All content of C programing==============

// 1. Basic Syntax of a C Program
// 2. First Program
// 3. Data Types and Variables
// 4. Operators
// 5. Decision Making Statements
// 6. Function
// 7. Loops
// 8. Array
// 9. Pointer
// 10. Structure and Union
// 11. Jumping Statements
// 12. File Handling
// 13. Star, Number, ABC Pattern Problems
// 15. Sum of N Natural Numbers
// 16. Sum of Array Elements
// 17. mux numeber of Elements
// 18. project (calc)


//(1). Basic Syntax of a C Program.......
// #include <stdio.h>
// int main(){

// return 0;
// }


//(2).first code of c program...... WAP to print "hello".......
// #include<stdio.h>
// int main (){
// printf("Hello world");
// return 0;
// }


// static value & dynamic value....

// # include <stdio.h>  //....static value....
//  int main (){
//  int age =18;
//  printf("anuj age  %d\n",age);
//  return 0;
//  }


//  # include <stdio.h>  //...dynamic value....
//   int main (){
//   int age ;
//   printf(" anuj age : ");
//   scanf ("%d", &age );
//   printf ("anuj age is : %d\n",age);
//   return 0;
//   }


// (3). Data Types and Variables ...static & dynamic value..
//     #include <stdio.h>
//     int main() {//dynamic  value...
//     int num1;
//     float num2;
//     char num3;
//     double num4;
//     char num5[10]; // string
//     printf("Enter int value:\n");
//     scanf("%d", &num1);
//     printf("Enter float value:\n");
//     scanf("%f", &num2);
//     printf("Enter char value:\n");
//     scanf(" %c", &num3);  // space before %c
//     printf("Enter double value:\n");
//     scanf("%lf", &num4);
//     printf("Enter string value:\n");
//     scanf("%s", num5);  // no &
//     printf("This is int type value: %d\n", num1);
//     printf("This is float type value: %f\n", num2);
//     printf("This is char type value: %c\n", num3);
//     printf("This is double type value: %lf\n", num4);
//     printf("This is string type value: %s\n", num5);
//     return 0;
//     }


//(4). Operators....(1) Airthmatic operation...(+,-,/,*)
// #include<stdio.h>
// int main(){
// int num1 =10 ;
// int num2 =20;
// int num1, num2;
// int sum,sub,mul,div,mod;
// printf(" Enter first number\n ");
// scanf("%d",&num1);
// printf(" Enter second number\n ");
// scanf("%d",&num2);
// sum= num1+num2;
// sub=num1-num2;
// div=num1/num2;
// mul=num1*num2;
// mod=num1%num2;
// printf("this is addition opration%d\n",sum);
// printf("this is substraction opration%d\n",sub);
// printf("this is multiple opration%d\n",mul);
// printf("this is division opration%d\n",div);
// printf("this is percentage opration%d\n",mod);
// return 0;
// }


// Operators....(2) relation operation...(==,>=,<=,>,<,!=)
//     #include<stdio.h>
//     int main(){
//     int n=10;
//     int n1=20;
//     printf(" this is == operator:%d\n",n==n1);
//     printf(" this is >= operator:%d\n",n>=n1);
//     printf(" this is <= operator:%d\n",n<=n1);
//     printf(" this is < operator:%d\n",n<n1);
//     printf(" this is > operator:%d\n",n>n1);
//     printf(" this is != operator:%d\n",n!=n1);
//     return 0;
//     }


// Operators....(3) Assignment operation...(+=,-=,*=,/=)
//    #include <stdio.h>
//     int main() {
//     int n = 5;
//     printf("1: %d\n", n);
//     n += 5;
//     printf("2: %d\n", n);
//     n -= 5;
//     printf("3: %d\n", n);
//     n *= 5;
//     printf("4: %d\n", n);
//     n /= 5;
//     printf("5: %d\n", n);
//     return 0;
//     }


// Operators....(4) logical operators...(&&,||,!)

//     #include <stdio.h>
//     int main() {
//     int a =5, b = 10;
//     if (a > 0 && b > 0) {
//     printf("Both a and b are positive.\n");
//     }
//     if (a > 0 || b > 0) {
//     printf("At least one is positive.\n");
//     }
//     if (!a) {
//     printf("a is zero or false.\n");
//     }
//     return 0;
//     }

// Operators....(5) Bitwise operators...(&,|,^,<<,>>)

// Operators....(6) increment/decrement operators...(++,--)

//     #include <stdio.h>
//     int main() {
//     int a = 10;
//     printf("%d\n", a);
//     printf("%d\n", a++);    // Post-increment:
//     printf("%d\n", a);
//     printf("%d\n", --a);    // Pre-decrement:
//     printf("%d\n", a--);    // Post-decrement:
//     printf("%d\n", a);
//     return 0;
//     }

// Operators....(7) size of operators...(size in byte)
// #include <stdio.h>
// int main() {
// printf("Size of int: %dbytes\n", sizeof(int));
// printf("Size of float: %dbytes\n", sizeof(float));
// printf("Size of char: %dbytes\n", sizeof(char));
// printf("Size of double: %dbytes\n", sizeof(double));
// printf("Size of long: %dbytes\n", sizeof(long));
// return 0;
// }


// (5). Decision Making Statements...
// #include<stdio.h>
// int main (){
// int age=19;
// if (age>18){
// printf(" you can vote\n");//static value..
// }
// else{
// printf(" you can't vote\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main() {
// int age; // dynamic value
// printf("enter your age\n");
// scanf("%d", &age);
// if (age < 18) {
// printf("you are kid\n");
// } else if (age >= 19 && age < 80) {
// printf("Welcome to voting center\n");
// printf("you are allowed to vote\n");
// } else if (age >= 80) {
// printf("you are senior citizen\n");
// } else {
// printf("invalid age\n");
// }
// return 0;
// }


//(6).  function ...(

// # include<stdio.h>
// void anuj  (){ //without parameter& without Returntype
// printf("this is frist function\n");
// }
// void anuj1 (int roll){ //with parameter& without Returntype
// printf("this is second function\n");
// printf("My roll number is %d\n",roll);
// }
// int anuj 2 (int a,int b){ //with parameter& with Returntype
// printf("this is third function\n");
// printf("My sum is %d\n",a+b);
// }
// int anuj 3 (){ //without parameter& with Returntype
// printf("this is fourth function"); 
// }
// int main (){
// anuj ();
// anuj 1(30);
// anuj 2(10,15);
// anuj 3();
// return 0;
// }


//  # include<stdio.h>
// void anuj (){
// printf("name  anuj parmar \n");
// }
// void anuj1 ( int roll){
// printf("My roll number is %d\n",roll);
// }
// int anuj2  (int year){
// printf("year\n");
// printf("My year %d\n",year);
// return 0;}
// int anuj 3 ( int sem){
// printf(" sem%d\n",sem );
// return 0;
// }
// int main (){
// anuj ();
// anuj1 (100);
// anuj2 (2 );
// anuj3 (4);
// return 0;
// }


// #include <stdio.h>
// void anuj  (){
// int n;
// for (int i=1; i<=10;i++)
// printf("%d/n",i );
// }
// int main (){
// anuj (10);
// return 0;
// }


//(7). loop..( for,while,do while)
//for loop....
// #include <stdio.h>
// int main (){
// for(int anuj =0;anuj <=5;anuj ++){
// printf("%d\n",anuj );
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// int table;
// printf("enter table value");
// scanf("%d" ,&table);
// for(int anuj =1;anuj <=10;anuj ++){
// printf(" table of %d *%dis:%d\n",table,anuj,table * anuj);
// }
// return 0;
// }


// #include <stdio.h>
// int main(){
// int n=2;
// int  counter=0;
// for (int i=1; i<=n; i++){
// if(n%i==0){
// counter++;
// }
// }
// if (counter ==2){
// printf("%d is prime \n",n);
// }
// else {
// printf("%d is not prime \n",n);
// }
// return 0;
// }


// while loop....
// #include <stdio.h>
// int main(){
// int i=0;
// int n= 20;
// while (i<7){
// printf("%d Hello\n",i);
// i++;
// }
// return 0;
// }


//  #include <stdio.h>
// int main(){
// int n=2;
// int  counter=0;
// int i=1;
// while (i<= n){
// if(n%i==0){
// counter++;
// }
// i++;
// }
// if (counter ==2){
// printf("%d is prime \n",n);
// }
// else {
// printf("%d is not prime \n",n);
// }
// return 0;
// }


// DO while loop ....
// # include<stdio.h>
// int main(){
// int n=1;
// printf("static value true case ");
// do{
// printf("this loop run till :( count =%d)\n",n);
// n++;
// }
// while ( n<=3);
// printf("static value false case ");
// int n1=5;
// do{
// printf("this loop run till :( count =%d)\n",n);
// n1++;
// }
// while ( n<2);
// return 0;
// }


//    #include<stdio.h>
//     int main(){
//     int n;
//     printf("dynamic value true case n: ");
//     scanf("%d", &n);
//     do{
//     printf("this loop run till :( count =%d)\n",n);
//     n++;
//     }
//     while ( n<=3);
//     printf("second case:\n");
//     int n1;
//     printf("dynamic value false case n1: ");
//     scanf ("%d",&n1);
//     do{
//     printf("this loop run till :( count =%d)\n",n);
//     n1++;
//     }
//     while ( n<2);
//     return 0;
//     }


// (8). Array.....
// #include<stdio.h>
// int main (){
//    int arr []={10,20,30,40,50};
//    printf("this is array with index value \n");
//    printf("%d", arr [0]);
//    printf("%d", arr [1]);
//    printf("%d", arr [2]);
//    printf("%d", arr [3]);
//    printf("%d", arr [4]);
//    printf("\n");
//    printf("this is array with for loop value \n");
//    for (int i=0; i<5; i++){
//    printf("%d\n", arr[i]);
//    }
//    return 0;
//    }


// ..print static & dynamic in a single code Array..
// #include <stdio.h>
// int main() {
// int arr [10];
// printf("enter array element/n");
// for (int i=0; i<10; i++){
// scanf("%d\n",&arr[i]);
// }
// for (int i=0; i<10; i++){
// printf("%d\n",arr[i]);
// }
// return 0;
// }


// #include <stdio.h>
// int main(){
// int arr1 []= {20,40,50,70};
// int arr2 [5];
// printf("enter  dynamic array vlues");
// for (int i=0; i<5; i++){
// scanf("%d\n",&arr2[i]);
// }
// printf("this is static array example\n");
// for (int i=0; i<4; i++){
// printf("%d\n",arr1[i]);
// }
// printf("this is  dynamic array example\n");
// for (int i=0; i<5; i++){
// printf("%d\n",arr2[i]);
// }
// return 0;
// }


// #include <stdio.h>
// int main(){
// int num1 []= {20,40,50,70};
// int sum1=0;
// for (int i=0; i<4; i++){
// sum1=sum1+num1[i];
// }
// printf("sum of Array is:%d" , sum1);
// return 0;
// }


// #include <stdio.h>
// int main(){
// int arr []= {20,40,50,70};
// int max = arr[0];
// for (int i=0; i<4;i++){
// if ( max<arr[i]){
// max=arr[i];
// }
// }
// printf("maximum element is:%d" , max);
// return 0;
// }


// 2D Array......
// #include<stdio.h>
// int main(){
// int arr [3][3] ={
// {1,2,3}, //static value...
// {2,3,4},
// {4,5,6}
// };
// for (int i=0; i<3; i++){
// for (int j=0; j<3; j++){
// printf(" %d", arr [i] [j]);
// }
// }
// return 0;
// }

//#include<stdio.h>
//int main(){
//int arr [5][5] ;
//printf("Enter Array Elements");
//for (int i=0; i<5; i++){
//for (int j=0; j<5; j++){
//scanf("%d",& arr [i][j]);
//}
//}
//printf("this is Element of Array\n");
//for (int i=0; i<5; i++){
//for (int j=0; j<5; j++){
//scanf("%d",& arr [i][j]);
//}
//printf("\n");
//}
//return 0;
// }



//(9). pointer.....
// #include<stdio.h>
// int main (){
// int num=10;
// int *p= &num;
// printf("%d\n",num);
// printf("%d\n",&num);
// printf("%d\n",p);
// printf("%d\n",*p);
// return 0;
// }


//(10).structure $ union.....
// #include <stdio.h>
// struct student{
// int id;
// char name [10];
// };
// int main (){
// struct student s1 ={101,"riya"};
// struct student s2;
// printf ("enter id") ;
// scanf ("%d" , &s2.id);
// printf ("enter id") ;
// scanf ("%d" , &s2.id);
// printf ("enter name") ;
// scanf ("%s" , &s2.name);
// printf ("student detail is : /n id ;%d, name:%s", s1.id,s1.name );
// return 0;
// }


// #include <stdio.h>
// struct student{
// int rollno ;
// char name [10];
// int class;
// };
// int main (){
// struct student s1 ={100,"anuj " ,2};
// struct student s2;
// struct student s3;
// printf ("enter rollno") ;
// scanf ("%d" , &s2.rollno);
// printf ("enter rollno") ;
// scanf ("%d" , &s2.rollno);
// printf ("enter name") ;
// scanf ("%s" , &s2.name);
// printf ("student detail is : /n roll ;%d, name:%s,class:%d" , s1.rollno,s1.name ,s1.class );
// return 0;
// }


//(11).FILE HEANDLING......
// # include<stdio.h>
// int main(){
// FILE * p;
// p=fopen("anuj .txt","W");
// if(p==NULL){
// printf(" Error");
// return 1;
// }
// p= fopen("anuj .txt ", "r");
// if(p==NULL){
// printf(" Error");
// }
// else{
// char ch;
// printf(" Reading file");
// while ((ch=fgetc(p))!= EOF){
// putchar(ch);
// }
// fclose(p);
// }
// p=fopen("anuj .txt ", "a");
// if(p!=NULL){
// fprintf(p," this line is appended");
// fclose (p);
// }
// p= fopen("anuj .txt ", "r+");
// if(p!=NULL){
// fprintf( p," r+ mode here");
// fclose (p);
// }
// if(p==NULL){
// printf("File not open");
// return 1;
// }
// p= fopen("anuj .txt ", "W+");
// if(p=NULL){
// printf( p," this is W+ mode ");
// return 1;
// char ch;
// printf(" Reading file in W+ mode");
// while (( ch= fgetc(p))!= EOF){
// putchar(ch);
// }
// fclose (p);
// }
// p= fopen("anuj .txt ", "a+");
// if (p!=NULL){
// fprintf( p," this is a+ mode ");
// rewind (p);
// char ch;
// printf(" Reading file in a+ mode");
// while (( ch= fgetc(p))!= EOF){
// putchar(ch);
// }
// fclose (p);
// }
// return 0;
// }


// # include<stdio.h>
// int main(){
// FILE *R;
// R=fopen("anuj.txt","w+");
// fputs("anujparmar ",R);
// if(R==NULL){
// printf("Error");
// return 1;
// }
// char ch[100];
// printf("Reading file");
// while ( fgets(ch,sizeof(ch),R))
// {
// printf("%s",ch);
// }
// fclose(R);
// return 0;
// }


//(12).Jumping satements .....
// #include <stdio.h>
// int main(){
// printf(" print of cotinue number\n");
// for  ( int i=1; i<=10;i++);
// if (i==7){
// continue;
// }
// printf( " Reading page : %d\n",i);
// }
// return0;


// (13). Star, Number, ABC Pattern Problems
// i,j,a,b print
// #include <stdio.h>
// int main (){
// for(int i=0;i<5;i++){
// for(int j=i;j<5;j++){
// printf("*");
// }
// printf("\n");
// }
// return 0;
// }

// #include <stdio.h>
// int main (){
// for(int i=0;i<5;i++){
// for(int j=i;j<5;j++){
// printf("A");
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// for(int i=0;i<5;i++){
// for(int j=i;j<5;j++){
// printf("B");
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// for(int i=0;i<=5;i++){
// for(int j=0;j<i;j++){
// printf("%d",i);
// }
// printf("\n");
// }
// return 0;
// }

// #include <stdio.h>
// int main (){
// for(int i=0;i<=5;i++){
// for(int j=0;j<i;j++){
// printf("%d",j);
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// for(int i=0;i<=5;i++){
// for(int j=0;j<i;j++){
// printf("*");
// }
// printf("\n");
// }
// for(int i=0;i<=5;i++){
// for(int j=i;j<4;j++){
// printf("*");
// }
// printf("\n");
// }
// return 0;
// }



// #include <stdio.h>
// int main (){
// for(int i=0;i<=5;i++){
// for(int j=0;j<i;j++){
// printf("A");
// }
// printf("\n");
// }
// for(int i=0;i<=5;i++){
// for(int j=i;j<4;j++){
// printf("A");
// }
// printf("\n");
// }
// return 0;
// }

// #include <stdio.h>
// int main (){
// for(int i=0;i<=5;i++){
// for(int j=0;j<i;j++){
// printf("B");
// }
// printf("\n");
// }
// for(int i=0;i<=5;i++){
// for(int j=i;j<4;j++){
// printf("B");
// }
// printf("\n");
// }
// return 0;
// }




// #include <stdio.h>
// int main (){
// for(int i=0;i<=5;i++){
// for(int j=0;j<i;j++){
// printf("%d",i);
// }
// printf("\n");
// }
// for(int i=0;i<=5;i++){
// for(int j=i;j<4;j++){
// printf("%d",i);
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// for(int i=0;i<=5;i++){
// for(int j=0;j<i;j++){
// printf("%d",j);
// }
// printf("\n");
// }
// for(int i=0;i<=5;i++){
// for(int j=i;j<4;j++){
// printf("%d",j);
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("*");
// }
// printf("\n");
// }
// for(int i=5;i>=1;i--){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("*");
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("*");
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("%d",i);
// }
// printf("\n");
// }
// return 0;
// }

// #include <stdio.h>
// int main (){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("%d",j);
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("A",);
// }
// printf("\n");
// }
// return 0;
// }

// #include <stdio.h>
// int main (){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("B");
// }
// printf("\n");
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
// for(int i=5;i>=1;i--){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("*");
// }
// printf("\n");
// }
// return 0;
// }


// #include<stdio.h>
// int main(){
// for(int i=5;i>=1;i--){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("A");
// }
// printf("\n");
// }
// return 0;
// }


// #include<stdio.h>
// int main(){
// for(int i=5;i>=1;i--){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("B");
// }
// printf("\n");
// }
// return 0;
// }


// #include<stdio.h>
// int main(){
// for(int i=5;i>=1;i--){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("%d",i);
// }
// printf("\n");
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
// for(int i=5;i>=1;i--){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("%d",j);
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("%d",j);
// }
// printf("\n");
// }
// for(int i=5;i>=1;i--){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("%d",j);
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
// int main (){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("%d",i);
// }
// printf("\n");
// }
// for(int i=5;i>=1;i--){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("%d",i);
// }
// printf("\n");
// }
// return 0;
// }

   // #include <stdio.h>
// int main (){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("A");
// }
// printf("\n");
// }
// for(int i=5;i>=1;i--){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("A");
// }
// printf("\n");
// }
// return 0;
// }



// #include <stdio.h>
// int main (){
// for(int i=1;i<=5;i++){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("B");
// }
// printf("\n");
// }
// for(int i=5;i>=1;i--){
// for(int j=1;j<=5-i;j++){
// printf(" ");
// }
// for(int j=1;j<=2*i-1;j++){
// printf("B");
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
// for(int j=1;j<=i;j++){
// printf("*");
//  }
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("*");
//  }
//  printf("\n");
//  }
// for(int i=5;i>=1;i--){
//  for(int j=1;j<=i;j++){
//  printf("*");
//  }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("*");
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
//  for(int j=1;j<=i;j++){
//  printf("A");
//  }
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("A");
//  }
//  printf("\n");
//  }
// for(int i=5;i>=1;i--){
// for(int j=1;j<=i;j++){
// printf("A");
// }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("A");
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
//  for(int j=1;j<=i;j++){
//  printf("B");
//  }
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("B");
//  }
//  printf("\n");
//  }
// for(int i=5;i>=1;i--){
// for(int j=1;j<=i;j++){
// printf("B");
// }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("B");
// }
// printf("\n");
// }
// return 0;
// }



// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
//  for(int j=1;j<=i;j++){
//  printf("%d",i);
//  }
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("%d",i);
//  }
//  printf("\n");
//  }
// for(int i=5;i>=1;i--){
// for(int j=1;j<=i;j++){
// printf("%d",i);
// }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("%d",i);
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
//  for(int j=1;j<=i;j++){
//  printf("%d",j);
//  }
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("%d",j);
//  }
//  printf("\n");
//  }
// for(int i=5;i>=1;i--){
// for(int j=1;j<=i;j++){
// printf("%d",j);
// }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("%d",j);
// }
// printf("\n");
// }
// return 0;
// }


// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
//  for(int j=1;j<=i;j++){
//  printf("*");
//  }
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("*");
//  }
//  printf("\n");
//  }
// return 0;
// }


// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
//  for(int j=1;j<=i;j++){
//  printf("A");
//  }
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("A");
//  }
//  printf("\n");
//  }
// return 0;
// }

// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
//  for(int j=1;j<=i;j++){
//  printf("B");
//  }
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("B");
//  }
//  printf("\n");
//  }
// return 0;
// }

// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
//  for(int j=1;j<=i;j++){
//  printf("%d",i);
//  }
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("%d",i);
//  }
//  printf("\n");
//  }
// return 0;
// }

// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
//  for(int j=1;j<=i;j++){
//  printf("%d",j);
//  }
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("%d",j);
//  }
//  printf("\n");
//  }
// return 0;
// }

// #include<stdio.h>
// int main(){
//  for(int i=5;i>=1;i--){
// for(int j=1;j<=i;j++){
// printf("*");
// }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("*");
// }
// printf("\n");
// }
// return 0;
// }


// #include<stdio.h>
// int main(){
//  for(int i=5;i>=1;i--){
// for(int j=1;j<=i;j++){
// printf("A");
// }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("A");
// }
// printf("\n");
// }
// return 0;
// }


// #include<stdio.h>
// int main(){
//  for(int i=5;i>=1;i--){
// for(int j=1;j<=i;j++){
// printf("B");
// }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("B");
// }
// printf("\n");
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
//  for(int i=5;i>=1;i--){
// for(int j=1;j<=i;j++){
// printf("%d",i);
// }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("%d",i);
// }
// printf("\n");
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
//  for(int i=5;i>=1;i--){
// for(int j=1;j<=i;j++){
// printf("%d",j);
// }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("%d",j);
// }
// printf("\n");
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
// int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("*");
//  }
//  printf("\n");
//  }
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("*");
// }
// printf("\n");
// }
// return 0;
// }

// #include <stdio.h>
//  int main (){
//  for(int i=1;i<=5;i++){
//  int space=2*(5-i);
//  for(int j=1;j<=space;j++){
//  printf(" ");
//  }
//  for(int j=1;j<=i;j++){
//  printf("*");
//  }
//  printf("\n");
//  }
// for(int i=5;i>=1;i--){
// int space=2*(5-i);
// for(int j=1;j<=space;j++){
// printf(" ");
// }
// for(int j=1;j<=i;j++){
// printf("*");
// }
// printf("\n");
// }
// return 0;
// }



// #include<stdio.h>
// int main(){
// int outof=100; //ststic value...
// int  anuj ;
// int hindi=50;
// int english=60;
// int chemestry=65;
// int physics=55;
// int maths=70;
// printf("this is a hindi number%d\n", hindi);
// printf("this is a english number%d\n" ,english);
// printf("this is a chemestry number%d\n",chemestry);
// printf("this is a physics number%d\n",physics);
// printf("this is a maths number%d\n",maths);
// riya =hindi+english+chemestry+physics+maths;
// printf("sum of all subject number in a riya %d\n",riya);
// riya=riya/5;
// printf("percentage of anuj %d\n",riya);
// //condition
// if(outof>60){
// printf("you are pass\n");
// printf("grade B");
// }
// else {
// printf("you are  fail\n");
// printf("grade C");
// }
// return 0;
// }


// #include<stdio.h>
// int main(){
// int hindi; // dynamic value...
// int english;
// int chemestry;
// int physics;
// int maths;
// printf("this is a hindi number");
// scanf("%d",&hindi);
// printf("this is a english number");
// scanf("%d",&english);
// printf("this is a chemestry number");
// scanf("%d",&chemestry);
// printf("this is a physics number");
// scanf("%d",&physics);
// printf("this is a maths number");
// scanf("%d",&maths);
// int avg=(hindi+english+ chemestry+physics+maths)/5;
// if(avg<50){
// printf("fail");
// }
// else if (avg<= 60 && avg>=50){
// printf("grade C");
// }
// else if (avg< 70 && avg>60){
// printf("grade B");
// }
// else if (avg< 70 && avg>80){
// printf("grade A");
// }
// else if(avg<=80){
// printf("grate!!\n");
// }
//  return 0;
//}


// (15). Sum of N Natural Numbers
// #include <stdio.h>
// int main() {
// int n, i, sum = 0;
// printf("Enter the number up to which you want the sum: ");
// scanf("%d", &n);
// for(i = 1; i <= n; i++) {
// sum += i;
// }
// printf("Sum of first %d natural numbers is: %d\n", n, sum);
// return 0;
// }


// (16). Sum of Array Elements
// #include <stdio.h>
// int main(){
// int num1 []= {20,40,50,70};
// int sum1=0;
// for (int i=0; i<4; i++){
// sum1=sum1+num1[i];
// }
// printf("sum of Array is:%d" , sum1);
// return 0;
// }


// (17). mux numeber of Array Elements
// #include <stdio.h>
// int main(){
// int arr []= {20,40,50,70};
// int max = arr[0];
// for (int i=0; i<4;i++){
// if ( max<arr[i]){
// max=arr[i];
// }
// }
// printf("maximum element is:%d" , max);
// return 0;
// }


// (18). project ( Normal calc)
// #include <stdio.h>
// int main(){
// int n1;
// int n2;
// char name []="anuj";
// printf("hello %s, In the First project \n",name);
// printf("this is basic calculator for addition of two number \n");
// printf(" Enter the First value \n");
// scanf("%d",&n1);
// printf("Enter the second value \n");
// scanf("%d",&n2);
// printf(" Sum of %d and %d is : %d \n",n1,n2,n1+n2 );
// printf("thanks to use our project,program end! ");
// return 0;