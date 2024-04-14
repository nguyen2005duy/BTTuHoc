#include <iostream>
using namespace std;
string ls(int n)
{
    switch (n)
    {
        case 1:
        return "one";
        case 2:
        return "two";
        case 3:
        return "three";
        case 4:
        return "four";
        case 5:
        return "five";
        case 6:
        return "six";
        case 7:
        return "seven";
        case 8:
        return "eight";
        case 9:
        return "nine";
    }
    return "";
}
string ls1(int a,int b)
{
    string s = "";
    switch (a)
    {
        case 1:
        switch (b)
        {
         case 0:
          s = "ten";
          break;
         case 1:
         s = "eleven";
         break;
         case 2:
         s = "twelve";
         break;
         case 3:
         s = "thirteen";
         break;
         case 4:
         s = "fourteen";
         break;
         case 5:
         s = "fifteen";
         break;
         case 6:
         s = "sixteen";
         break;
         case 7:
         s = "seventeen";
         break;
         case 8:
         s = "eighteen";
         case 9:
         s = "nineteen";
         break;
        }
        break;
        case 2:
         s = "twenty ";
         s+= ls(b);
         break;
        case 3:
        s = "thirty ";
         s+= ls(b);
         break;
        case 4:
        s =  "forty ";
        s+=ls(b);
        break;
        case 5:
        s =  "fifty ";
        s+=ls(b);
        break;
        case 6:
        s =  "sixty " ;
        s+=ls(b);
        break;
        case 7:
       s =  "seventy ";
        s+=ls(b);
        break;
        case 8:
    s =  "eighty " ;
        s+=ls(b);
        break;
        case 9:
        s =  "ninety ";
        s+=ls(b);
        break;
    }
   return s;
}
int main ()
{
    long long num;
    cin>>num;
    string read;
    if (num<0)
    {
         read="negatvie";
         num=-num;
    }
    else if (num==0)
    {
        read = "zero";
    }
    else {read = "";}
   
    int count = 0;
    int count1 = 0;
    int count2 = 0;
     while (num>=1000000)
     {
        while (num>=100000000)
        {
            num-=100000000;
            count +=1;
        }
        while (num>=10000000)
        {
            num-=10000000;
            count1+=1;
        }
        while (num>=1000000)
        {
            num-=1000000;
            count2+=1;
        }
        if(count!=0)
        {
            read = read+ ls(count)+" hundred ";
        }
        if (count1!=0)
        {
            read= read + ls1(count1,count2)+ " ";
        }
        else if (count2!=0)
        {
            read = read + ls(count2) + " ";
        }
         
         read = read + "million" + " ";
     }
  
     count = 0;
    count1 = 0;
    count2 = 0;
     while (num>=1000)
     {
        while (num>=100000)
        {
            num-=100000;
            count +=1;
        }
        while (num>=10000)
        {
            num-=10000;
            count1+=1;
        }
        while (num>=1000)
        {
            num-=1000;
            count2+=1;
        }
        if(count!=0)
        {
            read =read+ls(count)+" hundred ";
        }
        if (count1!=0)
        {
            read = read + ls1(count1,count2)+ " ";
        }
        else if (count2!=0)
        {
            read = read + ls(count2) + " ";
        }
         read = read + "thousand" + " ";
     }
    count = 0;
    count1 = 0;
     count2 = 0;
          while (num>=1)
          {
        while (num>=100)
        {
            num-=100;
            count +=1;
        }
        while (num>=10)
        {
            num-=10;
            count1+=1;
        }
        while (num>=1)
        {
            num-=1;
            count2+=1;
        }
        if(count!=0)
        {
            read =read+ls(count)+" hundred ";
        }
        if (count1!=0)
        {
            read = read + ls1(count1,count2)+ " ";
        }
        else if (count2!=0)
        {
            read = read + ls(count2) + " ";
        }
          }
 
   cout<<read;
}

//could use the "/" in number instead of count;