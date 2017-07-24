HXVariability: A cross-platofrm benchmark for performance evaluation of Haxe code generators
========================================================================

## What it is?
-An environment for evaluating the quality of generated code by Haxe compilers.

-Particularly, we evaluate the performance and resource usage of generated code for a bench of target platforms.

-We automatically detect inconsistencies by evaluating the performance/resource usage variation of test suites running across different platforms.
## Case study
-The benchmark is built based on several Haxe official libraries available here https://lib.haxe.org/all/

-We selected 10 libraries and for each library we run a list of test suites.

-Test suites are written in Haxe and they are available under *"library_name/test"*
## Variability analysis
We use two popular statistical methods to analyze the performance/resource usage variability:

**-PCA (Principal Component Analysis):** allows to visualize the non-functional data on 2-dimensional scatter plot. Deviations with very large variation from the cluster points are detected as outliers (or "inconsistencies")

**-R-char (Range Charts):** compute the range difference per benchmark in order ton analyze the variation of test suites running on multiple platforms.
## Target platforms
-We use compiler flags to target diverse software platforms. Furthermore, we apply some predefined compiler options to evaluate the impact of these flags on the generated code. The complete list is available in the file *"target_flags".*

-You can edit it to target more advanced options. In the following the list of options we have applied:

| language/flag |          |          |                     |        |       |    |
|-----------------|-----------|----------|---------------------|--------|-------|----|
| C++             | O0        | O1       | O2                  | O3     | Ofast | Os |
| JAVA            | no-inline | dce=full | no-pattern-matching       | no-opt |       |    |
| C#              | no-inline | dce=full | no-pattern-matching       | no-opt |       |    |
| PHP             | no-inline | dce=full | no-pattern-matching | no-opt |       |    |


## Testing and monitoring environment
-We rely on Docker to run test suites on lightweight and isolated containers. We benefit from this technology to make our benchmark environment reproductible for further analysis.

-We bridge this environment with a runtime monitoring engine to get the information about the memroy usage.

-We use the following containers to ensure the resource usage monitoring of running test suites (configured in  *docker-compose.yml*):

> -Time series database: tutum/influxdb:0.13
> 
> -Cgroups monitoring engine: google/cadvisor:latest
> 
> -Visualization dashboard: grafana/grafana:latest
> 
> -Docker version 17.06.0-ce

## How to use

### What you need?


-Since we use a preconfigured docker environenment to run all experiements, you just require to install a recent version of Docker (version 17.06.0).
Then, you need to clone the project:
```
git clone https://github.com/mboussaa/HXvariability.git /HXvariability
cd /Hxvariability
```

> Latest docker image of the project: mboussaa/haxe
> https://hub.docker.com/r/mboussaa/haxe/

### Compile Haxe benchmarks
-If you want to compile all test suites and haxe libraries to different target platforms, you have to run the following script:
```
./compileAll.sh
```
-The generated variants are generated according to a configuration file (*"target_flags"*) where we define the target platforms and optimisations. You can easily add new targets/optimisation flags to this file in order to compile to more targets.

-As well, the target libraries names are listed in *"benchs"* file. You can add new libraries and test suites and then add the library name to this file in order to compile it.
> **Note:**
> - The code generation and compilation may be too long (more than 10 hours), you can escape this step if you want to directly run the generated code. The compiled code exists in **"/library_name/target/"**.

### Start monitoring containers
-Starting the required services for monitoring the containers is simple. You have just to run:
```
docker-compose up
```
-The *docker-compose.yml* file contains all the configurations needed to monitor containers.
### How to run test suites once the code is generated
-To do so, we prepared a configuration file to run all the generated code (runAll.sh). You can select the code to generate in the *"benchExec"* file.
To run all test suites across the different software platforms you need to do:
```
./runAll.sh
```
### Where you can find the non-functional data
-During code execution the gathered performance and resource usage data are saved in CSV files for further analysis. They are available in:
> **CSV files:**
> 
> /HXvariability/statistics

