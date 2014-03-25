//
//  UIView+Draw.h
//  GTImageViewDraw
//
//  Created by Gianluca Tursi on 25/03/14.
//  Copyright (c) 2014 Gianluca Tursi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Draw)

- (void)startDrawing;
-(void)stopDrawing;
-(void)resetImage;
-(void)setBrush:(CGFloat) b;
-(void) setColor:(UIColor *) color;
- (UIImage*)imageByCombiningImage:(UIImage*)firstImage withImage:(UIImage*)secondImage;
-(void) save;
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
-(void)selectRubber;

@end
