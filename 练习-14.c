/*
#include <stdio.h>
 
int main()
{
    int i, n;
    float arr[100];
 
    printf("输入元素个数（0~100）: ");
    scanf("%d", &n);
    printf("\n");
 
    // 接收用户输入
    for(i = 0; i < n; ++i)
    {
       printf("输入数字 %d: ", i+1);
       scanf("%f", &arr[i]);
    }
 
    // 循环，并将最大元素存储到 arr[0]
    for(i = 1; i < n; ++i)
    {
       // 如果要查找最小值可以将 < 换成 > 
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("最大元素为 = %.2f", arr[0]);
 
    return 0;
}*/
/*
#include <stdio.h>
 
int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int loop, largest;
 
   largest = array[0];
   
   for(loop = 1; loop < 10; loop++) {
      if( largest < array[loop] ) 
         largest = array[loop];
   }
   
   printf("最大元素为 %d", largest);   
   
   return 0;
}*/
/*
#include <stdio.h>
 
int main() {
   int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   int even[10], odd[10];
   int loop, e, d;
   
   e = d = 0;
   
   for(loop = 0; loop < 10; loop++) {
      if(array[loop]%2 == 0) {
         even[e] = array[loop];
         e++;
      }else {
         odd[d] = array[loop];
         d++;
      }
   }
      
   printf(" 原始数组 -> ");
   
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);
       
   printf("\n 偶数 -> ");
   for(loop = 0; loop < e; loop++)
      printf(" %d", even[loop]);   
 
   printf("\n 奇数 -> ");
   for(loop = 0; loop < d; loop++)
      printf(" %d", odd[loop]);   
   
   return 0;
}*/
/*
#include <stdio.h>
 
int main() {
   int array[10];
   int even[5] = {0, 2, 4, 6, 8};
   int odd[5]  = {1, 3, 5, 7, 9};
   
   int loop, index, e_len, o_len;
   
   e_len = o_len = 5;
   
   index = 0;
 
   for(loop = 0; loop < e_len; loop++) {
      array[index] = even[loop];
      index++;
   }
 
   for(loop = 0; loop < o_len; loop++) {
      array[index] = odd[loop];
      index++;
   }
 
   printf("\n偶数 -> ");
   
   for(loop = 0; loop < e_len; loop++)
      printf(" %d", even[loop]);
   printf("\n奇数  -> ");
   
   for(loop = 0; loop < o_len; loop++)
      printf(" %d", odd[loop]);
 
   printf("\n合并后 -> ");
   
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);
   
   return 0;
}*/
