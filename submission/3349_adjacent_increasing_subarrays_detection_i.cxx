/*
 * 3349_adjacent_increasing_subarrays_detection_i.cxx
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

bool hasIncreasingSubarrays(std::vector<int>& nums, int k) {
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
    for (int i = 0, size = temp.size() - 1; i < size; i++) {
        if (temp[i] >= (2 * k) || (temp[i] >= k && temp[i + 1] >= k)) return true;
    }

    return false;
}

int main(int argc, char** argv) {
    std::vector<int> nums = {1, 2};
    std::cout << hasIncreasingSubarrays(nums, 1) << std::endl;
    return 0;
}
