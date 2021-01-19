
#include <stdio.h> 
#pragma pack(1)
// Alignment requirements 
// (typical 32 bit machine) 
  
// char         1 byte 
// short int    2 bytes 
// int          4 bytes 
// double       8 bytes 
  
// structure A 
typedef struct structa_tag 
{ 
   char        c; //1
   short int   s; //2
} structa_t; 
  
// structure B 
typedef struct structb_tag 
{ 
   short int   s; //2
   char        c; //1
   int         i; //4
} structb_t; 
  
// structure C 
typedef struct structc_tag 
{ 
   char        c; //1
   double      d; //8
   int         s; //4
} structc_t; 
  
// structure D 
typedef struct structd_tag 
{ 
   int         e; //4
   double      d; //8
   int         s; //4
   char        c; //1
} structd_t; 
  
int main() 
{ 
   printf("sizeof(structa_t) = %d\n", sizeof(structa_t)); 
   printf("sizeof(structb_t) = %d\n", sizeof(structb_t)); 
   printf("sizeof(structc_t) = %d\n", sizeof(structc_t)); 
   printf("sizeof(structd_t) = %d\n", sizeof(structd_t)); 
  
   return 0; 
} 

/*
              OUTPUT

    sizeof(structa_t) = 3
    sizeof(structb_t) = 7
    sizeof(structc_t) = 13
    sizeof(structd_t) = 17
      
 */       
