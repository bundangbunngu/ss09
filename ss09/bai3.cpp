#include <stdio.h>

int main() {
    int arr[100];  
    int n, currentLength = 0, deleteIndex;

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

    printf("Nhap vi tri can xoa (tu 0 den %d): ", currentLength - 1);
    scanf("%d", &deleteIndex);

    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;  // Gi?m s? lý?ng ph?n t? hi?n có

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

