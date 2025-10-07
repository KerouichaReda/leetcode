/*
 * 976_largest_perimeter_triangle.cxx
 *
 * Copyright 2025 - present RedaKerouicha <reda_kerouicha@outlook.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <map>
#include <numeric>
#include <algorithm>

int largestPerimeter(std::vector<int>& nums) {
    std::sort(nums.rbegin(), nums.rend());
    for (int i = 0, size = nums.size() - 2; i < size; i++) {
        if (nums[i] < (nums[i + 1] + nums[i + 2])) return nums[i] + nums[i + 1] + nums[i + 2];
    }
    return 0;
}

int main(int argc, char** argv) {
    std::cout << largestPerimeter(std::vector<int>{1, 2, 3}) << std::endl;
    return 0;
}
