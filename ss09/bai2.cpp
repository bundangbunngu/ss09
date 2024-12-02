#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    int index, newValue;

    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can sua (tu 0 den %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    arr[index] = newValue;

    printf("Mang sau khi sua: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

