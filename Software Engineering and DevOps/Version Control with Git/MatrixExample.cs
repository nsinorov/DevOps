
class Program
{
    static void Main()
    {
        // Define a 3x3 matrix
        int[,] matrix = new int[3, 3]
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        // Print the matrix
        Console.WriteLine("Matrix:");
        for (int i = 0; i < matrix.GetLength(0); i++) // rows
        {
            for (int j = 0; j < matrix.GetLength(1); j++) // columns
            {
                Console.Write(matrix[i, j] + "\t");
            }
            Console.WriteLine();
        }

        // Example: Accessing a specific element
        int value = matrix[1, 2]; // row 1, column 2 (zero-based)
        Console.WriteLine($"\nElement at row 2, column 3: {value}");
    }
}
