 // Write a C program that prints the perimeter of a rectangle to take its height and width as input

 #include <stdio.h> 
 int width;          
 int height;         
           
 int perimeter;      

 int main() {
	height = 12;
 	width = 5;

     perimeter = 2*(height + width);
printf("Perimeter of the rectangle = %d inches\n", perimeter);

return(0);
}


//Write a C program that takes hours and minutes as input, and calculates the total number of minutes Expected Output :Input hours: 5Input minutes: 37Total: 337 minutes.


 #include <stdio.h>
 int main()
 {
   int min, hrs;
     printf("Enter minutes:-\n");
     scanf("%d",&min);
     hrs=min/60;
     printf("Hours- %d\n",hrs);
     min=min%60;
     printf("Minutes- %d",min);
     totalmins = mins + (hrs * MINaHOUR);
 	printf("Total: %d minutes.\n", totalmins);
     return 0;
    
 }  



    
//Write a program in C that takes minutes as input, and display the total number of hours an minutes. Expected Output :Input minutes: 5469 Hours, 6 Minutes

#include <stdio.h>
int main()
{
  int min, hrs;
    printf("Enter minutes:-\n");
    scanf("%d",&min);
    hrs=min/60;
    printf("Hours- %d\n",hrs);
    min=min%60;
    printf("Minutes- %d",min);
    return 0;
    
}  


//Write a program that converts Centigrade to Fahrenheit.

 #include<stdio.h>  
     int main()     
     {   
     float fahrenheit, celsius;  
     celsius = 24;  
     fahrenheit =( (celsius*9)/5)+32;  
     printf("\n\n Temperature in fahrenheit is:  %f",fahrenheit);  
     return (0);  
  }  


//Write a C program that converts kilometers per hour to miles per hour.

 #include <stdio.h>
 int main(){
     float km, miles;
    
     printf("Enter the distance (in Km): ");
     scanf("%f", &km);
    
     miles = km / 1.6;
  
     printf("%.2f Kilometers = %.2f Miles", km, miles);
     return 0;
 }


//Write a C program to accept two integers and check whether they are equal or not.

 #include<stdio.h>
 int main()
 {
 int a,b;
 printf("enter two numbers a,b \n");
 scanf("%d %d",&a,&b);
 if(a==b)
 printf("%d and %d are equal \n",a,b);
 else
 printf("%d and %d are not equal \n",a,b);
 return 0;

 }

//Write a C program to check whether a given number is even or odd.

 #include <stdio.h>
 int main() {
 int num;
 printf("Enter an integer: ");
 scanf("%d", &num);

 if(num % 2 == 0)
 printf("%d is even.", num);
 else
 printf("%d is odd.", num);
    
 return 0;
 }


//Write a C program to check whether a given number is positive or negative.


 #include <stdio.h>
 
 int main()
 {
 int A;
 
 printf("Enter the number A: ");
 scanf("%d", &A);
 
 if (A > 0)
 printf("%d is positive.", A);
 else if (A < 0)
 printf("%d is negative.", A);
 else if (A == 0)
 printf("%d is zero.", A);
 
 return 0;
 }


//Write a C program to find whether a given year is a leap year or not.

 #include <stdio.h>

 int main()
 {
 int year;

 printf("Enter year : ");
 scanf("%d", &year);

 if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
 {
     printf("LEAP YEAR");
 }
 else
 {
     printf("COMMON YEAR");
 }

     return 0;
 }


//Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.

 #include<stdio.h>
 int main()
 {
     int age;
     printf("enter age :");
     scanf("%d",&age);
     if (age>=18)
     printf("you can vote !!");
     else 
     printf(""you cant vote !!!);

     return 0;
 }

//Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 

 #include<stdio.h>
 int main()
 {
   int m,n;
   printf("Input the number");
   scanf("%d",&m);
   if(m>0)
    n=1;
   else if(m==0)
    n=0;
   else
    n=-1;
    printf("The value of n= %d",n);

    return 0;
 }


