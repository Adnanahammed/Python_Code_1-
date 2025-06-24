def calculate_average(scores):
    total = sum(scores)
    avg = total / len(scores)
    return avg

def main():
    student_scores = []
    num_students = int(input("학생 수를 입력하세요: "))

    
    for i in range(num_students):
        score = int(input(f"학생 {i+1}의 점수를 입력하세요: "))
        student_scores.append(score)

    average_score = calculate_average(student_scores)
    print(f"\n전체 학생 평균 점수는: {average_score:.2f}점 입니다.")

    
    for i in range(num_students):
        if student_scores[i] >= average_score:
            result = "(평균 이상)"
        else:
            result = "(평균 미만)"
        print(f"학생 {i+1} 점수: {student_scores[i]}점 {result}")


if __name__ == "__main__":
    main()
