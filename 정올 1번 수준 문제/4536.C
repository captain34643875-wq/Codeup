#include <stdio.h>

int main() {
    int a[10],b,c;
    for(int i=0;i<10;i++){
        scanf("%d",&b);
        a[i]=b;
    }
    for(int i=0;i<10;i++) {
        int sum = 0;
        sum += a[i];
        int avg=sum/10;
        //최빈값 구하기
        int max_count = 0, mode = a[0];
        for (int j = 0; j < 10; j++) {
            int count = 0;
            for (int k = 0; k < 10; k++) {
                if (a[k] == a[j]) {
                    count++;
                }
            }
            if (count > max_count) {
                max_count = count;
                mode = a[j];
            }
        }
        printf("%d\n", avg);
        printf("%d\n", mode);
        
    }
    
}