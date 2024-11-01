#include <stdio.h>
#include <math.h>

int main() {
    int D, H, W;
    scanf("%d %d %d", &D, &H, &W);

    double ratio = sqrt((double)(D * D) / (H * H + W * W));

    int actual_height = (int)(H * ratio);
    int actual_width = (int)(W * ratio);

    printf("%d %d\n", actual_height, actual_width);

    return 0;
}