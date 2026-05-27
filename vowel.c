#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int count =0;
    int len =strlen(str);
    for(int i=0; i<len; i++){
        if(str[i] =='A'||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U'|| str[i] =='a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u')
            count++;
    }
    printf("Number of vowels: %d\n", count);
    return 0;
}