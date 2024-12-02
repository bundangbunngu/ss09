#include <stdio.h>

int main() {
    int arr[100];  
    int n, currentLength = 0, addValue, addIndex;


    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    if (n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        currentLength++;
    }

    printf("Nhap gia tri muon them: ");
    scanf("%d", &addValue);
    printf("Nhap vi tri muon them (tu 0 den %d): ", currentLength);
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex > 100) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    if (addIndex >= currentLength) {
        arr[addIndex] = addValue;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }

    printf("Mang sau khi them: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

