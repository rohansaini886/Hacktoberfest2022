import java.util.*;

public class Rat_In_Maze {

    static List<String> list = new ArrayList<>();

    private static boolean isValid(int r, int c, boolean[][] visited, int[][] nums, int n) {
        if ((r >= 0 && r <= n - 1) && (c >= 0 && c <= n - 1) && visited[r][c] == false && nums[r][c] == 1) {
            return true;
        }
        return false;
    }

    static void solve(int nums[][], int r, int c, boolean visited[][], int n, String output) {
        if (r == n - 1 && c == n - 1) {
            list.add(output);
            return;
        }

        visited[r][c] = true;

        // down
        int row = r + 1;
        int col = c;
        if (isValid(row, col, visited, nums, n)) {
            output += 'D';
            solve(nums, row, col, visited, n, output);
            output = output.substring(0, output.length() - 1);
        }

        // left
        row = r;
        col = c - 1;
        if (isValid(row, col, visited, nums, n)) {
            output += 'L';
            solve(nums, row, col, visited, n, output);
            output = output.substring(0, output.length() - 1);
        }

        // Right
        row = r;
        col = c + 1;
        if (isValid(row, col, visited, nums, n)) {
            output += 'R';
            solve(nums, row, col, visited, n, output);
            output = output.substring(0, output.length() - 1);
        }

        // Up
        row = r - 1;
        col = c;
        if (isValid(row, col, visited, nums, n)) {
            output += 'U';
            solve(nums, row, col, visited, n, output);
            output = output.substring(0, output.length() - 1);
        }

        visited[r][c] = false;

    }

    static void maze(int nums[][], int n) {
        boolean visited[][] = new boolean[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                visited[i][j] = false;
            }
        }

        solve(nums, 0, 0, visited, n, "");
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size");
        int n = sc.nextInt();

        int nums[][] = new int[n][n];

        System.out.println("Enter the elements");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                nums[i][j] = sc.nextInt();
            }
            System.out.println();
        }

        maze(nums, n);

        System.out.println(list);

        sc.close();
    }
}
