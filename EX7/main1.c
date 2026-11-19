#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int is_duplicate(int arr[], int count, int num) {
    for (int i = 0; i < count; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}

void sort_first_six(int arr[]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    srand((unsigned int)time(NULL));

    printf("歡迎光臨長庚樂透彩購買機台\n");
    printf("請問您要買幾組樂透彩:");
    if (scanf("%d", &n) != 1 || n < 1 || n > 5) {
        printf("輸入錯誤，請輸入 1 到 5 之間的數字。\n");
        return 1;
    }

    FILE *fp = fopen("lotto.txt", "w");
    if (fp == NULL) {
        printf("無法開啟 lotto.txt 檔案！\n");
        return 1;
    }

    time_t now = time(NULL);
    char *time_str = ctime(&now);
    time_str[strcspn(time_str, "\n")] = '\0';

    fprintf(fp, "========= lotto649 =========\n");
    fprintf(fp, "= %s =\n", time_str);

    for (int i = 1; i <= 5; i++) {
        fprintf(fp, "[%d]: ", i);
        if (i <= n) {
            int nums[7];
            for (int j = 0; j < 7; j++) {
                int r;
                do {
                    r = (rand() % 69) + 1; 
                } while (is_duplicate(nums, j, r));
                nums[j] = r;
            }
            sort_first_six(nums);

            for (int j = 0; j < 7; j++) {
                fprintf(fp, "%02d%s", nums[j], (j == 6) ? "" : " ");
            }
            fprintf(fp, "\n");
        } else {
            fprintf(fp, "-- -- -- -- -- -- --\n");
        }
    }

    fprintf(fp, "========= csie@CGU =========\n");
    fclose(fp);

    printf("以為您購買的%d組樂透組合輸出至 lotto.txt\n", n);
    return 0;
}
