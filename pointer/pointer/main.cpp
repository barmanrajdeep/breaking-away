//
//  main.cpp
//  pointer
//
//  Created by Rbarman on 18/06/18.
//  Copyright © 2018 Rbarman. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
char* strstr(const char*, const char*);
int strcmp(const char*, const char*);
char* strcat_r(char*, char*);
int main(int argc, const char * argv[]) {
    char* s = (char*) "rajdeep";char* n = (char*) "rajdee";
//    char* s = (char*) "rajdeep";char* n = (char*) "rajdee";
    cout << strcmp(s, n) << endl;
//    char* s = (char*) "rajdeep";
//    char* n = (char*) "ajdeep";
//    char* pos = strstr(s, n);
//    if(pos != NULL) {
//        cout << "true" << endl;
//    } else {
//        cout << "false" << endl;
//    }
}
char* strstr(const char* haystack, const char* needle) {
    if (haystack == NULL || needle == NULL) return NULL;
    
    while ( *haystack != '\0') {
        const char *h = (char*) haystack;
        const char *n = (char*) needle;
        while ( *h == *n && *n != '\0' ) {
            h++;
            n++;
            if (*n == '\0') {
                return (char*) haystack;
            }
        }
        haystack++;
    }
    return NULL;
}

int strcmp(const char* str1, const char* str2) {
    if (str1 == NULL && str2 == NULL) {
        return 0;
    }
    if (str1 == NULL) return -1;
    if (str2 == NULL) return 1;
    char* s1 = (char*) str1;
    char* s2 = (char*) str2;
    while ( *s1 != '\0' && *s2 != '\0' ) {
        if ( *s1 >= 65 && *s1 <= 90 ) {
            *s1 += 32;
        }
        if ( *s2 >= 65 && *s2 <= 90 ) {
            *s2 += 32;
        }
        if ( *s1 == *s2 ) {
            s1++;
            s2++;
        } else {
            if ( *s1 < *s2 ) return -1;
            if ( *s2 < *s1 ) return 1;
        }
    }
    if (*s1 == '\0') return -1;
    if (*s2 == '\0') return 1;
    return 0;
}
char* strcat_r(char* dest, char* src) {
    char* d = dest;
    while ( *d != '\0' ) d++;
    while ( *src != '\0' ) {
        *d = *src; // assuming destination has space to add src
        d++;
        src++;
    }
    *d = '\0';
    return dest;
}
//    int y = 2;
//    int* x = NULL;
//    x = &y;
//    cout << x << endl;
//    int arr[4] = {1,2,3,4};
//    int* arrPtr = arr;
//    cout << *(arrPtr) << endl;
//    cout << *(arrPtr+1) << endl;
//    char* str = "ra";
//    cout << *str << endl;
//    cout << *(str+1) << endl;
//    cout << *(str+2) << endl;
