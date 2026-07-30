// CSE Summer Series — Week 2 — the "is it really working?" exercise
//
// This is a C solution to last week's problem (length of the last word).
// It compiles. It runs. It even looks reasonable. Your job is to find out
// whether you can trust it.
//
//   1. Build and run it:
//        gcc -o lastword lastword.c
//        ./lastword
//      What does it print? Run it a few more times — same answer every time?
//      (Try changing "hello" on the marked line below to another single word
//      and rebuilding.)
//
//   2. Now build it again WITH AddressSanitizer — a memory-bug detector that
//      ships with gcc, no install needed — and run it:
//        gcc -g -fsanitize=address -o lastword lastword.c
//        ./lastword
//      Read what it tells you. Which line is it pointing at? What is it
//      complaining about?
//
//   3. Ask your AI assistant: "why does this C function read memory it
//      shouldn't, and how do I fix it?" Apply the fix, rebuild with
//      -fsanitize=address, and confirm it's now clean.
//
//   Report back on Discord: the (probably wrong) number step 1 gave you, and
//   the one line ASan blamed. Then tell me the one-line fix.

#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s) {
    int i = strlen(s) - 1;

    while (s[i] == ' ') {          // skip trailing spaces
        i--;
    }
    int len = 0;
    while (s[i] != ' ') {          // count the last word
        len++;
        i--;
    }
    return len;
}

int main(void) {
    char s[] = "hello";           // <-- try changing this word
    printf("input=\"%s\"  ->  lengthOfLastWord = %d\n", s, lengthOfLastWord(s));
    return 0;
}
