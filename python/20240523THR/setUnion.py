def main():
    s = set({1,2,3,1,2,3})
    s1 = {1,2,3,1,2,3}
    print(s)
    print(s1)
    #method
    s.add(7)
    print(s)
    s.remove(1)
    print(s)
    s.update([11,12,13])
    s.update({14,15,16})
    print(s)
    #합, 교, 차 집합
    s2 = s1.union(s)    #s2 = s1 | s
    s3 = s1.intersection(s)     #s3 = s1 & s
    s4 = s1.difference(s)       #s4 = s1 - s
    s5 = s.difference(s1)       #s5 = s - s1
    print(s3)
    print(s4)
    print(s5)


if __name__ == "__main__":
    main()