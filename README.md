## GTImageView Draw

This is a simple category to make your UIImageView drawable.

###How to Use

Copy `UIImageView+Draw.h` and `UIImageView+Draw.m` into your project.

Import in your Controller:

```
#import "UIImageView+Draw.h"
```

When we want to enable the drawing of writing the image:
```
[self.myImage startDrawing];
```
When we want to disable the drawing of writing the image:
```
[self.myImage stopDrawing];
```

Done.

### Methods
#### Change Color

```
[self.myImage setColor:[UIColor blueColor]];    
```

#### Change Brush

```
[self.myImage setBrush:[(UISlider *)sender value]]; 
```

#### Select Rubber

```
[self.myImage selectRubber];
```

#### Reset image

```
[self.myImage resetImage];
```


#### Save Photo

```
[self.myImage save];
```

![GTImageView+Draw](https://copy.com/AyGPDxATAhB2).


**Clone this repository and play the Demo.
Enjoy.**