//Write a C program to accept the height of a person in centimeter and categorize the personaccording to their height if below 150 he is dwarf if above 150 and below 200 average and above 200 tall.

 #include <stdio.h>

 int main()
 {
     double height = 0;

     printf("Enter Height (in centimetres): ");
     scanf("%lf", &height);

     if ((height >= 150.0) && (height <= 170.0)) {
         printf("Person is average height person");
     }
     else if ((height > 170.0) && (height <= 195.0)) {
         printf("Person is taller");
     }
     else if (height < 150.0) {
         printf("Person is dwarf");
     }
     else
         printf("Abnormal height \n");

     return 0;
 }


//Write a C program to find the largest of three numbers.

 #include <stdio.h>
 
 int main()
 {
     int A, B, C;
 
     printf("Enter the numbers A, B and C: ");
     scanf("%d %d %d", &A, &B, &C);
     if (A >= B && A >= C)
         printf("%d is the largest number.", A);
 
     if (B >= A && B >= C)
         printf("%d is the largest number.", B);
 
     if (C >= A && C >= B)
         printf("%d is the largest number.", C);
 
     return 0;
 }

//accept marks of 4 subjects and calculate percentage if percentage is below 35% - F below 45% - D below 55% - C below 75% - B above 75% - A 

 #include <stdio.h>

 int main()
 {
     int phy, chem, bio, math; 
     float per; 

     printf("Enter four subjects marks: ");
     scanf("%d%d%d%d", &phy, &chem, &bio, &math);

     per = (phy + chem + bio + math ) / 4.0;

     printf("Percentage = %.2f\n", per);


    if(per >= 90)
     {
         printf("Grade A");
     }
     else if(per >=80 )
     {
         printf("Grade B");
     }
     else if(per >= 70)
     {
         printf("Grade C");
     }
     else if(per >= 60)
     {
         printf("Grade D");
     }
     else (per >= 40)
     {
         printf("Grade E"); 
    }
 

     return 0;
}


// Write a C program to check whether an alphabet is a vowel or consonant. 

  #include <stdio.h>

 int main()
 {
     char ch;

     printf("Please Enter an alphabet: \n");
     scanf(" %c", &ch);
    
     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
 		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')  {
 		printf("\n %c is a VOWEL.", ch);
 	}
     else {
     	printf("\n %c is a CONSONANT.", ch);
 	}
     return 0;
 }


//Write a C program to calculate profit and loss on a transaction accept cost price and selling price.


 #include <stdio.h>

 int main()
 {
     int cp,sp, amt;   
     printf("Enter cost price: ");
     scanf("%d", &cp);
     printf("Enter selling price: ");
    scanf("%d", &sp);
    
     if(sp > cp)
     {
    
         amt = sp - cp;
         printf("Profit = %d", amt);
     }
     else if(cp > sp)
     {
    
         amt = cp - sp;
         printf("Loss = %d", amt);
     }
     else
     {
    
         printf("No Profit No Loss.");
     }

     return 0;
 }


// Accept two numbers from user and swap their values

 #include <stdio.h>  
 int main()  
 {  
   int x, y, z;
   printf("Enter the value of X and Y\n");  
   scanf("%d%d", &x, &y);  
   printf("before swapping numbers: %d   %d\n",x,y);  

   z = x;  
   x = y;  
   y = z;  
   printf("After swapping: %d    %d",x,y);  
   return 0;  
 }  

//Accept two numbers from user and swap their values without using third variable

 #include<stdio.h>  
 int main()   
 {   
   int x, y;  
   printf("Enter the value of x and y?");  
   scanf("%d %d",&x,&y);  
   printf("before swapping numbers: %d   %d\n",x,y);  
 
   x = x + y;   
   y = x - y;    
   x = x - y;  
   printf("After swapping: %d    %d",x,y);   
   return 0;   
 }  


// Accept an integer and Print hello world n times

 #include<stdio.h>
 int main()
 {
   int n,i;
   printf("How many times you want to print Hello World:");
   
   scanf("%d",&n);
   
   while(i<n)
   { 
     printf("Hello World\n");
     i++;
   }
   printf("End");
   return 0;
   
 }

//Print natural number up to n. 

 #include <stdio.h>
 int main(){
     int num;
    
     printf("Enter a number: ");
     scanf("%d", &num);
    
     printf("Natural numbers from 1 to %d are: \n", num);
     for (int i = 1; i <= num; i++){
         printf("%d \n", i);
     }
     return 0;
 }


