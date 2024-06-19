class Solution {
  public:
    double maxVolume(double per, double a) {
        double len= (per/2-sqrt(per*per/4-6*a))/6;
        return len*len*(per/4-2*len);
    }
};
