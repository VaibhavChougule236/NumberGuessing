#include<stdio.h>
int  main() {
    int myNum,userNum;
    myNum=5;

    printf("geuss the number ..........\n\n");
    while(1) {
    printf("enter a number:");
    scanf("%d",&userNum);
    
    
if(userNum == myNum) {
    printf("\n -You got it., well done\n");
    break;

}
else 
if(userNum<myNum){
    printf("%d is less than %d . try agai...\n\n", userNum,myNum);
}
else {
    printf("%d is greater than %d. try again..\n\n.", userNum,myNum);
}
  }
return 0;
}