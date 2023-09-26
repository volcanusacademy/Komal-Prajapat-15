// 8) Program to check whether entered character is in lowercase or not and if yes, then convert it into uppercase
void main(){
    char ch;
    
        printf("enter any character ch :- " );
        scanf("%c",&ch);
        if(ch>=97 && ch<=122 ){
            ch = ch-32;
        printf("character is in uppercase %c" ,ch);
        }
        else{
            printf("character is not in lowercase");

        }
            
}