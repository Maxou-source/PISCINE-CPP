/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparisse <mparisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 04:32:06 by mparisse          #+#    #+#             */
/*   Updated: 2023/05/17 04:32:08 by mparisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string sentence = "This is a test sentence. Test is repeated multiple times.";

    std::string searchString = "Test";
    size_t pos = sentence.find(searchString); // Find the first occurrence of searchString

    while (pos != std::string::npos) {
        std::cout << "Found occurrence of \"" << searchString << "\" at index " << pos << std::endl;

        size_t substringLength = searchString.length();
        size_t endIndex = pos + substringLength;

        std::cout << "End index of occurrence: " << endIndex << std::endl;

        pos = sentence.find(searchString, endIndex); // Find the next occurrence of searchString
    }

    return 0;
}
