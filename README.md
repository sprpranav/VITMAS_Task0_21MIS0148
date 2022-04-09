# GIT COMMANDS
## git init 
The git init command creates a new Git repository.

## git status
The git status command is used to display the state of the repository and staging area. It allows us to see the tracked, untracked files and changes. 

## git add filename
The file you specify can be any file or folder in your Git repository. 

## git commit -m "Comments"
The "commit" command is used to save your changes to the local repository with the commit's message.

## git log
The git log command shows a list of all the commits made to a repository. You can see the hash of each Git commit , the message associated with each commit, and more metadata. This command is useful for displaying the history of a repository.

## git remote add origin **url**
This is useful for creating a local copy of a central repository, since it provides an easy way to pull upstream changes or publish local commits.

## git push -u origin master
git push origin master will push your changes to the remote server. "master" refers to master branch in your repository.

## git push
git push command updates the remote repository with local commits. And origin represents a remote name where the user wants to push the changes.

## git branch branchname
The git branch command allows you to create new branches.

## git checkout branchname
The git checkout command is used to switch between branches in a repository.

## git merge branchname
The "merge" command is used to integrate changes from another branch.

## [Youtube Link](https://youtu.be/sa0OJ0xctAg)

## git branch -D branchname
It will delete the branch even if it has not been merged into the branch you're currently in. -d however, will warn you and won't delete the branch until its been merged.

## git push origin --delete branchname
To delete a remote branch, you can’t use the git branch -D command. Instead, use the git push command with --delete flag, followed by the name of the branch you want to delete.




  

