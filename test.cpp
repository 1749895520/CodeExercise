//
// Created by ZFiend on 2022/6/7.
//

#include "test.h"
#include "bits/stdc++.h"
int main(void) {
    char s1[] = "ahpu", s2[] = "shujukexue";
    int i = 0, j = 0;
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
    {
        s1[i++] = s2[j++];
    }
    puts(s1);
    return 0;
}
