#include <iostream>

int main()
{
    // always a 20x20 matrix
    const unsigned int size = 20;
    unsigned int matrix[size][size];

    // read from console
    for (unsigned int y = 0; y < size; y++)
        for (unsigned int x = 0; x < size; x++)
            std::cin >> matrix[x][y];

    unsigned int ans = 0;
    // walk through all cells of the matrix
    for (unsigned int y = 0; y < size; y++)
        for (unsigned int x = 0; x < size; x++)
        {
            // three more horizontal cells (right)
            if (x + 3 < size)
            {
                unsigned int current = matrix[x][y] * matrix[x+1][y] * matrix[x+2][y] * matrix[x+3][y];
                if (ans < current)
                    ans = current;
            }
            // three more vertical cells available (down)
            if (y + 3 < size)
            {
                unsigned int current = matrix[x][y] * matrix[x][y+1] * matrix[x][y+2] * matrix[x][y+3];
                if (ans < current)
                    ans = current;
            }
            // three more diagonal cells (right-down)
            if (x + 3 < size && y + 3 < size)
            {
                unsigned int current = matrix[x][y] * matrix[x+1][y+1] * matrix[x+2][y+2] * matrix[x+3][y+3];
                if (ans < current)
                    ans = current;
            }
            // three more diagonal cells (left-down)
            if (x + 3 < size && y >= 3)
            {
                unsigned int current = matrix[x][y] * matrix[x+1][y-1] * matrix[x+2][y-2] * matrix[x+3][y-3];
                if (ans < current)
                    ans = current;
            }
        }

    std::cout << ans << std::endl;
    return 0;
}
