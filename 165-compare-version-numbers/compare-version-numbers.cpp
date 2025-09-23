class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n1 = version1.size(), n2 = version2.size();
        int ver1 = 0, ver2 = 0;

        while (ver1 < n1 || ver2 < n2) {
            int c1 = 0, c2 = 0;

            // Parse next number from version1
            while (ver1 < n1 && version1[ver1] != '.') {
                c1 = c1 * 10 + (version1[ver1] - '0');
                ver1++;
            }

            // Parse next number from version2
            while (ver2 < n2 && version2[ver2] != '.') {
                c2 = c2 * 10 + (version2[ver2] - '0');
                ver2++;
            }

            if (c1 < c2) return -1;
            if (c1 > c2) return 1;

            // Skip the '.' if present
            ver1++;
            ver2++;
        }

        return 0;
    }
};