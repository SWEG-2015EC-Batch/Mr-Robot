```mermaid
graph TD;
    A[Start] --> B[Enter a character];
    B --> C{Is the character a vowel?};
    C -- Yes --> D[Display "Vowel"];
    C -- No --> E[Display "Consonant"];
    E --> F[End];
    D --> F[End];
```
