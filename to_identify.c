#include <stdio.h>

int main()
{
    char ch;
    char choice = 'y';
    do{
    printf("Enter any character: ");
    scanf("%c", &ch);


    /*to find vowel or consonant*/
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is Consonant.", ch);
    }else {
        printf("'%c' is not an alphabet.", ch);
    }
    /*finding vowel or consonant ends here*/


    /*to find a numeric charecter*/
    if (ch>=48 && ch<=57)
        printf("numeric charecter %d",ch);
    else
        printf("not a numeric chareter %d",ch);
    /*finding a numeric charecter ends here*/

    printf("want to continue? ");
    scanf("%c",&choice);
    }while(choice ==  'y');
    
    return 0;
    
}