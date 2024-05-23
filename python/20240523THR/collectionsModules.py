from collections import deque
from collections import OrderedDict, defaultdict

# 복사해주세요

def main():
    deque_list = deque()
    for i in range(5):
        deque_list.append(i)
    print(deque_list)
    deque_list.appendleft(10)
    print(deque_list)
    deque_list.rotate(2)
    print(deque_list)
    deque_list.pop()
    print(deque_list)
    deque_list.popleft()
    print(deque_list)

    #OrderedDict
    d = OrderedDict()
    d['x'] = 100
    d['y'] = 200
    d['z'] = 300
    d['l'] = 500

    for k, v in d.items():
        print(k, v)

    for k, v in OrderedDict(sorted(d.items(), key=lambda t: t[0])).items():
        print(k, v)

if __name__ == '__main__':
    main()