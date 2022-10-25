#include <stdio.h>

int minarry(int arr[],int sizearr)
{

    int min = arr[0];
    for (int i = 0 ; i < sizearr ; i++)
    {
        if(arr[i] > min)         // if you chage > sign to < yo can find min element
        {
            min = arr[i];
            
        }
    }

    return min;

}


int main()
{
    int newarray[] = {4,7,2,3,2,4,6,445534673};
    int sizearr = sizeof(newarray) / sizeof(newarray[0]);
    printf("%d-%d", minarry(newarray,sizearr),sizearr);

    return 0;

}
