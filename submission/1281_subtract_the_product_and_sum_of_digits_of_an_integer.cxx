/*
 * 1281_subtract_the_product_and_sum_of_digits_of_an_integer.cxx
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

int subtractProductAndSum(int n, int pro = 1, int sum = 0) {
    return n == 0 ? pro - sum : subtractProductAndSum(n / 10, pro * (n % 10), sum + (n % 10));
}

int main(int argc, char** argv) {
    std::cout << subtractProductAndSum(8) << std::endl;
    return 0;
}
