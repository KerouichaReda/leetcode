/*
 * 3350_adjacent_increasing_subarrays_detection_ii.cxx
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

int maxIncreasingSubarrays(std::vector<int>& nums) {
    int solution{0};
    std::vector<int> temp;
    int pre = nums[0];
    for (int e : nums) {
        if (temp.empty() || pre >= e) {
            temp.push_back(1);
        } else {
            temp.back()++;
        }
        pre = e;
    }
    temp.push_back(0);
    for (int i = 0, size = temp.size(); i < size - 1; i++) {
        solution = std::max(solution, temp[i] / 2);
        solution = std::max(solution, std::min(temp[i], temp[i + 1]));
    }

    return solution;
}
int main(int argc, char** argv) { 
    std::cout << maxIncreasingSubarrays{1,2,3,4} << std::endl;
    return 0; }
