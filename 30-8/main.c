#include <stdio.h>
#include <stdlib.h>
//30-8
float geoMetricMean(int start, int end);
int main()
{
    printf("Kq ne: %f", geoMetricMean(6,2));
    return 0;
}
float geoMetricMean(int start, int end){
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int mul = 1, count =0;
    for (int i = start; i <= end ;i++){
        mul *= i;
        count++;
    }
    return pow(mul, 1.0/count);
}
