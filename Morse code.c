#include<stdio.h>
#include<string.h>

void main()
{
 char *alphabet[]={ 
        ".-",        // A
        "-...",      // B
        "-.-." ,     // C
        "-.." ,     // D
        "." ,       // E
        "..-." ,    // F
        "--." ,     // G
        "...." ,     // H
        ".." ,      // I
        ".---" ,     // J
        "-.-" ,      // K
        ".-.." ,    // L
        "--" ,       // M
        "-." ,      // N
        "---" ,      // O
        ".--." ,     // P
        "--.-" ,    // Q
        ".-." ,     // R
        "..." ,     // S
        "-" ,       // T
        "..-" ,     // U
        "...-" ,    // V
        ".--" ,     // W
        "-..-" ,    // X
        "-.--" ,    // Y
        "--.."      // Z 
 };
 char *number[]={
         "-----", //0
         ".----", //1
         "..---", //2
         "...--", //3
         "....-", //4
         ".....", //5
         "-....", //6
         "--...", //7
         "---..", //8
         "----.", //9
    };
 
 int i;
 char str[100],str1[100];
 puts("Enter morse code\n");
 gets(str); 
 i=0;
  while(str[i]!='\0')
  {
 if(str[i]!=' '&&(!isdigit(str[i])))  
 {
     printf("%s ",alphabet[toupper(str[i])-65]);  
 } 
    if(str[i]==' ')
    {
    printf(" ");
    }
    if(isdigit(str[i])&&str[i]!=' ')
    {
      printf("%s ",number[str[i]-48]);    
    }
    
   i++;
  }
 }
