  for (int i = 0; i < row; i++)
    {
        int j;
        for (j = 0; j < col - 1; j++)
        {
            if (arr[i][j] >= arr[i][j + 1])
            {
                cout << "run";
                break;
            }
        }

        if (j == col - 1)
        {
            count++;
        }
    }