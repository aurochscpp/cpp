# cpp


https://github.com/aurochscpp
https://github.com/aurochscpp/cpp.git/




https://github.com/
MH@yuannew.net
Aur19

https://github.com/AUROCHS90

https://github.com/aurochscpp/cpp.git






Ubuntu下git的安装与使用
sudo apt-get install git
git config --global user.name "xxx"和 git config --global user.email "你的邮箱地址"

配置完成后，需要创建验证用的公钥，因为git是通过ssh的方式访问资源库的，所以需要在本地创建验证用的文件。使用命令ssh-keygen -C 'you email address@gmail.com' -t rsa（注意ssh与-keygen之间没有空格），会在用户目录~/.ssh/下建立相应的密钥文件。





创建完公钥后，需要上传。使用命令cd ~/.ssh进入~/.ssh文件夹，输入gedit id_rsa.pub打开id_rsa.pub文件，复制其中所有内容。接着访问http://git.oschina.net/profile网页，点击SSH公钥，标题栏可以随意输入，公钥栏把你刚才复制的内容粘贴进去就OK了。

可以使用ssh -T git@git.oschina.net命令来测试连接是否畅通。


接下来的内容就和在Windows下使用git上传一样了，先自己创建一个文件夹，把敲的代码拷贝进去（或者每次使用vim的时候直接切到该文件夹目录下进行编辑），先使用git init指令初始化一个git仓库，接着输入git add .添加文件，输入git commit -m "注释"提交至仓库。


输入git remote add origin https://git.oschina.net/你的用户名/项目名.git，git push origin master即可完成推送









通过运行以下命令确保您的系统和apt包列表完全更新：
apt-get update -y
apt-get upgrade -y

查看.gitconfig来验证配置更改：
git config --list


https://www.linuxidc.com/Linux/2018-05/152610.htm
https://www.cnblogs.com/lxm20145215----/p/5905765.html








添加新文件

我们有一个仓库，但什么也没有，可以使用add命令添加文件。

git add filename

可以使用add... 继续添加任务文件。

提交版本

现在我们已经添加了这些文件，我们希望它们能够真正被保存在Git仓库。

为此，我们将它们提交到仓库。

git commit -m "Adding files"

如何在Ubuntu 18.04上安装Git与入门教程

如果您不使用-m，会出现编辑器来让你写自己的注释信息。

当我们修改了很多文件，而不想每一个都add，想commit自动来提交本地修改，我们可以使用-a标识。

git commit -a -m "Changed some files"

git commit 命令的-a选项可将所有被修改或者已删除的且已经被git管理的文档提交到仓库中。

千万注意，-a不会造成新文件被提交，只能修改。

发布版本

我们先从服务器克隆一个库并上传。

git clone ssh://example.com/~/www/project.git

现在我们修改之后可以进行推送到服务器。

git push ssh://example.com/~/www/project.git

取回更新

如果您已经按上面的进行push，下面命令表示，当前分支自动与唯一一个追踪分支进行合并。

git pull

从非默认位置更新到指定的url。

git pull http://git.example.com/project.git

已经超过了五分钟？

删除

如何你想从资源库中删除文件，我们使用rm。

git rm file

分支与合并

分支在本地完成，速度快。要创建一个新的分支，我们使用branch命令。

git branch test

branch命令不会将我们带入分支，只是创建一个新分支。所以我们使用checkout命令来更改分支。

git checkout test

第一个分支，或主分支，被称为"master"。

git checkout master

对其他分支的更改不会反映在主分支上。如果想将更改提交到主分支，则需切换回master分支，然后使用合并。

git checkout master

git merge test

如果您想删除分支，我们使用-d标识。

git branch -d test






