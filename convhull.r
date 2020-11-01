library(tidyverse)
library(dismo)

#x <-c(0.1, 0, 0.03, 0, 0.3, -0.2, -0.21, 0.57, 0.44, -0.5, 0, -0.03, 0.3, -0.57, 0.01)
x <-c(0, 1.5, 1, -0.5, 0, 0.42, 0.98, 1.02, 0.5, -0.22)
#x <- c(1.22, 0.40, -0.44, -0.32, 0)
#y <- c(0.37, -1.06, -0.55, 0, -0.1, -0.2, 0.05,0, 0, 0.03, 1.06, 0.62, 0.26, 0, 0.9)
y <- c(1, 0, -0.5, -0.5, 0, -0.35, 0.1, 0.75, 0.66, -0.1)
y <- c(0.37, 0.20, -1, 1, 0.5)
p <- tibble(x,y)  

p %>% ggplot(aes(x=x,y=y)) + geom_point()

  c <- convHull(p)

plot(c)
plot(x,y)


