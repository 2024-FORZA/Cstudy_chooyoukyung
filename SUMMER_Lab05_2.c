#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 학생 구조체 정의
typedef struct {
    char name[11];
    int korean;
    int english;
    int math;
} Student;

// 정렬 함수
int compare(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;

    // 국어 점수를 내림차순으로 정렬
    if (studentA->korean != studentB->korean)
        return studentB->korean - studentA->korean;

    // 국어 점수가 같으면 영어 점수를 오름차순으로 정렬
    if (studentA->english != studentB->english)
        return studentA->english - studentB->english;

    // 국어 점수와 영어 점수가 같으면 수학 점수를 내림차순으로 정렬
    if (studentA->math != studentB->math)
        return studentB->math - studentA->math;

    // 모든 점수가 같으면 이름을 사전순으로 오름차순 정렬
    return strcmp(studentA->name, studentB->name);
}

int main() {
    int n;
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].korean, &students[i].english, &students[i].math);
    }

    // qsort 함수로 정렬
    qsort(students, n, sizeof(Student), compare);

    // 결과 출력
    for (int i = 0; i < n; i++) {
        printf("%s\n", students[i].name);
    }

    return 0;
}