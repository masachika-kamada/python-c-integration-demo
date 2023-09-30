import time
import sum_array_module

N = 100000000  # 1億

# C拡張モジュールを使用
t0 = time.time()
result = sum_array_module.sum_array(N)
t1 = time.time() - t0
print(f"Result with C extension: {result}, Time: {t1} seconds")

# 純粋なPythonを使用
t0 = time.time()
result = sum(range(N))
t1 = time.time() - t0
print(f"Result with pure Python: {result}, Time: {t1} seconds")
