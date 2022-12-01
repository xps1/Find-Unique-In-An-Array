// we use xor operator in this solution 
// x ^ 0 = x
// x ^ x = 0
int findUnique(int *arr, int size)
{
    //Write your code here
    int result;
    for(int i=0;i<size;i++){
        result ^=arr[i];
    }
    return result;
}