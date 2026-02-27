/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: TÌM KIẾM SINH VIÊN

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

struct SinhVien
{
    char mssv[50];
    char ten[100];
    char nganh[100];
    float diemTB;
};

int main()
{
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    struct SinhVien ds[n];

    for (int i = 0; i < n; i++)
    {
        printf("Sinh vien thu %d\n", i + 1);

        printf("Nhap MSSV: ");
        fgets(ds[i].mssv, sizeof(ds[i].mssv), stdin);
        ds[i].mssv[strcspn(ds[i].mssv, "\n")] = 0;

        printf("Nhap ten: ");
        fgets(ds[i].ten, sizeof(ds[i].ten), stdin);
        ds[i].ten[strcspn(ds[i].ten, "\n")] = 0;

        printf("Nhap nganh: ");
        fgets(ds[i].nganh, sizeof(ds[i].nganh), stdin);
        ds[i].nganh[strcspn(ds[i].nganh, "\n")] = 0;

        printf("Nhap diem trung binh: ");
        scanf("%f", &ds[i].diemTB);
        getchar();
    }

    char timMSSV[50];
    printf("\nNhap MSSV can tim: ");
    fgets(timMSSV, sizeof(timMSSV), stdin);
    timMSSV[strcspn(timMSSV, "\n")] = 0;

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(ds[i].mssv, timMSSV) == 0)
        {
            printf("\nThong tin sinh vien tim thay:\n");
            printf("MSSV: %s\n", ds[i].mssv);
            printf("Ten: %s\n", ds[i].ten);
            printf("Nganh: %s\n", ds[i].nganh);
            printf("Diem TB: %.2f\n", ds[i].diemTB);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Khong tim thay sinh vien\n");
    }

    return 0;
}