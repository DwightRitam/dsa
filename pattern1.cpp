#include <iostream>

using namespace std;

int main()
{
    int count, i,k, j = 1;
    cout << "enter count value ";
    cin >> count;
    // cout<<"i is " << i <<"j is" << j <<endl;
    // for ( i = 1; i <= count; i++)
    // {
    //     /* code */
    //     // cout <<i <<"\n";
    //     for ( j = count; j >0; j--)
    //     {
    //         /* code */
    //          cout <<j ;

    //     }
    //     cout << endl;
    // pattern is 4321
    // 4321
    // 4321
    // 4321

    // }
   

    // for (i = 1; i <= count; i++)
    // {

    //     k = j;

    //     for (j = k; j < count + k; j++)
    //     {
    //         /* code */
    //         cout << j << " ";
    //     }

    //     cout << endl;

    //     // pattern is 4321
    //     // 123
    //     // 456
    //     // 789
    // }

    // for (i = 1; i <= count; i++)
    // {

    //     for(j=1;j<=i; j++)
    //     {
    //         cout<< i ;
    //     }
    //     cout <<endl;
    //     // pattern is
    //     // 1
    //     // 22
    //     // 333
    //     // 4444   
    // }

    
//     for (i = 1; i <= count; i++)
//     {

//         k=j;
//         for(j=k;j<i+k; j++)
//         {
//             cout<< j <<" ";
//         }

//         cout <<endl;
// //       pattern is 
// //       1 
// // 2 3
// // 4 5 6
// // 7 8 9 10
//     }


//     for (i = 1; i <= count; i++)
//     {

//        for(j=i;j>0;j--)
//        {
//         cout<<j;
//        }
//        cout << endl;
//     pattern is

//     1
// 21
// 321
// 4321
//     }


    // for (i = 0; i <= count; i++)
    // {
    //     char ch='A'+i;
    //     for (j = 0; j < count; j++)
    //     //    ch='A'+j;
    //     {
    //         /* code */
    //         cout << ch<< " ";
    //     }
    //     cout << endl;
    //     // pattern is
    //     // A A A A 
    //     // B B B B
    //     // C C C C
    //     // D D D D
    //     // E E E E
    // }

    //  for (i = 0; i <= count; i++)
    // {
    //     // char ch='A'+i;
    //     // char ch='A';
    //     for (j = 0; j < count; j++)
        
    //     {
    //         /* code */
            
    //    char ch='A'+j;
    //         // ch=j+1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    //     // pattern is
    //     // A B C D 
    //     // A B C D
    //     // A B C D
    //     // A B C D
    //     // A B C D
    // }


//     for(i=0;i<count;i++)
//    {
       
//         k = j;

//         for (j = k; j < count + k; j++)
//         {
//             /* code */
//             char ch='A'+j;
//             cout << ch << " ";
//         }

//         cout << endl;

//         // pattern is 4321
//         // A B C D 
//         // E F G H
//         // I J K L
//         // M N O P
//     }

//    for(i=0;i<count;i++)
//    {
       
//         k = i;

//         for (j = k; j < count + k; j++)
//         {
//             /* code */
//             char ch='A'+j;
//             cout << ch << " ";
//         }

//         cout << endl;

//         // pattern is 4321
//         // A B C 
//         // B C D
//         // C D E
//     }

    
//    for(i=0;i<count;i++)
//    {
//       char ch;
//      for(j=0;j<=i;j++)
//      {
//         ch='A'+i;
//         cout << ch;
//      }
//      cout << endl;
//      pattern is
//     A
//     BB
//     CCC
//     }

// for ( i = 0; i < count; i++)
   
// {
//     // k=i+j-1;
//     k=j;
//    for(j=k; j <=i+k; j++)
//    {
//     char ch='A'+j;
//     cout << ch;
//    }
//    cout << endl;
//    pattern is 
//     A
//     BC
//     DEF
//     GHIJ

// }

// for(i=0;i<count;i++)
// {
//     k=i;
//     for(j=k;j<= k+i;j++)

// {
//     char ch='A'+j;
// cout<< ch ;
// }
// cout <<endl;
// pattern is

// A
// BC
// CDE
// DEFG
// }

// for ( i = 0; i <=count; i++)
// {
//    
//    for(j=count-i;j<=count;j++)
//    {
//     // char ch='A'+j;
//     cout <<j;
//    }
//    cout << endl;
//    pattern is
//     4
//     34
//     234
//     1234
//     01234
// }

// for ( i = 0; i <=count; i++)
// {
//     k=count;
//    for(j=count-i;j<=count;j++)
//    {
//     char ch='A'+j;
//     cout <<ch;
//    }
//    cout << endl;
   
//    pattern is
//    D
    // CD
    // BCD
    // ABCD
// }

// for(i=0;i<count;i++)
// {
//     for(j=count-i;j>0;j--)

//     {
//         cout<<" ";
//     }
//     for(k=0;k<=i;k++)

//     {
//         cout<<"*";
//     }

//     cout << endl;
//     pattern is 
//     *
//    **
//   ***
//  ****

// }

// for(i=0;i<count;i++)
// {
//     for(j=count-i;j>0;j--)

//     {
//         cout<<"*";
//     }
   



//     cout << endl;
// //     pattern is 
// //    ****
// // ***
// // **
// // *

// }


// for(i=0;i<count;i++)
// {
//      for(k=0;k<i;k++)

//     {
//         cout<<" ";
//     }
//     for(j=count-i;j>0;j--)

//     {
//         cout<<"*";
//     }
//     cout << endl;
//     pattern is 
//     ****
//      ***
//       **
//        *

// }

// for(i=1;i<=count;i++)
// {
//      for(k=0;k<=i;k++)

//     {
//         cout<<" ";
//     }
    
//     for(j=count-i;j>=0;j--)

//     {
//         cout<<i;
//     }
    
//     cout << endl;

//     pattern is 
//     1111
//      222
//       33
//        4
// }

// for(i=1;i<=count;i++)
// {

//     for(j=count-i;j>=0;j--)

//     {
//         cout<<" ";
//     }
//       for(k=0;k<i;k++)

//     {
//         cout<<i;
//     }
    
//     cout << endl;
//     pattern is 
//         1
//        22
//       333
//      4444
//     }

// for(i=0;i<count;i++)
// {
//     for(k=1;k<=i;k++)

//     {
//         cout<<" ";
//     }

//     for(j=1+i;j<=count;j++)

//     {
//         cout<<j;
//     }
      
    
//     cout << endl;
//     pattern is 
//     1234
//      234
//       34
//        4

//     }

// int space;
// j=1;
// for(i=1;i<=count;i++)
// {

// for(space=count-i;space>=0;space--)

//     {
//         cout<<" ";
//     }

//     k=j;


//     for(j=k;j<i+k;j++)

//     {
//         cout<<j;
//     }
   
    
//     cout << endl;

//     pattern is 
//         1
//        23
//       456
//     78910
    
//     }

// for ( i = 1; i <= count; i++)
// {
//    for(j=count-i;j>0;j--)
//    {
//     cout<<" ";
//    }

//    for(k=1;k<=i;k++)
   
//    {
//     cout<< "*";
//    }
  
//    for(j=1;j< i;j++)
//    {
//     cout<<"*";

//     pattern is 
//      *
//     ***
//    *****
//   *******
//    }

   


//    cout<<endl;

   

// }








// for ( i = 1; i <= count; i++)
// {
//    for(j=count-i;j>0;j--)
//    {
//     cout<<" ";
//    }

//    for(k=1;k<=i;k++)
   
//    {
//     cout<< k;
//    }
  
//    for(j=i-1;j> 0;j--)
//    {
//     cout<<j;
//    }

   


//    cout<<endl;
// //    pattern is 
// //    1
// //   121
// //  12321
// // 1234321
   

// }


int start,star;

for(i=0;i<5;i++)
{
    for(j=1;j<=count-i;j++)
    {
        cout << j;
    }
    for(k=count-i;k<count;k++)
    {
        cout << "*";
    }

    for(star=1;star-1<i;star++)
    {
        cout << "*";
    }
    for(start=count-i;start>0;start--)
    {

         cout << start;

    }



    cout << endl;

    // pattern is 
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1
}


}