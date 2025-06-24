def countVowel(string):
    count=0
    for ch in string:
      if ch in ["a" ,"e" ,"o" ,"u"]:
            count +=1

    return count


s=input("문자열을 입력하세요: ")
n=countVowel(s)
print("모음의 개수는", n, "개 입니다")
