import numpy as np

def main():
   # 브로드캐스팅 비교연산
   x_1 = np.random.randint(1,100,10)  # 1에서 100까지 10개
   x_2 = np.random.randint(1,100,10)
   print(f"x_1 : {x_1}")
   print(f"x_2 : {x_2}")
   print(f"x_1 > x_2 : {x_1 > x_2}")

   # 비교 연산 함수
   print(f"(x_1 > x_2).all() : {(x_1 > x_2).all()}")
   print(f"(x_1 > x_2).any() : {(x_1 > x_2).any()}")
   print(f"(x_1 > 100).all() : {(x_1 > 100).all()}")
   print(f"(x_1 > 0) : {(x_1 > 0)}")
   print(f"(x_1 > 0).all() : {(x_1 > 0).all()}")
   print(f"(x_1 > 0).any() : {(x_1 > 0).any()}")

   # where
   x = np.array([4,6,7,3,2])
   print(x > 5)
   print(np.where(x > 5))
   for i in np.where(x > 5):
      print(f"x[i] : {x[i]}")

   # argsort, argmax, argmin
      #argsort
   print(np.argsort(x))
   for i in np.argsort(x):
      print(f"x[i] : {x[i]}")
   
      #argmax, argmin
   print(np.argmax(x))
   print(np.argmin(x))
   print(x[np.argmax(x)])
   print(x[np.argmin(x)])


if __name__ == "__main__":
    main()
