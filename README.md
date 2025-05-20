# Practice-B

<details>
<summary><h2>A - Registration System</h2></summary>
A new e-mail service "Berlandesk" is going to be opened in Berland in the near future. The site administration wants to launch their project as soon as possible, that's why they ask you to help. You're suggested to implement the prototype of site registration system. The system should work on the following principle.

Each time a new user wants to register, he sends to the system a request with his name. If such a name does not exist in the system database, it is inserted into the database, and the user gets the response OK, confirming the successful registration. If the name already exists in the system database, the system makes up a new user name, sends it to the user as a prompt and also inserts the prompt into the database. The new name is formed by the following rule. Numbers, starting with 1, are appended one after another to name (name1, name2, ...), among these numbers the least i is found so that namei does not yet exist in the database.

**Input:**

The first line contains number n (1 ≤ n ≤ 10⁵). The following n lines contain the requests to the system. Each request is a non-empty line, and consists of not more than 32 characters, which are all lowercase Latin letters.

**Output:**

Print n lines, which are system responses to the requests: OK in case of successful registration, or a prompt with a new name, if the requested name is already taken.

**Examples:**

```plaintext
Input:
    4
    abacaba
    acaba
    abacaba
    acab

Output:
    OK
    OK
    abacaba1
    OK
```

```plaintext
Input:
    6
    first
    first
    second
    second
    third
    third

Output:
    OK
    first1
    OK
    second1
    OK
    third1
```

</details>
<details>
<summary><h2>B - CD</h2></summary>
Jack and Jill have decided to sell some of their Compact Discs, while
they still have some value. They have decided to sell one of each of
the CD titles that they both own. How many CDs can Jack and Jill
sell?

Neither Jack nor Jill owns more than one copy of each CD.

**Input:**

The input consists of a sequence of test cases. The first line of each
test case contains two non-negative integers N and M, each at most
one million, specifying the number of CDs owned by Jack and by Jill, respectively. This line is followed by N lines listing the catalog numbers of the CDs owned by Jack in increasing order, and M more lines listing the catalog numbers of the CDs owned by Jill in increasing order. Each catalog number is a positive integer no greater than one billion. The input is terminated by a line containing two zeros. This last line is not a test case and should not be processed.

**Output:**

For each test case, output a line containing one integer, the number of CDs that Jack and Jill both own.

**Examples:**

```plaintext
Input:
    3 3
    1
    2
    3
    1
    2
    4
    0 0

Output:
    2
```

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>