//Reverse for loop. Print n to 1.

  #include <stdio.h>

 int main()
 {
    int i, start;

    printf("Enter starting value: ");
    scanf("%d", &start);

    for(i=start; i>=1; i--)
     {
        printf("%d\n", i);
     }

     return 0;
 }

//Take a number as input and print its table  5 * 1 = 5 5 * 2 = 10 ... up to 10 term

 #include <stdio.h>
 int main() {
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
  printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
 }


//Sum up to n terms.

 #include <stdio.h>
 int main() {
     int n, i, sum = 0;

     printf("Enter a positive integer: ");
     scanf("%d", &n);

     for (i = 1; i <= n; ++i) {
         sum += i;
     }

     printf("Sum = %d", sum);
     return 0;
 }


//Factorial of a number

  #include<stdio.h>

 int main(){

     int x=1,fact=1,n;

     printf("Enter a number to find factorial: ");

     scanf("%d",&n);

     while(x<=n){

         fact=fact*x;

         x++;

     } 

     printf("Factorial of %d is: %d",n,fact);

     return 0;

 }


// Print all the numbers which are either divisible by 3 or 5 in a range

 #include<stdio.h>
 int main(){
   int i, num;
   printf("Enter the last number: ");
   scanf("%d", &num);
  
   printf("Numbers Divisible by 3 and 5 Between 0 to %d are: \n", num);
   for (i = 1; i <= num; i++){
     if (i % 3 == 0 && i % 5 == 0){
      printf("%d ", i);
      
      return 0;
     }
   }
   }


//Print all the factors of a number.

#include <stdio.h>

int main()
{
    int i, num;

    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    printf("All factors of %d are: \n", num);

    for(i=1; i<=num; i++)
    {
     
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }

    return 0;
}


//Print the sum of all factors of a number, 50 - 1 + 2 + 5 + 10 + 25 = 43

int main()
{

int n,sum=0;
printf("enter number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{ if(n%i==0){
sum=sum+i;}
}
printf("sum of factors=%d",sum);
return 0;
}


// Print the sum of all even & odd numbers seperately.

#include <stdio.h>
 
int main()
{
    int i, num, odd_sum = 0, even_sum = 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}


//Sum of digits of a number, 936 = 18

#include <stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num);
    
    while(num!=0)
    {
        sum += num % 10;
        
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

//Check if the number is Prime or not.

#include <stdio.h>
int main() 
{
    int n;        
    printf("Enter the number: ");
    scanf("%d",&n);    
    if(n == 1){
        printf("1 is neither prime nor composite.");
        return 0;
    }  
    int count = 0;         
    for(int i = 2; i < n; i++)  
    {
        if(n % i == 0)
            count++;
    }
    if(count == 0)           
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
    return 0;
}
//Accept a number and print its reverse

#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}


// Accept a number and check if it is a pallindromic number (If number and its reverse are equal)

#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;


    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
}
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}



 //Accept a number and check if it is a armstrong number (Sum of cube of all digits will be equal to origional number)
 
 #include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
     
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}

//Accept a number and check if it a perfect number or not.A number whose sum of factors(excluding number itself)  = Number 



#include <stdio.h>

int main()
{
    int i, num, sum = 0;

    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);

    for(i = 1; i <= num / 2; i++)
    {

        if(num%i == 0)
        {
            sum += i;
        }
    }

    if(sum == num && num > 0)
    {
        printf("%d is PERFECT NUMBER", num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER", num);
    }

    return 0;
}


//Accept a number and check if it is a strong number or not (Sum of factorial of each digit)

#include<stdio.h>

int main()
{
	 int number, original, rem, sum=0, fact, i;
	 printf("Enter number: ");
	 scanf("%d", &number);

	 original = number;
	 
	 while(number != 0)
	 {
		  rem = number%10;
		  fact = 1;
		  for(i=1; i<=rem; i++)
		  {
		   	fact = fact*i;
		  }
		  sum = sum + fact;
		  number = number/10;
	 } 
	 if(sum == original)
	 {
	  	printf("%d is STRONG.", original);
	 }
	 else
	 {
	  	printf("%d is NOT STRONG.", original);
     }
	 return(0);
}

//Accept a number and check if it is a Harshad number Harshad number is a number or an integer which is completely divisible by sum of  its digits



//Fibonacci series - 0, 1, 1, 2, 3, 5, 8, 13, 21...

