## Repositry containing many coding examples and practices along with concepts and cookbooks. 

### Setting up venv 
Use requirments.txt for having all the libraries required for this repo. 
Note: also add the folder for the venv in .gitignore as its good practice for many reasons. 



``` bash
python3 -m venv liveenv
source liveenv/bin/activate
pip install -r requirements.txt 
```

Alternatively , Run the bash script , env_setup.sh

### Setting up with uv 
# With pip
pip install uv

# With Homebrew.
brew install uv
```


### Create a virtual environment
Create a virtual environment at .venv. with a particular version of python, eg python3.11

```
uv venv --python=$(which python3.11)
```

To activate the virtual environment:

```
source .venv/bin/activate
```


```
uv pip sync requirements.txt
```