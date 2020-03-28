#include <stdio.h>
#include <stdlib.h>
#define bit_mask  1
#define bit_num   0
#define set_bit(num_1,bit_num)  num_1|=(0x01<<bit_num)
#define increment_num(X_num,bit_num)   X_num|=(0x01<<bit_num)
//void binaryfunction(int num);

int main()
{
    int num_1=60;
    int num_2=40;
    //increment
    printf("%d",increment_num(num_2,bit_num));

    //1's complement
    //clear_bit
   /* num_1&=~(0x01<<bit_num);
    binaryfunction(num_1);
    printf("\n");
    set_bit(num_2,bit_num);
    binaryfunction(num_2);*/

    return 0;
}
/*void binaryfunction(int num){
    int index;
    int holder;

    for (index=8;index>=0;index--){
          holder=num>>index;
        if (holder & bit_mask){
        printf("1");}
        else{
        printf("0");}
    }


}*/
