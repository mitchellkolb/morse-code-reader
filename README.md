


<h1 align="center">Morse Code Reader</h1>

<p align="center">
  <img alt="Github top language" src="https://img.shields.io/github/languages/top/mitchellkolb/morse-code-reader?color=DE4830">

  <img alt="Github language count" src="https://img.shields.io/github/languages/count/mitchellkolb/morse-code-reader?color=DE4830">

  <img alt="Repository size" src="https://img.shields.io/github/repo-size/mitchellkolb/morse-code-reader?color=DE4830">

  <img alt="Github stars" src="https://img.shields.io/github/stars/mitchellkolb/morse-code-reader?color=DE4830" />
</p>

<p align="center">
<img
    src="https://img.shields.io/badge/C++-DE4830?style=for-the-badge&logo=c&logoColor=white"
    alt="Website Badge" />
<img
    src="https://img.shields.io/badge/Xcode-000000?style=for-the-badge&logo=apple&logoColor=white"
    alt="Website Badge" />
</p>

In this project, I created a Morse code converter using a Binary Search Tree (BST) to efficiently map and convert English text into Morse code. By leveraging the BST's quick lookup capabilities, I was able to develop a tool that translates text to Morse code with speed and accuracy, showcasing practical applications of data structures in solving real-world problems.

![project image](resources/image1.png)

<details>
<summary style="color:#5087dd">Watch the Full Video Demo Here</summary>

[![Full Video Demo Here](https://img.youtube.com/vi/VidKEY/0.jpg)](https://www.youtube.com/watch?v=VidKEY)

</details>

---


# Table of Contents
- [What I Learned](#what-i-learned-in-this-project)
- [Tools Used / Development Environment](#tools-used--development-environment)
- [Team / Contributors / Teachers](#team--contributors--teachers)
- [How to Set Up](#how-to-set-up)
- [Project Overview](#project-overview)
  - [Data Structures Used](#data-structures-used)
  - [Files and Input/Output](#files-and-inputoutput)
  - [Results](#results)
  - [Future Work](#future-work)
- [Acknowledgments](#acknowledgments)

---

# What I Learned in this Project
- How to
- Programming in 



# Tools Used / Development Environment
- C++
- Xcode
- Terminal
- MacOS





# Team / Contributors / Teachers
- [Mitchell Kolb](https://github.com/mitchellkolb)
- Professor. Nadra Guizani





# How to Set Up
This project was implemented on my macbook using:
- Xcode at the time. Any terminal with gcc installed will work
- Clone this repository 
- Open terminal at the codebase `~.../morse-code-reader/morse-codebase/`
- Run the `a.out` that is included or compile your own executable with
```zsh
g++ -o my_program main.cpp
```
- Then use `./a.out` or `./my_program` depending on whatever you named your executable.





# Project Overview
This project is designed to efficiently convert English text into Morse code using a Binary Search Tree (BST). The BST structure allows for quick lookup and retrieval of Morse code equivalents for English characters. I developed this project as part of a programming assignment focused on applying data structures like BSTs in practical scenarios. 

The process begins by reading a preset table of Morse code mappings from the `MorseTable.txt` file and constructing a BST where each node represents a character and its corresponding Morse code. Once the tree is built, the project reads English text from the `Convert.txt` file, converts each character to Morse code using the BST, and outputs the corresponding Morse code.

## Data Structures Used
I employed a Binary Search Tree (BST) to map English characters to their respective Morse code representations. Each node in the tree contains a character and its corresponding Morse code string. The BST structure allows for efficient insertion and searching, which is crucial for converting large texts quickly.

## Files and Input/Output
- **`Convert.txt`**: This file contains the English text that will be converted to Morse code. For example, the content "This is a test of the cpts 122 Morse code conversion tool" is converted into Morse code.
- **`MorseTable.txt`**: This file contains the mappings of English characters to Morse code. Each line of this file represents a character and its corresponding Morse code, such as `e$.` and `t$-`.

## Results
With this codebase I successfully converted various English text inputs into Morse code. The conversion was printed to the console, and I demonstrated the effectiveness of the BST in handling the lookup and conversion tasks. The conversion process handled both alphabetic characters and special symbols.

## Future Work
Future improvements could include optimizing the BST to self-balance for even faster lookups, adding functionality to convert Morse code back to English, and expanding the set of characters and symbols supported by the converter.





--- 
# Acknowledgments
This codebase and all supporting materials was made as apart of a course for my undergrad at WSU for CPTS 122 - Data Structures C/C++ in the Summer of 2020. 

