  int copy = n;
    int cnt = 0;

    while (copy)
    {
        int ld = copy % 10;
        copy /= 10;

        if (n % ld == 0)
        {
            cnt++;
        }
    }

    return cnt;