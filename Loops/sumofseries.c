// 1 - 2 + 3 - 4 + 5 - 6 +.....n

#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);
    int s=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            s=s-i;
        }
        else{
            s=s+i;
        }
    }
    printf("The sum is: %d",s);
    return 0;
}
