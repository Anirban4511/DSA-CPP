#include <iostream>
#include <cstring>
using namespace std;
int main()
{
     /*char arr[] = "GeeksforGeeks";
     cout << "The size of character array is - " << sizeof(arr);
     cout << "The length of the array - " << strlen(arr);*/

     char s1[]="Geeks";
     char s2[]="for";
     char s3[]=strcat(s1,s2);

}

/* Here understand that the size and the length are two different things. Internally compiler 
store the string(character array) including the null character or '\0'. But when u fetch it's 
length the strlen() count till the last element excludnig '\0'. If u want to get the total length
 including null character which is referred to it's size() then u will get the real length including the '\0' null terminator.*/