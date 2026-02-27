/******************************************************************************
 * Họ và tên: [Lê Minh Tường]
 * MSSV :      [PS37909]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH LƯU THÔNG TIN SINH VIÊN
//  Input: Nhập vào từ bàn phím các thông tin sinh viên như: mã số sinh viên, tên sinh
//  viên, ngành học, điểm trung bình.
//  Output: Xuất ra thông tin của tất cả sinh viên trên màn hình

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

    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nSinh vien thu %d\n", i + 1);
        printf("MSSV: %s\n", ds[i].mssv);
        printf("Ten: %s\n", ds[i].ten);
        printf("Nganh: %s\n", ds[i].nganh);
        printf("Diem TB: %.2f\n", ds[i].diemTB);
    }

    return 0;
}
