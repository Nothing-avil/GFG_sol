class Solution {
  public:
    int rectanglesInCircle(int r) {
         int rectangles = 0;
        int diameter = 2 * r;
        int diameterSquare = diameter * diameter;
        for (int a = 1; a < 2 * r; a++) {
            for (int b = 1; b < 2 * r; b++) {
                int diagonalLengthSquare = (a * a + b * b);
                if (diagonalLengthSquare <= diameterSquare) {
                    rectangles++;
                }
            }
        }
     
        return rectangles;
    }
};
