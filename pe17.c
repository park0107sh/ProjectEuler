#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int m(long long int a,int b){
    a=a/(pow(10,b-1));
    return a%10;
}
void no1(int a){
    switch(a){
        case 1:printf("One ");break;
        case 2:printf("Two ");break;
        case 3:printf("Three ");break;
        case 4:printf("Four ");break;
        case 5:printf("Five ");break;
        case 6:printf("Six ");break;
        case 7:printf("Seven ");break;
        case 8:printf("Eight ");break;
        case 9:printf("Nine ");break;
    }
}
void no2(int a,int b){
    int aaa=0;
    switch(a){
        case 1:  switch(b){
                    case 0:printf("Ten ");break;
                    case 1:printf("Eleven ");break;
                    case 2:printf("Twelve ");break;
                    case 3:printf("Thirteen ");break;
                    case 4:printf("Fourteen ");break;
                    case 5:printf("Fifteen ");break;
                    case 6:printf("Sixteen ");break;
                    case 7:printf("Seventeen ");break;
                    case 8:printf("Eighteen ");break;
                    case 9:printf("Nineteen ");break;
                }aaa=1;break;
        case 2:printf("Twenty ");break;
        case 3:printf("Thirty ");break;
        case 4:printf("Forty ");break;
        case 5:printf("Fifty ");break;
        case 6:printf("Sixty ");break;
        case 7:printf("Seventy ");break;
        case 8:printf("Eighty ");break;
        case 9:printf("Ninety ");break;
    }
    if(aaa==0)
        no1(b);
}
int main() {
    int t;
    long long int a;
    scanf("%d",&t);
    while(t-->0){
        scanf("%lld",&a);
        if(a==0)
            printf("Zero\n");
        else{
            no1(m(a,15));
            if(m(a,15)!=0)printf("Hundred ");
            no2(m(a,14),m(a,13));
            if(m(a,15)+m(a,14)+m(a,13)!=0)printf("Trillion ");
            
            
            no1(m(a,12));
            if(m(a,12)!=0)printf("Hundred ");
            no2(m(a,11),m(a,10));
            if(m(a,12)+m(a,11)+m(a,10)!=0)printf("Billian ");
        
        
            no1(m(a,9));
            if(m(a,9)!=0)printf("Hundred ");
            no2(m(a,8),m(a,7));
            if(m(a,9)+m(a,8)+m(a,7)!=0)printf("Millian ");
        
                
            no1(m(a,6));
            if(m(a,6)!=0)printf("Hundred ");
            no2(m(a,5),m(a,4));
            if(m(a,6)+m(a,5)+m(a,4)!=0)printf("Thousand ");
        
        
            no1(m(a,3));
            if(m(a,3)!=0)printf("Hundred ");
            no2(m(a,2),m(a,1));
            printf("\n");
        }
    }
    return 0;
}