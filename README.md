# 2025progranming_LAB1

* 以一次使用git的错误：README, .gitignore选项
* 这个选项最好不要勾选 他会在仓库建立的时候 自动创建一个README.md
* 用于仓库初始化 但是 这会在本地文件使用git指令上传仓库时遭到问题
* 因为本地没有这个README.md文件 所以 git认为 本地和仓库的文件 没有共同祖先
* 需要使用git pull origin main --allow-unrelated-histories（尤其后面这个参数）
* 强行建立祖先