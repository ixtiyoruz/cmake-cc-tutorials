# cmake_tutorials
this is cmake tutorial

git dan foydalanish

tezkor :
<pre>
git commit -a yoki git commit -am "<commit message>"
git push origin
</pre>
agar git username va passwordni saqlab qolmoqchi bo'lsangiz:
<pre>
git config credential.helper store
</pre>
agar untracked files ni ko'rmoqchi bo'lsangiz :
<pre>
git ls-files --others --exclude-standard
</pre>
tensorflowni o'rnatish uchun configuratsiyadan keyin quyidagi commanda bilan build qiling:
<pre>
bazel build --jobs=12 --config opt --config cuda  --config monolithic tensorflow:libtensorflow_cc.so
</pre>

and some useful links:

1. git commands 

https://dont-be-afraid-to-commit.readthedocs.io/en/latest/git/commandlinegit.html

2. easy way to use hungarian algorithm in python:

https://docs.scipy.org/doc/scipy-0.18.1/reference/generated/scipy.optimize.linear_sum_assignment.html