#include <stdio.h>
int main() {

  int i, n;
  int t1 = 0, t2 = 1;

  int nextTerm = t1 + t2;
 printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);


  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}


//Accept array elements and reprint it

#include <stdio.h>    
     
int main()    
{    
    int arr[] = {1, 2, 3, 4, 5};     
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Elements of given array: \n");        
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
     
    return 0;    
}      


//Print array elements in reverse order

#include <stdio.h>    
     
int main()    
{ 
    int arr[] = {1, 2, 3, 4, 5};     
  
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    
    for (int i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}    

// Print positive and negative elements of an array

#include <stdio.h>
 
int countPositiveNumbers(int* arr, int n)
{
 int pos_count = 0;
 int i;
 for (i = 0; i < n; i++) {
  if (arr[i] > 0)
   pos_count++;
 }
 return pos_count;
}

int countNegativeNumbers(int* arr, int n)
{
 int neg_count = 0;
 int i;
 for (i = 0; i < n; i++) {
  if (arr[i] < 0)
   neg_count++;
 }
 return neg_count;
}
 
void printArray(int* arr, int n)
{
 int i;
 
 printf("Array: ");
 for (i = 0; i < n; i++) {
  printf("%d ", arr[i]);
 }
 printf("\n");
}

int main()
{
 int arr[] = { 2, -1, 5, 6, 0, -3 };
 int n;
 n = sizeof(arr) / sizeof(arr[0]);
 
 printArray(arr, n);
 
 printf("Count of Positive elements = %d\n",
  countPositiveNumbers(arr, n));
 printf("Count of Negative elements = %d\n",
  countNegativeNumbers(arr, n));
 
 return 0;
}

//Print array in ascending or descending order

#include <stdio.h>
  
int main()
{
  
    int a[5] = { 45, 22, 100, 66, 37 };
    int n = 5, i, j, t = 0;

    for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {
 
            if (a[i] < a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

// Accept size n from user and create a n size array then take n inputs into the and finally Print the sum of all elements in the array in the following manner

#include <stdio.h>

int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int sum, loop;

   sum = 0;
   
   for(loop = 9; loop >= 0; loop--) {
      sum = sum + array[loop];      
   }

   printf("Sum of array is %d.", sum);   

   return 0;
}

// Mean of array elements.

#include <stdio.h>

int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int sum, loop;
   float avg;

   sum = avg = 0;
   
   for(loop = 0; loop < 10; loop++) {
      sum = sum + array[loop];
   }
   
   avg = (float)sum / loop;
   printf("Average of array values is %.2f", avg);   
   
   return 0;
}

// left rotation
#include <stdio.h>    
     
int main()    
{        
    int arr[] = {1, 2, 3, 4, 5};     
 
    int length = sizeof(arr)/sizeof(arr[0]);    
    
    int n = 3;    
  
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
 
    for(int i = 0; i < n; i++){    
        int j, first;    
   
        first = arr[0];    
        
        for(j = 0; j < length-1; j++){    
  
            arr[j] = arr[j+1];    
        }    

        arr[j] = first;    
    }    
        
    printf("\n");    
        
     
    printf("Array after left rotation: \n");    
    for(int i = 0; i < length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    

//pallindromic array

#include <stdio.h>
int pallindrome(int arr[], int n) {
   int i, j, flag = 0;
   for(i = 0, j=n-1; i< n/2, j>=n/2; i++, j--) {
      if(arr[i]!=arr[j]) {
         flag = 1;
         break;
      }
   }
   if (flag == 1)
   return 0;
   else
   return 1;
}
int main(int argc, char const *argv[]) {
   int arr[] = {1, 0, 2, 3, 2, 2, 1};
   int n = sizeof(arr)/sizeof(arr[0]);
   if(pallindrome(arr, n)) {
      printf("Array is pallindrome");
   }
   else
      printf("Array is not pallindrome");
   return 0;
}

//occurance in array

#include<stdio.h>
int main()
int counts[10];

for (int x = 0; x <= 10; x++){
    int counter = 0;
    for (int j = 0; j < ARRAY_SIZE; j++){
        if (x == myArray[j]){
            counts[x] == counter++;
        }
    }

    cout << "Number: " << x << "Number of Occurances: " << counts[counter]<< "\n";
}
