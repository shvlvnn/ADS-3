// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int x = 0, y = size - 1, count = 0;
    int z, f;
    while (x <= y) {
        z = (y + x) / 2;
        if (arr[z] == value) {
            count++;
            f = z;
            break;
        }
    if (value < arr[z])
        y = z - 1;
    else
        x = z + 1;
    }
    if (f >= 0) {
        for (int a = 0; a < f; a++) {
            if (arr[a] == value)
        count++;
    }
    for (int b = size - 1; b > f; b--) {
        if (arr[b] == value)
        count++;
    }
    }
  if (count > 0)
    return count;
  else
    return 0;
}
